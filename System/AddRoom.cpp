#include "AddRoom.h"
#include "Utils.h"

namespace System {
	AddRoom::AddRoom(void) {
		InitializeComponent();
		mySqlConn(conn);
	}

	AddRoom::~AddRoom() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	System::Void AddRoom::imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		tempImgLoc = openFile();
	}

	System::Void AddRoom::rcodeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomCode = rmWhiteSpaces(rcodeTxtBox->Text);
	}
	
	System::Void AddRoom::bldgTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBuilding = rmWhiteSpaces(bldgTxtBox->Text);
	}
	
	System::Void AddRoom::statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempStatus = rmWhiteSpaces(statusCBox->Text);
	}
	
	System::Void AddRoom::roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomType = rmWhiteSpaces(roomTypeCBox->Text);
	}

	System::Void AddRoom::boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBoardType = rmWhiteSpaces(boardTypeCBox->Text);
	}
	
	System::Void AddRoom::tvAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempTv = rmWhiteSpaces(tvAvailCBox->Text);
	}
	
	System::Void AddRoom::acAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAc = rmWhiteSpaces(acAvailCBox->Text);
	}
	
	// Confirmation button
	System::Void AddRoom::confirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!doesRoomExists())
			insertRoom();

		this->Close();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Check if room code is already present on db 
	bool AddRoom::doesRoomExists(void) {
		bool isAlreadyUsed = false;

		try {
			String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @tempRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempRoomCode", tempRoomCode);

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->HasRows) {
				MessageBox::Show(String::Concat("Warning: " + rmWhiteSpaces(tempRoomCode) + " has already been used!"));
				isAlreadyUsed = true;
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		return isAlreadyUsed;
	}

	// Insert new room
	void AddRoom::insertRoom(void) {
		try {
			// Reads image and copy to 'profileImg' in binary
			array<unsigned char>^ img;
			if (!String::IsNullOrWhiteSpace(tempImgLoc)) {
				FileStream^ fs = gcnew FileStream(tempImgLoc, FileMode::Open, FileAccess::Read);
				BinaryReader^ br = gcnew BinaryReader(fs);
				img = br->ReadBytes(fs->Length);
			}

			// Insaerts new room info to db
			String^ insertQuery = "INSERT INTO room (`ROOM CODE`, BUILDING, STATUS, `ROOM TYPE`, `BOARD TYPE`, TV, AC, IMAGE) VALUES (@tempRoomCode, @tempBuilding, @tempStatus, @tempRoomType, @tempBoardType, @tempTv, @tempAc, @tempImage)";
			MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conn);
			cmdInsert->Parameters->AddWithValue("tempRoomCode", rmWhiteSpaces(tempRoomCode));
			cmdInsert->Parameters->AddWithValue("@tempBuilding", rmWhiteSpaces(tempBuilding));
			cmdInsert->Parameters->AddWithValue("@tempStatus", tempStatus);
			cmdInsert->Parameters->AddWithValue("@tempRoomType", rmWhiteSpaces(tempRoomType));
			cmdInsert->Parameters->AddWithValue("@tempBoardType", rmWhiteSpaces(tempBoardType));
			bool tvBool = (tempTv == "Available") ? true : false,
				 acBool = (tempAc == "Available") ? true : false;
			cmdInsert->Parameters->AddWithValue("@tempTv", tvBool);
			cmdInsert->Parameters->AddWithValue("@tempAc", acBool);
			cmdInsert->Parameters->Add("@tempImage", MySqlDbType::Blob)->Value = img;

			String^ header = "Add room confirmation";
			String^ text = "Confirm adding " + tempRoomCode + " ?";
			if (confirmDialogue(text, header)) {
				cmdInsert->ExecuteNonQuery();
				MessageBox::Show(tempRoomCode + " was added successfully!");
			}
			else {
				MessageBox::Show(tempRoomCode + " was not added!");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
}
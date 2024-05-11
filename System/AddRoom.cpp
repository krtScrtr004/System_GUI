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
		tempRoomCode = rcodeTxtBox->Text;
	}
	
	System::Void AddRoom::bldgTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBuilding = bldgTxtBox->Text;
	}
	
	System::Void AddRoom::statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempStatus = statusCBox->Text;
	}
	
	System::Void AddRoom::roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomType = roomTypeCBox->Text;
	}

	System::Void AddRoom::boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBoardType = boardTypeCBox->Text;
	}
	
	System::Void AddRoom::tvAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempTv = tvAvailCBox->Text;
	}
	
	System::Void AddRoom::acAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAc = acAvailCBox->Text;
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/
	
	System::Void AddRoom::confirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!searchRoomCode(tempRoomCode, conn))
			insertRoom();

		this->Close();
	}

	void AddRoom::insertRoom(void) {
		try {
			// Reads image and copy to 'profileImg' in binary
			array<unsigned char>^ img;
			if (!String::IsNullOrWhiteSpace(tempImgLoc)) {
				try
				{
					FileStream^ fs = gcnew FileStream(tempImgLoc, FileMode::Open, FileAccess::Read);
					BinaryReader^ br = gcnew BinaryReader(fs);
					img = br->ReadBytes(fs->Length);
				}
				catch (Exception^ e)
				{
					MessageBox::Show(e->Message);
				}
			}

			bool tvBool = (tempTv == "Available") ? true : false,
				acBool = (tempAc == "Available") ? true : false;

			String^ insertQuery = "INSERT INTO room (`ROOM CODE`, BUILDING, STATUS, `ROOM TYPE`, `BOARD TYPE`, TV, AC, IMAGE) VALUES (@tempRoomCode, @tempBuilding, @tempStatus, @tempRoomType, @tempBoardType, @tempTv, @tempAc, @tempImage)";
			MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conn);
			cmdInsert->Parameters->AddWithValue("tempRoomCode", tempRoomCode);
			cmdInsert->Parameters->AddWithValue("@tempBuilding", tempBuilding);
			cmdInsert->Parameters->AddWithValue("@tempStatus", tempStatus);
			cmdInsert->Parameters->AddWithValue("@tempRoomType", tempRoomType);
			cmdInsert->Parameters->AddWithValue("@tempBoardType", tempBoardType);
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
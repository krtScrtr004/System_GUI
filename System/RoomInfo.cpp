#include "Room.h"
#include "RoomInfo.h"
#include "Utils.h"

namespace System {
	RoomInfo::RoomInfo(Room^ other) : room(other) {
		InitializeComponent();
		mySqlConn(conn);
	}
	 
	RoomInfo::~RoomInfo() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form load
	System::Void RoomInfo::RoomInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		displayData();

		tempRoomCode = room->getRoomCode();
		tempBuilding = room->getBuilding();
		tempStatus = room->getStatus();
		tempRoomType = room->getRoomType();
		tempBoardType = room->getBoardType();
		tempTv = (room->getTv()) ? "Available" : "Not Available";
		tempAc = (room->getAc()) ? "Available" : "Not Available";
	}

	// Change image button
	System::Void RoomInfo::changeImgBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ loc = openFile();
		tempImgLoc = loc;
		roomImg->ImageLocation = loc;
	}

	// Room code text box
	System::Void RoomInfo::rcodeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomCode = rcodeTxtBox->Text;
	}

	// Building text box
	System::Void RoomInfo::buildingTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBuilding = buildingTxtBox->Text;
	}

	// Status combo box
	System::Void RoomInfo::statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempStatus = statusCBox->Text;
	}

	// Room type combo box
	System::Void RoomInfo::roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomType = roomTypeCBox->Text;
	}

	// Board type combo box
	System::Void RoomInfo::boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBoardType = boardTypeCBox->Text;
	}

	// TV availability combo box
	System::Void RoomInfo::tvCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempTv = tvCBox->Text;
	}

	// AC availability combo box
	System::Void RoomInfo::acCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAc = acCBox->Text;
	}

	// Edit button 
	System::Void RoomInfo::editInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!doesRoomExists()) {
			editRoomInfo();
			this->Close();
		}
	}

	// Delete hyperlink
	System::Void RoomInfo::deleteLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		deleteRoom();
		deleteAssociatedReservation();
		this->Close();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Display room's information to the form
	void RoomInfo::displayData(void) {
		try {
			if (room->getImg() != nullptr) {
				MemoryStream^ ms = gcnew MemoryStream(room->getImg());
				Image^ img = Image::FromStream(ms);
				roomImg->Image = img;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		rcodeTxtBox->Text = room->getRoomCode();
		buildingTxtBox->Text = room->getBuilding();
		statusCBox->Text = room->getStatus();
		roomTypeCBox->Text = room->getRoomType();
		boardTypeCBox->Text = room->getBoardType();
		tvCBox->Text = (room->getTv()) ? "Available" : "Not Available";
		acCBox->Text = (room->getAc()) ? "Available" : "Not Available";
	}

	// Check if room code is already present on db 
	bool RoomInfo::doesRoomExists(void) {
		bool isAlreadyUsed = false;

		try {
			String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @tempRoomCode AND BUILDING = @tempBuilding AND `ROOM TYPE` = @tempRoomType AND STATUS = @tempStatus AND `BOARD TYPE` = @tempBoardType AND TV = @tempTv AND AC = @tempAc";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempRoomCode", tempRoomCode);
			command->Parameters->AddWithValue("@tempBuilding", tempBuilding);
			command->Parameters->AddWithValue("@tempRoomType", tempRoomType);
			command->Parameters->AddWithValue("@tempStatus", tempStatus);
			command->Parameters->AddWithValue("@tempBoardType", tempBoardType);
			command->Parameters->AddWithValue("@tempTv", (tempTv == "Available") ? true : false);
			command->Parameters->AddWithValue("@tempAc", (tempAc == "Available") ? true : false);

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

	// Edit room's information to db
	void RoomInfo::editRoomInfo(void) {
		try {
			array<unsigned char>^ img;
			if (!String::IsNullOrWhiteSpace(tempImgLoc)) {
				FileStream^ fs = gcnew FileStream(tempImgLoc, FileMode::Open, FileAccess::Read);
				BinaryReader^ br = gcnew BinaryReader(fs);
				img = br->ReadBytes(fs->Length);
			}

			String^ query = "UPDATE room SET `ROOM CODE` = @tempRoomCode, BUILDING = @tempBuilding, STATUS = @tempStatus, `ROOM TYPE` = @tempRoomType, `BOARD TYPE` = @tempBoardType, TV = @tempTv, AC = @tempAc, IMAGE = @tempImage WHERE `ROOM CODE` = @origRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("tempRoomCode", rmWhiteSpaces(tempRoomCode));
			command->Parameters->AddWithValue("@tempBuilding", rmWhiteSpaces(tempBuilding));
			command->Parameters->AddWithValue("@tempStatus", rmWhiteSpaces(tempStatus));
			command->Parameters->AddWithValue("@tempRoomType", rmWhiteSpaces(tempRoomType));
			command->Parameters->AddWithValue("@tempBoardType", rmWhiteSpaces(tempBoardType));
			bool tvBool = (tempTv == "Available") ? true : false,
				 acBool = (tempAc == "Available") ? true : false;
			command->Parameters->AddWithValue("@tempTv", tvBool);
			command->Parameters->AddWithValue("@tempAc", acBool);
			command->Parameters->Add("@tempImage", MySqlDbType::Blob)->Value = img;
			command->Parameters->AddWithValue("origRoomCode", rmWhiteSpaces(room->getRoomCode()));

			String^ text = "Are you sure to edit " + tempRoomCode + "'s information?";
			String^ header = "Edit room information";
			if (confirmDialogue(text, header)) {
				command->ExecuteNonQuery();
				MessageBox::Show(tempRoomCode + "'s information was edited successfully!");
			}
			else {
				MessageBox::Show(tempRoomCode + "'s information was not edited!");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Delete room from the db
	void RoomInfo::deleteRoom(void) {
		try {
			String^ query = "DELETE FROM room WHERE `ROOM CODE` = @tempRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempRoomCode", tempRoomCode);

			String^ text = "You are trying to delete this room. Do you want to proceed?";
			String^ header = "Delete room confirmation";
			if (confirmDialogue(text, header)) {
				int affected = command->ExecuteNonQuery();
				if (affected > 0)
					MessageBox::Show(String::Concat((room->getRoomCode())->ToUpper() + " has successfully deleted!"));
				else 
					MessageBox::Show(String::Concat((room->getRoomCode())->ToUpper() + " cannot be found!"));
			}
			else {
				MessageBox::Show("Operation aborted!");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Delete associated reservations with room to be deleted on db
	void RoomInfo::deleteAssociatedReservation(void) {
		try {
			String^ query = "DELETE FROM reservation WHERE `ROOM CODE` = @tempRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempRoomCode", room->getRoomCode());
			
			int affected = command->ExecuteNonQuery();
			if (affected < 0) MessageBox::Show(String::Concat("Reservations associated with " + (room->getRoomCode())->ToUpper() + " cannot be found!"));
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
}

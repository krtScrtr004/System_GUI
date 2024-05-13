#include "Room.h"
#include "RoomInfo.h"
#include "Utils.h"

namespace System {
	RoomInfo::RoomInfo(Room^ other) : room(other)
	{
		InitializeComponent();
		mySqlConn(conn);
	}
	 
	RoomInfo::~RoomInfo()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	System::Void RoomInfo::RoomInfo_Load(System::Object^ sender, System::EventArgs^ e) {
		if (room->getImg() != nullptr) {
			MemoryStream^ ms = gcnew MemoryStream(room->getImg());
			Image^ img = Image::FromStream(ms);
			roomImg->Image = img;
		}

		rcodeTxtBox->Text = room->getRoomCode();
		buildingTxtBox->Text = room->getBuilding();
		statusCBox->Text = room->getStatus();
		roomTypeCBox->Text = room->getRoomType();
		boardTypeCBox->Text = room->getBoardType();
		tvCBox->Text = (room->getTv()) ? "Available" : "Not Available";
		acCBox->Text = (room->getAc()) ? "Available" : "Not Available";
	}

	System::Void RoomInfo::changeImgBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ loc = openFile();
		tempImgLoc = loc;
		roomImg->ImageLocation = loc;
	}

	System::Void RoomInfo::rcodeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomCode = rcodeTxtBox->Text;
	}

	System::Void RoomInfo::buildingTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBuilding = buildingTxtBox->Text;
	}

	System::Void RoomInfo::statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempStatus = statusCBox->Text;
	}

	System::Void RoomInfo::roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempRoomType = roomTypeCBox->Text;
	}

	System::Void RoomInfo::boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempBoardType = boardTypeCBox->Text;
	}

	System::Void RoomInfo::tvCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempTv = tvCBox->Text;
	}

	System::Void RoomInfo::acCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAc = acCBox->Text;
	}

	System::Void RoomInfo::editInfoBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!searchRoomCode(tempRoomCode, conn)) {
			try {
				array<unsigned char>^ img;
				if (!String::IsNullOrWhiteSpace(tempImgLoc)) {
					try {
						FileStream^ fs = gcnew FileStream(tempImgLoc, FileMode::Open, FileAccess::Read);
						BinaryReader^ br = gcnew BinaryReader(fs);
						img = br->ReadBytes(fs->Length);
					}
					catch (Exception^ e) {
						MessageBox::Show(e->Message);
					}
				}

				bool tvBool = (tempTv == "Available") ? true : false,
					acBool = (tempAc == "Available") ? true : false;

				String^ query = "UPDATE room SET `ROOM CODE` = @tempRoomCode, BUILDING = @tempBuilding, STATUS = @tempStatus, `ROOM TYPE` = @tempRoomType, `BOARD TYPE = @tempBoardType, TV = @tempTv, AC = @tempAc, IMAGE = @tempImage`";
				MySqlCommand^ command = gcnew MySqlCommand(query, conn);
				command->Parameters->AddWithValue("tempRoomCode", tempRoomCode);
				command->Parameters->AddWithValue("@tempBuilding", tempBuilding);
				command->Parameters->AddWithValue("@tempStatus", tempStatus);
				command->Parameters->AddWithValue("@tempRoomType", tempRoomType);
				command->Parameters->AddWithValue("@tempBoardType", tempBoardType);
				command->Parameters->AddWithValue("@tempTv", tvBool);
				command->Parameters->AddWithValue("@tempAc", acBool);
				command->Parameters->Add("@tempImage", MySqlDbType::Blob)->Value = img;

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

	}
}

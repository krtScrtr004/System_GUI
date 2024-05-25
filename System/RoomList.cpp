#include <ctime>
#include <iomanip>
#include <sstream>

#include "AddRoom.h"
#include "Login.h"
#include "Profile.h"
#include "Receipt.h"
#include "Room.h"
#include "RoomInfo.h"
#include "RoomList.h"
#include "ReserveInfoForm.h"
#include "UserList.h"
#include "Utils.h"

namespace System {
	RoomList::RoomList(User^ other) : user(other) {
		InitializeComponent();
		mySqlConn(conn);
		
	}

	RoomList::~RoomList() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form Load
	System::Void RoomList::RoomList_Load(System::Object^ sender, System::EventArgs^ e) {
		clRBtn->Checked = true;
		fillTable();

		if (user->getAccType() == "Admin") {
			opt1MStrip->Text = "Room List";
			opt2MStrip->Text = "User List";

			reserveBtn->Text = "EDIT";

			roomsTbl->Height = 370;
		}
		else {
			opt1MStrip->Text = "Reserve";
			opt2MStrip->Text = "Receipt";

			if (checkUserReservation()) {
				MessageBox::Show("Warning: You have pending reservation.  You can only reserve one at a time!");
				clRBtn->Enabled = false;
				labRBtn->Enabled = false;
				roomsTbl->Hide();
			}

			addRoomBtn->Hide();

			if (user->getAccType() == "Student")
				labRBtn->Enabled = false;
		}		
	}

	// Profile Menu
	System::Void RoomList::profileMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ profileForm = gcnew Profile(user);
		profileForm->Show();
		this->Close();
	}

	// RoomList Menu
	System::Void RoomList::opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomList^ nRoomListsForm = gcnew RoomList(user);
		nRoomListsForm->Show();
		this->Close();
	}

	// Receipt / UserList Menu
	System::Void RoomList::opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user->getAccType() == "Admin") {
			UserList^ userListForm = gcnew UserList(user);
			userListForm->Show();
			this->Close();
		}
		else {
			Receipt^ receiptForm = gcnew Receipt(user);
			receiptForm->Show();
		}
	}

	// Exit Menu
	System::Void RoomList::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header)) {
			Login^ loginForm = gcnew Login();
			loginForm->Show();
			this->Hide();
		}
	}

	// Reserve room button
	System::Void RoomList::reserveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (room->getRoomCode() != nullptr) {
			if (user->getAccType() == "Admin") {
				RoomInfo^ roomInfoForm = gcnew RoomInfo(room);
				roomInfoForm->Show();
			}
			else {
				if (room->getStatus() == "Available") {
					ReserveInfoForm^ reserveInfoForm = gcnew ReserveInfoForm(user, room);
					reserveInfoForm->Show();
				}
				else {
					MessageBox::Show("Warning: This room is currently not available!");
				}
			}
		}
	}

	// Classroom radio button
	System::Void RoomList::clRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// If laboratory radio button is checked, classroom radio button will be unchecked
		if (labRBtn->Checked)
			clRBtn->Checked = false;
		else
			fillTable();
	}

	// Laboratory Radio Button
	System::Void RoomList::labRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Prevents student type users to access laboratory type rooms
		if (user->getAccType() == "Student")
			MessageBox::Show("Laboratory is only available for Faculty members!");

		// If classroom radio button is checked, laboratory radio button will be unchecked
		if (clRBtn->Checked)
			labRBtn->Checked = false;
		else
			fillTable();
	}

	// Set room's members when a row is clicked on the table
	System::Void RoomList::roomsTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (roomsTbl->Rows->Count > 0) {
			String^ selectedRoomCode = roomsTbl->Rows[roomsTbl->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
			fetchRoomInfo(selectedRoomCode);
			setRoomInfo();
		}
		else {
			MessageBox::Show("Warning: Table has no data!");
		}
	}

	// Add a room button (only for Admins)
	System::Void RoomList::addRoomBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AddRoom^ addRoomForm = gcnew AddRoom();
		addRoomForm->Show();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Fill Table with Appropriate Data
	void RoomList::fillTable(void) {
		try {
			String^ query;
			if (clRBtn->Checked) {
				query = "SELECT `ROOM CODE`, BUILDING, STATUS FROM room WHERE `ROOM TYPE` = 'Classroom'";
			}
			else if (labRBtn->Checked) {
				query = "SELECT `ROOM CODE`, BUILDING, STATUS FROM room WHERE `ROOM TYPE` = 'Laboratory'";
			};

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(query, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			roomsTbl->DataSource = dt;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Get selected room's data from the db
	void RoomList::fetchRoomInfo(String^ selectedRoomCode) {
		try {
			String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @selectedRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@selectedRoomCode", selectedRoomCode);

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				if (reader["IMAGE"] != DBNull::Value) {
					array<unsigned char>^ img = safe_cast<array<unsigned char>^>(reader["IMAGE"]);
					room->setImg(img);
				}
				else {
					room->setImg(nullptr);
				}
				room->setRoomCode(reader["ROOM CODE"]->ToString());
				room->setBuilding(reader["BUILDING"]->ToString());
				room->setStatus(reader["STATUS"]->ToString());
				room->setRoomType(reader["ROOM TYPE"]->ToString());
				room->setBoardType(reader["BOARD TYPE"]->ToString());
				room->setTv(Convert::ToBoolean(reader["TV"]));
				room->setAc(Convert::ToBoolean(reader["AC"]));
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Display selected room information to the form
	void RoomList::setRoomInfo(void) {
		if (room->getImg() != nullptr) {
			MemoryStream^ ms = gcnew MemoryStream(room->getImg());
			Image^ img = Image::FromStream(ms);
			roomImg->Image = img;
		}
		else {
			String^ defaultImgLoc = "\images\WHITE_IMG.png";
			roomImg->ImageLocation = defaultImgLoc;
		}

		roomCodeDataLbl->Text = (room->getRoomCode())->ToUpper();
		bldDataLbl->Text = (room->getBuilding())->ToUpper();
		boardTypeDataLbl->Text = (room->getBoardType())->ToUpper();
		tvAvailDataLbl->Text = (*(room->getTv())) ? "AVAILABLE" : "NOT AVAILABLE";
		acAvailDataLbl->Text = (*(room->getAc())) ? "AVAILABLE" : "NOT AVAILABLE";
	}
	
	// Check whether user has pending reservation
	bool RoomList::checkUserReservation() {
		String^ query = "SELECT * FROM reservation WHERE `USER ID` = @tempUserId AND STATUS = 1";
		MySqlCommand^ command = gcnew MySqlCommand(query, conn);
		command->Parameters->AddWithValue("@tempUserId", user->getId());

		bool hasRoomList = false;
		MySqlDataReader^ reader = command->ExecuteReader();
		try {
			if (reader->HasRows)
				hasRoomList = true;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		reader->Close();

		return hasRoomList;
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

#include <ctime>
#include <iomanip>
#include <sstream>

#include "AddRoom.h"
#include "Profile.h"
#include "Receipt.h"
#include "Room.h"
#include "RoomInfo.h"
#include "RoomList.h"
#include "ReserveInfoForm.h"
#include "UserList.h"
#include "Utils.h"

namespace System {
	RoomList::RoomList(User^ other) : user(other)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	RoomList::~RoomList()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form Load
	System::Void RoomList::RoomList_Load(System::Object^ sender, System::EventArgs^ e) {
		deletePassedRoomList();

		if (user->getAccType() == "Admin") {
			opt1MStrip->Text = "Room List";
			opt2MStrip->Text = "User List";

			roomsTbl->Height = 370;

			reserveBtn->Hide();
		}
		else {
			opt1MStrip->Text = "Reserve";
			opt2MStrip->Text = "Receipt";

			if (checkUserRoomList()) {
				MessageBox::Show("Warning: You have pending reservation.  You can only reserve one at a time!");
				clRBtn->Enabled = false;
				labRBtn->Enabled = false;
			}

			roomsTbl->Hide();
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
		if (confirmDialogue(text, header))
			Application::Exit();
	}

	System::Void RoomList::reserveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
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


	System::Void RoomList::clRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (labRBtn->Checked)
			clRBtn->Checked = false;
		else
			fillTable();
	}

	// Laboratory Radio Button
	System::Void RoomList::labRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (user->getAccType() == "Student")
			MessageBox::Show("Laboratory is only available for Faculty members!");


		if (clRBtn->Checked)
			labRBtn->Checked = false;
		else
			fillTable();
	}

	// Set "room's" members
	System::Void RoomList::roomsTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ selectedRoomCode = roomsTbl->Rows[roomsTbl->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
		fetchRoomInfo(selectedRoomCode);
		setRoomInfo();
	}

	// Add Room Button
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

		roomsTbl->Show();
	}

	void RoomList::deletePassedRoomList(void) {
		DateTime currentTime = DateTime::Now;
		String^ currentDate = currentTime.ToString("yyyy-MM-dd");
		String^ currentTimeStr = currentTime.ToString("HH:mm:ss");
		
		try {
			// FIX ME
			String^ deleteQuery = "UPDATE reservation SET STATUS = 0 WHERE DATE <= @currentDate AND (`OUT TIME` <= @currentTime)";
			MySqlCommand^ deleteCommand = gcnew MySqlCommand(deleteQuery, conn);
			deleteCommand->Parameters->AddWithValue("@currentDate", currentDate);
			deleteCommand->Parameters->AddWithValue("@currentTime", currentTimeStr);

			deleteCommand->ExecuteNonQuery();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

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

	void RoomList::setRoomInfo(void) {
		if (room->getImg() != nullptr) {
			MemoryStream^ ms = gcnew MemoryStream(room->getImg());
			Image^ img = Image::FromStream(ms);
			roomImg->Image = img;
		}
		roomCodeDataLbl->Text = room->getRoomCode();
		bldDataLbl->Text = room->getBuilding();
		boardTypeDataLbl->Text = room->getBoardType();
		tvAvailDataLbl->Text = (room->getTv()) ? "Available" : "Not Available";
		acAvailDataLbl->Text = (room->getAc()) ? "Available" : "Not Available";
	}
	
	bool RoomList::checkUserRoomList() {
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

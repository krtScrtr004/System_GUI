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
		if (user->getAccType() == "Admin") {
			roomHeaderLbl->Text = "ROOM LIST";
			roomsTbl->Height = 495;
		}
		else {
			roomHeaderLbl->Text = "RESERVE A ROOM";
			roomsTbl->Height = 417;

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

		deletePassedRoomList();		

		clRBtn->Checked = false;
		labRBtn->Checked = false;
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
		Receipt^ receiptForm = gcnew Receipt(user);
		receiptForm->Show();
	}

	// Exit Menu
	System::Void RoomList::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header))
			Application::Exit();
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

		try {
			String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @selectedRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@selectedRoomCode", selectedRoomCode);

			MySqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) { 
				Room^ room = gcnew Room();
				room->setRoomCode(reader["ROOM CODE"]->ToString());
				room->setBuilding(reader["BUILDING"]->ToString());
				room->setStatus(reader["STATUS"]->ToString());
				room->setRoomType(reader["ROOM TYPE"]->ToString());
				room->setBoardType(reader["BOARD TYPE"]->ToString());
				room->setTv(Convert::ToBoolean(reader["TV"]));
				room->setAc(Convert::ToBoolean(reader["AC"]));

				if (user->getAccType() == "Admin") {
					RoomInfo^ roomInfoForm = gcnew RoomInfo(room);
					roomInfoForm->Show();
				}
				else {
					// TODO:
					ReserveInfoForm^ reserveInfoForm = gcnew ReserveInfoForm(user, room);
					reserveInfoForm->Show();
				}
			}

			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Add Room Button
	System::Void RoomList::addRoomBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		AddRoom^ addRoomForm = gcnew AddRoom();
		addRoomForm->Show();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Fill Table with Appropriate Data
	void RoomList::fillTable(void) {
		String^ query;
		// TODO: Add the logic to prevent the user to reserve another room in case of pendingg reservation
		if (clRBtn->Checked) {
			query = "SELECT `ROOM CODE`, BUILDING, STATUS FROM room WHERE `ROOM TYPE` = 'Classroom'";
		}
		else if (labRBtn->Checked) {
			query = "SELECT `ROOM CODE`, BUILDING, STATUS FROM room WHERE `ROOM TYPE` = 'Laboratory'";
		};

		try {
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

		String^ deleteQuery = "DELETE FROM reservation WHERE DATE <= @currentDate AND `OUT TIME` <= @currentTime";
		MySqlCommand^ deleteCommand = gcnew MySqlCommand(deleteQuery, conn);
		deleteCommand->Parameters->AddWithValue("@currentDate", currentDate);
		deleteCommand->Parameters->AddWithValue("@currentTime", currentTimeStr);

		try {
			deleteCommand->ExecuteNonQuery();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
	
	bool RoomList::checkUserRoomList() {
		String^ query = "SELECT * FROM reservation WHERE `USER ID` = @tempUserId";
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

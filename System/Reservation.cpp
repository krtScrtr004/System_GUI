#include "Receipt.h"
#include "Profile.h"
#include "Reservation.h"
#include "Room.h"
#include "ReserveInfoForm.h"

namespace System {
	Reservation::Reservation(User^ other) : user(other)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	Reservation::~Reservation()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	// Form Load
	System::Void Reservation::Reservation_Load(System::Object^ sender, System::EventArgs^ e) {
		roomsTbl->Hide();

		clRBtn->Checked = false;
		labRBtn->Checked = false;

		if (user->getAccType() == "Student")
			labRBtn->Enabled = false;
	}

	// Fill Table with Appropriate Data
	void Reservation::fillTable(void) {
		String^ query;
		// TODO: Add the logic to perform the deletion of passed reservations 
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

	// Profile Menu
	System::Void Reservation::profileMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ profileForm = gcnew Profile(user);
		profileForm->Show();
		this->Close();
	}

	// Reservations Menu
	System::Void Reservation::reserveMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Reservation^ nReservationsForm = gcnew Reservation(user);
		nReservationsForm->Show();
		this->Close();
	}

	System::Void Reservation::receiptMSrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Receipt^ receiptForm = gcnew Receipt(user);
		receiptForm->Show();
	}

	// Exit Menu
	System::Void Reservation::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header))
			Application::Exit();
	}


	System::Void Reservation::clRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (labRBtn->Checked) 
			clRBtn->Checked = false;
		else 
			fillTable();
	}

	// Laboratory Radio Button
	System::Void Reservation::labRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (user->getAccType() == "Student") 
			MessageBox::Show("Laboratory is only available for Faculty members!");
		

		if (clRBtn->Checked) 
			labRBtn->Checked = false;
		else 
			fillTable();
	}

	System::Void Reservation::roomsTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ selectedRoomCode = roomsTbl->Rows[roomsTbl->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

		String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @selectedRoomCode";
		MySqlCommand^ command = gcnew MySqlCommand(query, conn);
		command->Parameters->AddWithValue("@selectedRoomCode", selectedRoomCode);

		try {
			MySqlDataReader^ reader = command->ExecuteReader();
			while (reader->Read()) { // Advance to the next record
				Room^ room = gcnew Room();
				// To Add: Room pic
				room->setRoomCode(reader["ROOM CODE"]->ToString());
				room->setBuilding(reader["BUILDING"]->ToString());
				room->setStatus(reader["STATUS"]->ToString());
				room->setBoardType(reader["BOARD TYPE"]->ToString());
				room->setTv(Convert::ToBoolean(reader["TV"]));
				room->setAc(Convert::ToBoolean(reader["AC"]));

				ReserveInfoForm^ reserveInfoForm = gcnew ReserveInfoForm(user, room);
				reserveInfoForm->Show();
			}

			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
}
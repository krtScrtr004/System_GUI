#include "EditProfile.h"
#include "Feedback.h"
#include "Login.h"
#include "Profile.h"
#include "Receipt.h"
#include "RoomList.h"
#include "UserList.h"
#include "Utils.h"

namespace System {
	Profile::Profile(User^ other) : user(other) {
		InitializeComponent();
		mySqlConn(conn);
	}

	Profile::~Profile() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form Load
	System::Void Profile::Profile_Load(System::Object^ sender, System::EventArgs^ e) {
		fetchUserData();

		if (user->getAccType() == "Admin") {
			opt1MStrip->Text = "Room List";
			opt2MStrip->Text = "User List";
		}
		else {
			this->Width = 885;

			opt1MStrip->Text = "Reserve";
			opt2MStrip->Text = "Receipt";
		}

		displayData();
		deletePassedRoomList();
		fillTable();
	}

	// Profile Menu
	System::Void Profile::profileMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ nProfileForm = gcnew Profile(this->user);
		nProfileForm->Show();
		this->Close();
	}

	// RoomList Menu
	System::Void Profile::opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomList^ roomListForm = gcnew RoomList(user);
		roomListForm->Show();
		this->Close();
	}

	// Recceipt / UserList Menu
	System::Void Profile::opt2MStrip_Click(System::Object ^ sender, System::EventArgs ^ e) {
		// If admin, open UserList form
		if (user->getAccType() == "Admin") {
			UserList^ userListForm = gcnew UserList(user);
			userListForm->Show();
			this->Close();
		}
		// Open Receipt form
		else {
			Receipt^ receiptForm = gcnew Receipt(user);
			receiptForm->Show();
		}
	}

	// Exit Menu
	System::Void Profile::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header)) {
			Login^ loginForm = gcnew Login();
			loginForm->Show();
			this->Hide();
		}	
	}

	// Edit Button
	System::Void Profile::editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		EditProfile^ editProfileForm = gcnew EditProfile(user);
		editProfileForm->Show();
	}

	// Table data click
	System::Void Profile::historyTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (user->getAccType() == "Admin") {
			if (historyTbl->Rows->Count > 0) {
				String^ selectedUser = historyTbl->Rows[historyTbl->CurrentCell->RowIndex]->Cells[0]->Value->ToString();
				String^ selectedRoomCode = historyTbl->Rows[historyTbl->CurrentCell->RowIndex]->Cells[1]->Value->ToString();

				User^ user = gcnew User();
				user->setId(selectedUser);
				Room^ room = gcnew Room();
				room->setRoomCode(selectedRoomCode);

				Feedback^ feedbackForm = gcnew Feedback(user, room);
				feedbackForm->Show();
			}
			else {
				MessageBox::Show("Warning: Table has no data!");
			}
		}
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Get user's data
	void Profile::fetchUserData(void) {
		try {
			String^ query = "SELECT * FROM userInfo WHERE EMAIL = @tempEmail AND PASSWORD = @tempPassword";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempEmail", user->getEmail());
			command->Parameters->AddWithValue("@tempPassword", user->getPassword());
			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				// Casts BLOB to an array
				if (reader["PROFILE"] != DBNull::Value) {
					array<unsigned char>^ profileImgData = safe_cast<array<unsigned char>^>(reader["PROFILE"]);
					user->setProfileImg(profileImgData);
				}

				user->setFname(reader["FIRST NAME"]->ToString());
				user->setLname(reader["LAST NAME"]->ToString());
				user->setId(reader["ID NUMBER"]->ToString());
				user->setAccType(reader["ACCOUNT TYPE"]->ToString());
			}
			reader->Close();

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Display data to the form
	void Profile::displayData(void) {
		try
		{
			// Converts Binary to an Image type
			if (user->getProfileImg() != nullptr)
			{
				MemoryStream^ ms = gcnew MemoryStream(user->getProfileImg());
				Image^ img = Image::FromStream(ms);
				profileImg->Image = img;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		nameLbl->Text = String::Concat(user->getFname() + " " + user->getLname());
		emailLbl->Text = user->getEmail();
		idNumLbl->Text = (user->getId())->ToUpper();
		accTypeLbl->Text = (String::Concat(user->getAccType() + " Type"))->ToUpper();
	}

	// Delete passed reservations to the db
	void Profile::deletePassedRoomList(void) {
		DateTime currentTime = DateTime::Now;
		String^ currentDate = currentTime.ToString("yyyy-MM-dd");
		String^ currentTimeStr = currentTime.ToString("HH:mm:ss");

		try {
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

	// Fill table with data from the db
	void Profile::fillTable(void) {
		try {
			String^ query;
			// If admin, show all reservations
			if (user->getAccType() == "Admin") {
				query = "SELECT * FROM reservation";
			}
			// Show current user's reservations only
			else {
				query = "SELECT `ROOM CODE`, DATE, `IN TIME`, `OUT TIME`, STATUS FROM reservation WHERE `USER ID` = @tempUserId";
			}

			MySqlCommand^ command = gcnew MySqlCommand(query, conn); 
			if (user->getAccType() != "Admin") {
				command->Parameters->AddWithValue("@tempUserId", user->getId());
			}

			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(command);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			historyTbl->DataSource = dt;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};


#include "EditProfile.h"
#include "Profile.h"
#include "Receipt.h"
#include "RoomList.h"
#include "User.h"
#include "UserList.h"
#include "Utils.h"

namespace System {

	UserList::UserList(User^ other) : user(other) {
		mySqlConn(conn);
		InitializeComponent();
	}

	UserList::~UserList() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form load
	System::Void UserList::UserList_Load(System::Object^ sender, System::EventArgs^ e) {
		fillTable();
	}

	// Profile Menu
	System::Void UserList::profileMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ nProfileForm = gcnew Profile(this->user);
		nProfileForm->Show();
		this->Close();
	}

	// Room (Admin) / RoomList Menu
	System::Void UserList::opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomList^ roomListForm = gcnew RoomList(user);
		roomListForm->Show();
		this->Close();
	}

	// Receipt / UserList Menu
	System::Void UserList::opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
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
	System::Void UserList::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header))
			Application::Exit();
	}

	// Edit other user's information button
	System::Void UserList::editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user->getEmail() != nullptr) {
			String^ text = "You are trying to update a user's information! Do you want to proceed?";
			String^ header = "Update user information confirmation";
			if (confirmDialogue(text, header)) {
				EditProfile^ editProfileForm = gcnew EditProfile(selectedUser);
				editProfileForm->Show();
			}
			else {
				MessageBox::Show("Operation aborted!");
			}
		}
	}

	// Display other user's information on the form when a row is cliecked on the table
	System::Void UserList::usersTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (usersTbl->Rows->Count > 0) {
			String^ selectedId = usersTbl->Rows[usersTbl->CurrentCell->RowIndex]->Cells[2]->Value->ToString();

			selectedUser->setId(selectedId);

			searchUser();

			if (selectedUser->getProfileImg() != nullptr) {
				MemoryStream^ ms = gcnew MemoryStream(selectedUser->getProfileImg());
				Image^ img = Image::FromStream(ms);
				userProfileImg->Image = img;
			}
			else {
				String^ defaultImgLoc = "\\images\\WHITE_IMG.png";
				userProfileImg->ImageLocation = defaultImgLoc;
			}

			nameDataLbl->Text = String::Concat(selectedUser->getFname() + " " + selectedUser->getLname());
			idNumDataLbl->Text = (selectedUser->getId())->ToUpper();
			emailDataLbl->Text = selectedUser->getEmail();
			accTypeDataLbl->Text = (String::Concat(selectedUser->getAccType() + " Type"))->ToUpper();
		}
		else {
			MessageBox::Show("Warning: Table has no data!");
		}
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS--------------------------------------------------------------------------*/
	
	// Fill table 
	void UserList::fillTable(void) {
		try {
			String^ query = "SELECT `LAST NAME`, `FIRST NAME`, `ID NUMBER`, EMAIL, `ACCOUNT TYPE` FROM userInfo";
			MySqlDataAdapter^ adapter = gcnew MySqlDataAdapter(query, conn);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			usersTbl->DataSource = dt;
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Display user's information to the form
	void UserList::searchUser(void) {
		try {
			String^ query = "SELECT * FROM userInfo WHERE `ID NUMBER` = @tempId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempId", selectedUser->getId());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				if (reader["PROFILE"] != DBNull::Value) {
					array<unsigned char>^ profileImgData = safe_cast<array<unsigned char>^>(reader["PROFILE"]);
					selectedUser->setProfileImg(profileImgData);
				}
				else {
					selectedUser->setProfileImg(nullptr);
				}

				selectedUser->setFname(reader["FIRST NAME"]->ToString());
				selectedUser->setLname(reader["LAST NAME"]->ToString());
				selectedUser->setAccType(reader["ACCOUNT TYPE"]->ToString());
				selectedUser->setEmail(reader["EMAIL"]->ToString());
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

}
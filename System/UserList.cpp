#include "Profile.h"
#include "Receipt.h"
#include "RoomList.h"
#include "User.h"
#include "UserList.h"
#include "Utils.h"

namespace System {

	UserList::UserList(User^ other) : user(other)
	{
		mySqlConn(conn);
		InitializeComponent();
	}

	UserList::~UserList()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	System::Void UserList::UserList_Load(System::Object^ sender, System::EventArgs^ e) {
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

	// 
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


	System::Void UserList::usersTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		String^ selectedId = usersTbl->Rows[usersTbl->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
		
		User^ currentUser = gcnew User();
		currentUser->setId(selectedId);
		
		searchUser(currentUser);

		if (currentUser->getProfileImg() != nullptr) {
			MemoryStream^ ms = gcnew MemoryStream(currentUser->getProfileImg());
			Image^ img = Image::FromStream(ms);
			userProfileImg->Image = img;
		}

		nameDataLbl->Text = String::Concat(currentUser->getFname() + " " + currentUser->getLname());
		idNumDataLbl->Text = (currentUser->getId())->ToUpper();
		emailDataLbl->Text = currentUser->getEmail();
		accTypeDataLbl->Text = (String::Concat(currentUser->getAccType() + " Type"))->ToUpper();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS--------------------------------------------------------------------------*/

	void UserList::searchUser(User^ currentUser) {
		try {
			String^ query = "SELECT * FROM userInfo WHERE `ID NUMBER` = @tempId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempId", currentUser->getId());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				if (reader["PROFILE"] != DBNull::Value) {
					array<unsigned char>^ profileImgData = safe_cast<array<unsigned char>^>(reader["PROFILE"]);
					currentUser->setProfileImg(profileImgData);
				}

				currentUser->setFname(reader["FIRST NAME"]->ToString());
				currentUser->setLname(reader["LAST NAME"]->ToString());
				currentUser->setAccType(reader["ACCOUNT TYPE"]->ToString());
				currentUser->setEmail(reader["EMAIL"]->ToString());
			}

			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

}
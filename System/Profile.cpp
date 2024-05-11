#include "EditProfile.h"
#include "Profile.h"
#include "Receipt.h"
#include "RoomList.h"
#include "Utils.h"

namespace System {
	Profile::Profile(User^ other) : user(other)
	{
		InitializeComponent();
		mySqlConn(conn);
		fetchUserData();
		displayData();
	}

	Profile::~Profile()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form Load
	System::Void Profile::Profile_Load(System::Object^ sender, System::EventArgs^ e) {
		if (user->getAccType() == "Admin")
			opt1MStrip->Text = "Room List";
		else
			opt2MStrip->Text = "Reserve";
	}

	// Profile Menu
	System::Void Profile::profileMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ nProfileForm = gcnew Profile(this->user);
		nProfileForm->Show();
		this->Close();
	}

	// Room (Admin) / RoomList Menu
	System::Void Profile::opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		RoomList^ roomListForm = gcnew RoomList(user);
		roomListForm->Show();
		this->Close();
	}

	// 
	System::Void Profile::opt2MStrip_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Receipt^ receiptForm = gcnew Receipt(user);
		receiptForm->Show();
	}

	// Exit Menu
	System::Void Profile::exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = "Confirm exit?";
		String^ header = "Exit Confirmation";
		if (confirmDialogue(text, header))
			Application::Exit();
	}

	// Edit Button
	System::Void Profile::editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		EditProfile^ editProfileForm = gcnew EditProfile(user);
		editProfileForm->Show();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

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

	void Profile::displayData(void) {
		// Converts Binary to an Image type
		if (user->getProfileImg() != nullptr)
		{
			MemoryStream^ ms = gcnew MemoryStream(user->getProfileImg());
			Image^ img = Image::FromStream(ms);
			profileImg->Image = img;
		}

		nameLbl->Text = user->getFname() + " " + user->getLname();
		emailLbl->Text = user->getEmail();
		idNumLbl->Text = user->getId();
		accTypeLbl->Text = user->getAccType() + " Type";
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};


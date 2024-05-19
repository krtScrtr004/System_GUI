#include "EditProfile.h"
#include "Login.h"
#include "Utils.h"

namespace System {
	EditProfile::EditProfile(User^ other) 
		: user(other), tempFname(user->getFname()),
		tempLname(user->getLname()), tempPassword(user->getPassword()) {
		InitializeComponent();
		mySqlConn(conn);
	}

	EditProfile::~EditProfile() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Form load
	System::Void EditProfile::EditProfile_Load(System::Object^ sender, System::EventArgs^ e) {
		// Give access to admin to edit users' id / acc type / email
		if (user->getAccType() == "Admin") {
			idNumTxtBox->ReadOnly = false;
			accTypeTxtBox->ReadOnly = false;
			emailTxtBox->ReadOnly = false;
		}

		// Update text boxes' to texts to current user's info
		fnameTxtBox->Text = user->getFname();
		lnameTxtBox->Text = user->getLname();
		idNumTxtBox->Text = rmWhiteSpaces(user->getId());
		accTypeTxtBox->Text = user->getAccType();
		emailTxtBox->Text = user->getEmail();
		passTxtBox->Text = user->getPassword();
	}

	// Image click
	System::Void EditProfile::imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			tempProfileImgLoc = openFile();
	}

	// First name text box
	System::Void EditProfile::fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempFname = fnameTxtBox->Text;
	}

	// Last name text box
	System::Void EditProfile::lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempLname = lnameTxtBox->Text;
	}

	// IF number text box
	System::Void EditProfile::idNumTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempId = idNumTxtBox->Text;
	}

	// Account type text box
	System::Void EditProfile::accTypeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAccType = accTypeTxtBox->Text;
	}

	// Email text box
	System::Void EditProfile::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	// Password text box
	System::Void EditProfile::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	// Confirmation button
	System::Void EditProfile::confirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Update user's data
		user->setFname(tempFname);
		user->setLname(tempLname);
		user->setPassword(tempPassword);

		updateInfo();

		this->Close();
	}

	// Delete hyperlink
	System::Void EditProfile::deleteLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		deleteUser();
		deleteAssociatedReservation();
		deleteAssociatedFeedback();

		Login^ loginForm = gcnew Login();
		loginForm->Show();
		this->Close();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Update user's info on db
	void EditProfile::updateInfo(void) {
		try {
			// Reads image and copy to 'profileImg' in binary
			array<unsigned char>^ profileImg = user->getProfileImg();
			if (!String::IsNullOrWhiteSpace(tempProfileImgLoc)) {
				FileStream^ fs = gcnew FileStream(tempProfileImgLoc, FileMode::Open, FileAccess::Read);
				BinaryReader^ br = gcnew BinaryReader(fs);
				profileImg = br->ReadBytes(fs->Length);
			}
			user->setProfileImg(profileImg);

			String^ query = "UPDATE userInfo SET `FIRST NAME` = @tempFname, `LAST NAME` = @tempLname, PASSWORD = @tempPassword, PROFILE = @tempProfileImg WHERE EMAIL = @thisEmail";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempFname", tempFname);
			command->Parameters->AddWithValue("@tempLname", tempLname);
			command->Parameters->AddWithValue("@tempPassword", tempPassword);
			command->Parameters->Add("@tempProfileImg", MySqlDbType::Blob)->Value = profileImg;
			command->Parameters->AddWithValue("@thisEmail", user->getEmail());

			String^ text = "Are you sure to edit information?";
			String^ header = "Edit Profile Information Confirmation";
			if (confirmDialogue(text, header)) {
				command->ExecuteNonQuery();
				MessageBox::Show("Profile updated successfully!");
			}
			else {
				MessageBox::Show("Profile was not updated!");

			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Delete user from the db
	void EditProfile::deleteUser(void) {
		try {
			String^ query = "DELETE FROM userInfo WHERE `ID NUMBER` = @tempId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempId", tempId);

			String^ text = "You are trying to delete this user. Do you want to proceed?";
			String^ header = "Delete room confirmation";
			if (confirmDialogue(text, header)) {
				int affected = command->ExecuteNonQuery();
				if (affected > 0)
					MessageBox::Show(String::Concat(rmWhiteSpaces(user->getId()) + " has successfully deleted!"));
				else
					MessageBox::Show(String::Concat(rmWhiteSpaces(user->getId()) + " cannot be found!"));
			}
			else {
				MessageBox::Show("Operation aborted!");
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Delete associated reservations with user to be deleted on db
	void EditProfile::deleteAssociatedReservation(void) {
		try {
			String^ query = "DELETE FROM reservation WHERE `USER ID` = @tempId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempId", user->getId());

			int affected = command->ExecuteNonQuery();
			if (affected < 0) MessageBox::Show(String::Concat("Reservations associated with " + rmWhiteSpaces(user->getId()) + " cannot be found!"));
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	// Delete associated feedbacks with user on db
	void EditProfile::deleteAssociatedFeedback(void) {
		try {
			String^ query = "DELETE FROM feedback WHERE `USER ID` = @tempId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempId", user->getId());

			int affected = command->ExecuteNonQuery();
			if (affected < 0) MessageBox::Show(String::Concat("Feedbacks associated with " + rmWhiteSpaces(user->getId()) + " cannot be found!"));
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
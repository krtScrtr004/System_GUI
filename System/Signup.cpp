#include "Signup.h"
#include "User.h"
#include "Utils.h"

namespace System {

	Signup::Signup(void) {
		InitializeComponent();
		mySqlConn(conn);
	}

	Signup::~Signup() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// First name text box
	System::Void Signup::fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempFname = fnameTxtBox->Text;
	}

	// Last name text box
	System::Void Signup::lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempLname = lnameTxtBox->Text;
	}

	// Id number text box
	System::Void Signup::idTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempId = idTxtBox->Text;
	}

	// Account type text box
	System::Void Signup::accTypeCbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAccType = accTypeCbox->Text;
	}

	// Email text box
	System::Void Signup::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	// Password text box
	System::Void Signup::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	// Sign Up Button
    System::Void Signup::signupBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (checkUserInfo()) {
			insertNewUser();
			this->Close();
		}		
    }

	// Return to Login Page
	System::Void Signup::loginLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		// Redirect to Log In page
		this->Close();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	// Check user's information validity
	bool Signup::checkUserInfo(void) {
		User^ user = gcnew User();
		bool isValidFname = user->checkName(tempFname),
			isValidLname = user->checkName(tempLname),
			isValidId = user->checkId(tempId),
			isValidAccType = user->checkAccType(tempAccType),
			isValidEmail = user->checkEmail(tempEmail),
			isValidPass = user->checkPassword(tempPassword);


		bool isValid = isValidFname && isValidLname &&
			isValidId && isValidAccType &&
			isValidEmail && isValidPass;
		
		return isValid;
	}

	// Insert new user to db
	void Signup::insertNewUser(void) {
		// Insertion of new account
		try {
			String^ query = "INSERT INTO userInfo (`FIRST NAME`, `LAST NAME`, `ID NUMBER`, `ACCOUNT TYPE`, EMAIL, PASSWORD) VALUES (@tempFname, @tempLname, @tempId, @tempAccType, @tempEmail, @tempPassword)";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempFname", tempFname);
			command->Parameters->AddWithValue("@tempLname", tempLname);
			command->Parameters->AddWithValue("@tempId", rmWhiteSpaces(tempId));
			command->Parameters->AddWithValue("@tempAccType", rmWhiteSpaces(tempAccType));
			command->Parameters->AddWithValue("@tempEmail", tempEmail);
			command->Parameters->AddWithValue("@tempPassword", tempPassword);

			String^ text = "NOTE: ID Number, Account Type, and Email cannot be changed after signing up! Are you sure to sign up this account?";
			String^ header = "Sign up confirmation";
			if (confirmDialogue(text, header)) {
				command->ExecuteNonQuery();
				MessageBox::Show(String::Concat(tempFname + " " + tempLname + " was successfully signed up!"));
			}
			else {
				MessageBox::Show(String::Concat(tempFname + ' ' + tempLname + " was not signed up!"));
			}

		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

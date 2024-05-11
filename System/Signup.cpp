#include "Signup.h"
#include "User.h"
#include "Utils.h"

namespace System {

	Signup::Signup(void)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	Signup::~Signup()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	System::Void Signup::fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempFname = fnameTxtBox->Text;
	}

	System::Void Signup::lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempLname = lnameTxtBox->Text;
	}

	System::Void Signup::idTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempId = idTxtBox->Text;
	}

	System::Void Signup::accTypeCbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		tempAccType = accTypeCbox->Text;
	}

	System::Void Signup::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	System::Void Signup::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	// Sign Up Button
    System::Void Signup::signupBtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
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

		if (isValid) {
			// Creates INSERT query
			String^ query = "INSERT INTO userInfo (`FIRST NAME`, `LAST NAME`, `ID NUMBER`, `ACCOUNT TYPE`, EMAIL, PASSWORD) VALUES (@tempFname, @tempLname, @tempId, @tempAccType, @tempEmail, @tempPassword)";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempFname", tempFname);
			command->Parameters->AddWithValue("@tempLname", tempLname);
			command->Parameters->AddWithValue("@tempId", tempId);
			command->Parameters->AddWithValue("@tempAccType", tempAccType);
			command->Parameters->AddWithValue("@tempEmail", tempEmail);
			command->Parameters->AddWithValue("@tempPassword", tempPassword);

			// Insertion execution
			try {
				command->ExecuteNonQuery();
				MessageBox::Show(tempFname + " " + tempLname + " was successfully signed up!");
			}
			catch (const std::exception&) {
				MessageBox::Show(tempFname + ' ' + tempLname + " was not successfully signed up!");
			}

			this->Close();
		}
    }

	// Return to Login Page
	System::Void Signup::loginLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		// Redirect to Log In page
		this->Close();
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

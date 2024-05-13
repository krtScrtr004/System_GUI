// TODO: DATE AND TIME INPUT VALIDATION
// TODO: WARNING FOR EMAIL USER ID AND USER TYPE
// TODO: COMMENTS
// TODO: CODE REVIEW
// TODO: TEST

#include "ForgetPass.h"
#include "Login.h"
#include "Profile.h"
#include "Signup.h"
#include "Utils.h"

using namespace System;

namespace System {
	Login::Login(void)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	Login::~Login()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	System::Void Login::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	System::Void Login::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	// Redirect to Profile Page
	System::Void Login::loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Reads data from DB
		try {
			String^ query = "SELECT EMAIL, PASSWORD FROM userInfo WHERE EMAIL = @tempEmail AND PASSWORD = @tempPassword";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempEmail", tempEmail);
			command->Parameters->AddWithValue("@tempPassword", tempPassword);

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->HasRows) {
				User^ user = gcnew User();
				user->setEmail(tempEmail);
				user->setPassword(tempPassword);

				Profile^ profileForm = gcnew Profile(user);
				profileForm->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Invalid email and / or password!");
			}

			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}	
	}

	// Sign Up Hyperlink
	System::Void Login::signupLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Signup^ signUpForm = gcnew Signup();
		signUpForm->Show();
	}

	// Forget Password Hyperlink
	System::Void Login::fpassLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ForgetPass^ forgetPassForm = gcnew ForgetPass();
		forgetPassForm->Show();
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

[STAThreadAttribute]
int main(void) {
	Application::Run(gcnew Login());

	return 0;
}
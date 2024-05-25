#include "ForgetPass.h"
#include "Login.h"
#include "Profile.h"
#include "Signup.h"
#include "User.h"
#include "Utils.h"

namespace System {
	Login::Login(void) {
		InitializeComponent();
		mySqlConn(conn);
	}

	Login::~Login() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Email text box
	System::Void Login::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	// Password text box
	System::Void Login::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	// Redirect to Profile Page when button is clicked
	System::Void Login::loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Search for specified email and password to tdb
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

	// Sign up hyperlink
	System::Void Login::signupLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		Signup^ signUpForm = gcnew Signup();
		signUpForm->Show();
	}

	// Forget password hyperlink
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
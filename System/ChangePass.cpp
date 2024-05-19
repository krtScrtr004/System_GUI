#include "ChangePass.h"
#include "Utils.h"

namespace System {

	ChangePass::ChangePass(String^ email) : tempEmail(email) {
		InitializeComponent();
		mySqlConn(conn);
	}

	ChangePass::~ChangePass() {
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Update password text box to specified password
	System::Void ChangePass::npassTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = npassTxtBox->Text;
	}

	// Update user's password to new password
	System::Void ChangePass::npassBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ query = "UPDATE userInfo SET PASSWORD = @tempPassword WHERE EMAIL = @tempEmail";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempPassword", tempPassword);
			command->Parameters->AddWithValue("@tempEmail", tempEmail);
			command->ExecuteNonQuery();
			MessageBox::Show("Password Changed Successfully!");
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		this->Close();
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
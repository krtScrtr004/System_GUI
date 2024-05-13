#include "ChangePass.h"
#include "ForgetPass.h"
#include "Utils.h"

namespace System {

	ForgetPass::ForgetPass(void)
	{
		mySqlConn(conn);
		InitializeComponent();
	}

	ForgetPass::~ForgetPass()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS------------------------------------------------------------------------*/

	System::Void ForgetPass::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempEmail = emailTxtBox->Text;
	}

	System::Void ForgetPass::findAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ query = "SELECT * FROM userInfo WHERE EMAIL = @tempEmail";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempEmail", tempEmail);

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->HasRows) {
				ChangePass^ changePassForm = gcnew ChangePass(tempEmail);
				changePassForm->Show();
				this->Close();
			}
			else {
				MessageBox::Show("Could not find " + tempEmail + '!');
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
		
		this->Close();
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

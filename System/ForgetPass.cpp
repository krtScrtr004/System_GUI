#include "ForgetPass.h"

#include "ChangePass.h"

namespace System {

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS------------------------------------------------------------------------*/

	System::Void ForgetPass::findAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePass^ changePassForm = gcnew ChangePass();
		changePassForm->Show();
		this->Close();
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};

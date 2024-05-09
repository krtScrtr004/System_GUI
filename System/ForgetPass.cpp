#include "ForgetPass.h"

#include "ChangePass.h"

namespace System {
	System::Void ForgetPass::findAccBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// If empty
		ChangePass^ changePassForm = gcnew ChangePass();
		changePassForm->Show();
		this->Close();
	}
};

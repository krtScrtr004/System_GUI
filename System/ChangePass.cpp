#include "ChangePass.h"

namespace System {
	System::Void ChangePass::npassBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Password Changed Successfully!");
		this->Close();
	}
};
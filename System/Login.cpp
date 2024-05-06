#include "Login.h"
using namespace System;

[STAThreadAttribute]
int main(void) {
	Application::Run(gcnew Login());

	return 0;
}
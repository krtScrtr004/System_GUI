#pragma once
// Utility methods

#include <iostream>
#include <msclr/marshal_cppstd.h> 
#include <regex>
#include <string>
#include <Windows.h>
#include <WinUser.h>

using namespace msclr::interop;
using namespace MySql::Data::MySqlClient;
using namespace System;
using namespace System::Text::RegularExpressions;
using namespace System::Windows::Forms;

void mySqlConn(MySqlConnection^% conn);

void mySqlDeconn(MySqlConnection^% conn); 

bool confirmDialogue(String^ text, String^ header);

String^ rmWhiteSpaces(String^ str);

String^ openFile(void);
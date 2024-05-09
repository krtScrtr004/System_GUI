#include "Utils.h"

void mySqlConn(MySqlConnection^% conn) {
    String^ connString = "Server=localhost;port=3306;database=roomreservation;uid=root;password=1234";
    conn = gcnew MySqlConnection(connString);

    try
    {
        conn->Open();
        MessageBox::Show("Connected");
    }
    catch (const std::exception &e)
    {
        MessageBox::Show("Not Connected");
    }
}

void mySqlDeconn(MySqlConnection^% conn) {
    if (conn != nullptr)
        conn->Close();
}

bool confirmDialogue(String^ text, String^ header) {
    DialogResult result = MessageBox::Show(text, header, MessageBoxButtons::YesNo);

    if (result == DialogResult::Yes) 
        return true;
    else 
        return false;
}

String^ rmWhiteSpaces(String^ str)
{
    // Convert System::String^ to std::string
    std::string stdInputString = msclr::interop::marshal_as<std::string>(str);

    // Use regular expression to remove white spaces
    std::regex pattern("\\s+");
    stdInputString = std::regex_replace(stdInputString, pattern, "");

    // Convert back to System::String^
    return gcnew String(stdInputString.c_str());
}

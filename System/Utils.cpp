#include "Utils.h"

// Create a connection to localhost
void mySqlConn(MySqlConnection^% conn) {
    String^ connString = "Server=localhost;port=3306;database=roomreservation;uid=root;password=1234";
    conn = gcnew MySqlConnection(connString);

    try {
        conn->Open();
    }
    catch (Exception^ e) {
        MessageBox::Show(e->Message);
    }
}

// Termninate connection to localhost
void mySqlDeconn(MySqlConnection^% conn) {
    if (conn != nullptr)
        conn->Close();
}

// Reusable confirmation dialogue
bool confirmDialogue(String^ text, String^ header) {
    DialogResult result = MessageBox::Show(text, header, MessageBoxButtons::YesNo);

    if (result == DialogResult::Yes) 
        return true;
    else 
        return false;
}

// Remove white spaces to String^
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

// Open file dialogue
String^ openFile(void) {
    String^ fileLoc;

    OpenFileDialog^ ofd = gcnew OpenFileDialog;
    ofd->Filter = "PNG Files *.png | *png | JPG Files *.jpg | *.jpg"; //  Filters file type selection
    if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
        fileLoc = ofd->FileName;

    return fileLoc;
}



#include "User.h"

User::User() : fname(nullptr), lname(nullptr), id(nullptr),
				accType(nullptr), email(nullptr), password(nullptr) {
	mySqlConn(conn);
}

User::~User() {
	mySqlDeconn(conn);
}

// Check for user's first name validity
bool User::checkName(String^ NAME) {
	if (NAME->Length < 1) { 
		MessageBox::Show("Warning: Name length is less than minimum (10)!");
		return false;
	}

	if (NAME->Length > 50) {
		MessageBox::Show("Warning: Name length exceeds maximum (50)!");
		return false;
	}

	if (NAME[0] == ' ') {
		MessageBox::Show("Warning: Name cannot start bwith a blank space!");
		return false;
	}

	return true;
}

// Check for user's last name validity
bool User::checkId(String^ ID) {
	for (size_t i = 0; i < ID->Length; ++i) {
		if (!(isdigit(ID[i]) || (ID[i] != '-') || (ID[i] != ' '))) {
			MessageBox::Show("Warning: Invalid ID!");
			return false;
		}
	}

	size_t size = 0;
	for (size_t i = 0; i < ID->Length; ++i) {
		if (ID[i] == ' ' || ID[i] == '-')
			continue;
		++size;
	}

	if (size != 10) {
		MessageBox::Show("Warning: Invalid ID length!");
		return false;
	}

	try {
		String^ query = "SELECT `ID NUMBER` FROM userInfo WHERE `ID NUMBER` = @tempIdNum";
		MySqlCommand^ command = gcnew MySqlCommand(query, conn);
		command->Parameters->AddWithValue("@tempIdNum", ID);

		// Reads data from DB
		MySqlDataReader^ reader = command->ExecuteReader();
		if (reader->HasRows) {
			MessageBox::Show("Warning: ID has already been used!");
			reader->Close();
			return false;
		}
		reader->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
	return true;
}

// Check for user's account type validity
bool User::checkAccType(String^ ACC_TYPE) {
	if (ACC_TYPE == "Student") return true;
	if (ACC_TYPE == "Faculty") return true;
	if (ACC_TYPE == "Admin") return true;

	return false;
}

// Check for user's email validity
bool User::checkEmail(String^ EMAIL) {
	if (EMAIL->Length < 10) {
		MessageBox::Show("Warning: Email length is less than minimum (10)!");
		return false;
	}

	if (EMAIL->Length > 35) {
		MessageBox::Show("Warning: Email length exceeds maximum (35)!");
		return false;
	}

	// Check if specified email is an institutional email
	String^ domain = "@rtu.edu.ph";
	if (!EMAIL->Contains(domain)) {
		MessageBox::Show("Warning: This email is invalid. Use only institutional email!");
		return false;
	}

	try {
		String^ query = "SELECT email FROM userInfo WHERE email = @tempIdNum";
		MySqlCommand^ command = gcnew MySqlCommand(query, conn);
		command->Parameters->AddWithValue("@tempIdNum", EMAIL);

		// Reads data from DB
		MySqlDataReader^ reader = command->ExecuteReader();
		if (reader->HasRows) {
			MessageBox::Show("Warning: Email has already been used!");
			return false;
		}

	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}

	return true;
}

// Check user's password validity
bool User::checkPassword(String^  PASSWORD) {
	if (PASSWORD->Length < 8) {
		MessageBox::Show("Warning: Password length is less than minimum (8)!");
		return false;
	}

	if (PASSWORD->Length > 25) {
		MessageBox::Show("Warning: Password length exceeds maximum (25)!");
		return false;
	}

	return true;
}
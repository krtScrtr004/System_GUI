#pragma once
#include <Windows.h>
#include <WinUser.h>

#include "Utils.h"

using namespace System;
using namespace System::Windows::Forms;

public ref class User {
private:
	MySqlConnection^ conn;

	array<unsigned char>^ profileImg;
	String^ fname;
	String^ lname;
	String^ id;
	String^ accType;
	String^ email;
	String^ password;

public:
	User();

	~User();

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	bool checkName(String^ NAME);

	bool checkId(String^ ID);

	bool checkAccType(String^ ACC_TYPE);

	bool checkEmail(String^ EMAIL);

	bool checkPassword(String^ PASSWORD);

	/*--------------------------------------------------------------------------------------GETTER---------------------------------------------------------------------------*/

	array<unsigned char>^ getProfileImg(void) { return profileImg; }

	String^ getFname(void) { return fname; }

	String^ getLname(void) { return lname; }

	String^ getId(void) { return id; }

	String^ getAccType(void) { return accType; }

	String^ getEmail(void) { return email; }

	String^ getPassword(void) { return password; }

	/*--------------------------------------------------------------------------------------SETTER---------------------------------------------------------------------------*/

	void setProfileImg(array<unsigned char>^ PROFILE_IMG) { profileImg = PROFILE_IMG; }

	void setFname(String^ FNAME) { fname = FNAME; }

	void setLname(String^ LNAME) { lname = LNAME; }

	void setId(String^ ID) { id = ID; }

	void setAccType(String^ ACC_TYPE) { accType = ACC_TYPE; }

	void setEmail(String^ EMAIL) { email = EMAIL; }

	void setPassword(String^ PASSWORD) { password = PASSWORD;  }

	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
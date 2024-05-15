#include "Feedback.h"

#include "Utils.h"

namespace System {
	Feedback::Feedback(User^ otherUser, Room^ otherRoom)
		: user(otherUser), room(otherRoom) {
		InitializeComponent();
		mySqlConn(conn);
	}

	Feedback::~Feedback() {
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}


	System::Void Feedback::Feedback_Load(System::Object^ sender, System::EventArgs^ e) {
		fecthUserData();
		fetchRoomData();
		fetchResrvationData();
		fetchFeedbackData();

		nameDataLbl->Text = String::Concat(user->getFname() + " " + user->getLname());
		idNumDataLbl->Text = user->getId();
		emailDataLbl->Text = user->getEmail();
		accTypeDataLbl->Text = (String::Concat(user->getAccType() + " Type"))->ToUpper();
		rcodeTxtBox->Text = (room->getRoomCode())->ToUpper();
		bldgTxtBox->Text = (room->getBuilding())->ToUpper();
	}



	void Feedback::fecthUserData(void) {
		try {
			String^ query = "SELECT * FROM userInfo WHERE `ID NUMBER` = @tempUserId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempUserId", user->getId());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				user->setFname(reader["FIRST NAME"]->ToString());
				user->setLname(reader["LAST NAME"]->ToString());
				user->setId(reader["ID NUMBER"]->ToString());
				user->setAccType(reader["ACCOUNT TYPE"]->ToString());
				user->setEmail(reader["EMAIL"]->ToString());
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	void Feedback::fetchRoomData(void) {
		try {
			String^ query = "SELECT * FROM room WHERE `ROOM CODE` = @tempRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempRoomCode", room->getRoomCode());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				room->setRoomCode(reader["ROOM CODE"]->ToString());
				room->setBuilding(reader["BUILDING"]->ToString());
			}

			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

	}

	void Feedback::fetchResrvationData(void) {
		try {
			String^ query = "SELECT `ROOM CODE`, DATE_FORMAT(`DATE`, '%Y-%m-%d') AS dateOnly, `IN TIME`, `OUT TIME` FROM reservation WHERE `USER ID` = @tempUserId";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempUserId", user->getId());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				dateTxtBox->Text = reader["dateOnly"]->ToString();
				inTimeTxtBox->Text = reader["IN TIME"]->ToString();
				outTimeTxtBox->Text = reader["OUT TIME"]->ToString();
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	void Feedback::fetchFeedbackData(void) {
		try {
			String^ query = "SELECT * FROM feedback WHERE `USER ID` = @tempUserId AND `ROOM CODE` = @tempRoomCode";
			MySqlCommand^ command = gcnew MySqlCommand(query, conn);
			command->Parameters->AddWithValue("@tempUserId", user->getId());
			command->Parameters->AddWithValue("@tempRoomCode", room->getRoomCode());

			MySqlDataReader^ reader = command->ExecuteReader();
			if (reader->Read()) {
				fdBackTxtBox->Text = reader["FEEDBACK"]->ToString();
			}
			reader->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}
}
#include "ReserveInfoForm.h"
#include "Utils.h"

namespace System {
	ReserveInfoForm::ReserveInfoForm(User^ otherUser, Room^ otherRoom) 
						: user(otherUser), room(otherRoom) 
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	ReserveInfoForm::~ReserveInfoForm()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	System::Void ReserveInfoForm::ReserveInfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Converts Binary to an Image type
		if (room->getImg() != nullptr)
		{
			MemoryStream^ ms = gcnew MemoryStream(room->getImg());
			Image^ img = Image::FromStream(ms);
			roomImg->Image = img;
		}

		roomCodeDataLbl->Text = (room->getRoomCode())->ToUpper();
		bldDataLbl->Text = (room->getBuilding())->ToUpper();
		boardTypeDataLbl->Text = (room->getBoardType())->ToUpper();
		tvAvailDataLbl->Text = *(room->getTv()) ? "AVAILABLE" : "NOT AVAILABLE";
		acAvailDataLbl->Text = *(room->getAc()) ? "AVAILABLE" : "NOT AVAILABLE";
	}

	System::Void ReserveInfoForm::datePkr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempDate = rmWhiteSpaces(datePkr->Text);		
	}

	System::Void ReserveInfoForm::timePkr_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempTime = rmWhiteSpaces(timePkr->Text);
	}

	System::Void ReserveInfoForm::durationNum_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		tempDuration = durationNum->Value;
	}

	// Submit Button
	System::Void ReserveInfoForm::reserveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!checkDateFormat()) {
			this->Close();
			return;
		}
		
		if (!checkTimeFormat()) {
			MessageBox::Show("Warning: Invalid time format!");
			this->Close();
		}
		if (!checkDuration()) this->Close();
		
		// Parse tempTime string
		String^ outTime = parseTime();

		try {
			if (checkIfReserved()) {
				MessageBox::Show(String::Concat("This room is already reserved on" + tempDate + " at " + tempTime));
				this->Close();
			}

			insertReservation(outTime);
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}

		this->Close();
	}

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	bool ReserveInfoForm::checkDateFormat(void) {
		String^ dateFormat = "yyyy-MM-dd";
		DateTime parsedDate;
		// If invalid format
		if (!DateTime::TryParseExact(tempDate, dateFormat, System::Globalization::CultureInfo::InvariantCulture, DateTimeStyles::None, parsedDate)) {
			MessageBox::Show("Warning: Invalid date format!");
			return false;
		}

		DateTime currentDate = DateTime::Now;
		// If year is already passed
		if (parsedDate.Year < currentDate.Year) {
			MessageBox::Show("Warning: Specified year is invalid!");
			return false;
		}
		else {
			// If month is already passed OR month exceeeds 12th month
			bool isMonthPassed = parsedDate.Month < currentDate.Month,
				 isMonthExceed = parsedDate.Month > 12,
				 isMonthSubceed = parsedDate.Month < 1;
			if (isMonthPassed || isMonthExceed || isMonthSubceed) {
				MessageBox::Show("Warning: Specified month is invalid");
				return false;
			}
			else {
				// If day is already passed OR day exceeds maximum OR day subceeds minimum
				bool isDayPassed = parsedDate.Day < currentDate.Day,
					isDayExceed = parsedDate.Day > 31,
					isDaySubceed = parsedDate.Day < 1;
				if (isDayExceed || isDayExceed || isDaySubceed) {
					MessageBox::Show("Warning: Specified time is invalid!");
					return false;
				}
			}
		}

		return true;
	}

	bool ReserveInfoForm::checkTimeFormat(void) {
		String^ expectedTimeFormat = "HH:mm:ss";
		DateTime parsedTime;
		if (!DateTime::TryParseExact(tempTime, expectedTimeFormat, System::Globalization::CultureInfo::InvariantCulture, DateTimeStyles::None, parsedTime)) {
			return false;
		}

		return true;
	}

	bool ReserveInfoForm::checkDuration(void) {
		if (*tempDuration < 1) {
			MessageBox::Show("Warning: Duration is less than minimum (1)!");
			return false;
		}

		if (*tempDuration > 5) {
			MessageBox::Show("Warning: Duration exceeds maximum (5)!");
			return false;
		}

		return true;
	}

	// Parse time to string
	String^ ReserveInfoForm::parseTime(void) {
		array<String^>^ timeComponents = tempTime->Split(':');
		int hour = Int32::Parse(timeComponents[0]);
		int minute = Int32::Parse(timeComponents[1]);
		int second = Int32::Parse(timeComponents[2]);

		Int64 durationHours = Decimal::ToInt64(*tempDuration);
		hour += durationHours;
		if (hour >= 24) {
			hour %= 24;
		}

		String^ outTime = String::Format("{0:D2}:{1:D2}:{2:D2}", hour, minute, second);

		return outTime;
	}

	// Search whether the room is already reserved at the same date input
	bool ReserveInfoForm::checkIfReserved(void) {
		bool isReserved = false;

		String^ searchQuery = "SELECT * FROM reservation WHERE `ROOM CODE` = @tempRoomCode AND DATE = @tempDate AND `IN TIME` = @tempInTime";
		MySqlCommand^ cmdSearch = gcnew MySqlCommand(searchQuery, conn);
		cmdSearch->Parameters->AddWithValue("@tempRoomCode", room->getRoomCode());
		cmdSearch->Parameters->AddWithValue("@tempDate", tempDate);
		cmdSearch->Parameters->AddWithValue("@tempInTime", tempTime);

		MySqlDataReader^ reader = cmdSearch->ExecuteReader();
		if (reader->HasRows) {
			isReserved = true;;
		}
		reader->Close();

		return isReserved;
	}

	// Insertion of user reservation
	void ReserveInfoForm::insertReservation(String^ outTime) {
		try {
			String^ insertQuery = "INSERT INTO reservation (`USER ID`, `ROOM CODE`, DATE, `IN TIME`, `OUT TIME`, STATUS) VALUES (@tempUserId1, @tempRoomCode1, @tempDate1, @tempInTime1, @tempOutTime1, @tempStatus1)";
			MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conn);
			cmdInsert->Parameters->AddWithValue("@tempUserId1", user->getId());
			cmdInsert->Parameters->AddWithValue("@tempRoomCode1", room->getRoomCode());
			cmdInsert->Parameters->AddWithValue("@tempDate1", tempDate);
			cmdInsert->Parameters->AddWithValue("@tempInTime1", tempTime);
			cmdInsert->Parameters->AddWithValue("@tempOutTime1", outTime);
			cmdInsert->Parameters->AddWithValue("@tempStatus1", true);

			cmdInsert->ExecuteNonQuery();

			String^ text = "Confirm reservation info?";
			String^ header = "Reservation information confirmation";
			if (confirmDialogue(text, header))
				MessageBox::Show("Your reservation was successfully reserved!");
			else
				MessageBox::Show("Your reservation was not reserved!");
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message);
		}
	}

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};


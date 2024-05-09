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

	System::Void ReserveInfoForm::ReserveInfoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Converts Binary to an Image type
		if (room->getImg() != nullptr)
		{
			MemoryStream^ ms = gcnew MemoryStream(room->getImg());
			Image^ img = Image::FromStream(ms);
			roomImg->Image = img;
		}

		roomCodeDataLbl->Text = room->getRoomCode();
		bldDataLbl->Text = room->getBuilding();
		boardTypeDataLbl->Text = room->getBoardType();
		tvAvailDataLbl->Text = *(room->getTv()) ? "Available" : "Not Available";
		acAvailDataLbl->Text = *(room->getAc()) ? "Available" : "Not Available";
	}

	System::Void ReserveInfoForm::roomImg_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog;
		ofd->Filter = "PNG Files *.png | *png | JPG Files *.jpg | *.jpg"; // Filters file type selection
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK)
			tempImgLoc = ofd->FileName;

		array<unsigned char>^ img = room->getImg();
		if (!String::IsNullOrWhiteSpace(tempImgLoc)) {
			try
			{
				FileStream^ fs = gcnew FileStream(tempImgLoc, FileMode::Open, FileAccess::Read);
				BinaryReader^ br = gcnew BinaryReader(fs);
				img = br->ReadBytes(fs->Length);

				String^ query = "UPDATE room SET IMAGE = @tempImage";
				MySqlCommand^ command = gcnew MySqlCommand(query, conn);
				command->Parameters->Add("@tempImage", MySqlDbType::Blob)->Value = img;
				command->ExecuteNonQuery();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}

			room->setImg(img);
		}
	}

	// TODO: CAST DATA TYPE AND INSERT TO RESERVATION DB
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

		String^ dateFormat = "yyy-MM-dd";
		DateTime parsedDate;
		if (!DateTime::TryParseExact(tempDate, dateFormat, System::Globalization::CultureInfo::InvariantCulture, DateTimeStyles::None, parsedDate)) {
			MessageBox::Show("Warning: Invalid date format!");
			this->Close();
			return;
		}

		String^ expectedTimeFormat = "HH:mm:ss";
		DateTime parsedTime;
		if (!DateTime::TryParseExact(tempTime, expectedTimeFormat, System::Globalization::CultureInfo::InvariantCulture, DateTimeStyles::None, parsedTime)) {
			MessageBox::Show("Warning: Invalid time format!");
			this->Close();
			return;
		}

		if (*tempDuration < 1) MessageBox::Show("Warning: Duration is less than minimum (1)!");
		if (*tempDuration > 5) MessageBox::Show("Warning: Duration exceeds maximum (5)!");

		// Parse tempTime string
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

		try {
			String^ searchQuery = "SELECT * FROM reservation WHERE AND `ROOM CODE` = @tempRoomCode AND DATE = @tempDate AND `IN TIME` = @tempInTime";
			MySqlCommand^ cmdSearch = gcnew MySqlCommand(searchQuery, conn);
			cmdSearch->Parameters->AddWithValue("@tempRoomCode1", room->getRoomCode());
			cmdSearch->Parameters->AddWithValue("@tempDate1", tempDate);
			cmdSearch->Parameters->AddWithValue("@tempInTime1", tempTime);
		
			// Seaech whether the room is already reserved at the same date input
			MySqlDataReader^ reader = cmdSearch->ExecuteReader();
			if (reader->HasRows) {
				MessageBox::Show("This room is already reserved on" + tempDate + " at " + tempTime);
				reader->Close();
				this->Close();
				return;
			}

			String^ insertQuery = "INSERT INTO reservation (`USER ID`, `ROOM CODE`, DATE, `IN TIME`, `OUT TIME`) VALUES (@tempUserId1, @tempRoomCode1, @tempDate1, @tempInTime1, @tempOutTime1)";
			MySqlCommand^ cmdInsert = gcnew MySqlCommand(insertQuery, conn);
			cmdInsert->Parameters->AddWithValue("@tempUserId1", user->getId());
			cmdInsert->Parameters->AddWithValue("@tempRoomCode1", room->getRoomCode());
			cmdInsert->Parameters->AddWithValue("@tempDate1", tempDate);
			cmdInsert->Parameters->AddWithValue("@tempInTime1", tempTime);
			cmdInsert->Parameters->AddWithValue("@tempOutTime1", outTime);

			cmdInsert->ExecuteNonQuery();
			reader->Close();

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

		this->Close();
	}
};


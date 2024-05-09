#include "Receipt.h"
#include "Reservation.h"
#include "Room.h"
#include "Utils.h"

namespace System {
	Receipt::Receipt(User^ other) : user(other)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	Receipt::~Receipt()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

    System::Void Receipt::Receipt_Load(System::Object^ sender, System::EventArgs^ e) {

        String^ querySearch = "SELECT * FROM reservation WHERE `USER ID` = @userId";
        MySqlCommand^ cmdSearch = gcnew MySqlCommand(querySearch, conn);
        cmdSearch->Parameters->AddWithValue("@userId", user->getId());

        try {
            MySqlDataReader^ readerSearch = cmdSearch->ExecuteReader();
            if (readerSearch->HasRows) {
                String^ queryData = "SELECT `ROOM CODE`, DATE_FORMAT(`DATE`, '%Y-%m-%d') AS dateOnly, `IN TIME`, `OUT TIME` FROM reservation WHERE `USER ID` = @tempUserId";
                MySqlCommand^ cmdReservation = gcnew MySqlCommand(queryData, conn);
                cmdReservation->Parameters->AddWithValue("@tempUserId", user->getId());

                MySqlDataReader^ readerReservation = cmdReservation->ExecuteReader();
                if (readerReservation->Read()) {
                    rcodeTxtBox->Text = readerReservation["ROOM CODE"]->ToString();
                    dateTxtBox->Text = readerReservation["dateOnly"]->ToString();
                    inTimeTxtBox->Text = readerReservation["IN TIME"]->ToString();
                    outTimeTxtBox->Text = readerReservation["OUT TIME"]->ToString();

                    readerReservation->Close();

                    String^ queryRoom = "SELECT * FROM room WHERE `ROOM CODE` = @tempRoomCode";
                    MySqlCommand^ cmdRoom = gcnew MySqlCommand(queryRoom, conn);
                    cmdRoom->Parameters->AddWithValue("@tempRoomCode", rcodeTxtBox->Text);

                    MySqlDataReader^ readerRoom = cmdRoom->ExecuteReader();
                    if (readerRoom->Read()) {
                        Room^ room = gcnew Room();
                        // TODO: Test this 
                        room->setBuilding(readerRoom["BUILDING"]->ToString());
                        if (readerRoom["IMAGE"] != DBNull::Value) {
                            array<unsigned char>^ img = safe_cast<array<unsigned char>^>(readerRoom["IMAGE"]);
                            room->setImg(img);
                        }

                        if (room->getImg() != nullptr)
                        {
                            MemoryStream^ ms = gcnew MemoryStream(room->getImg());
                            Image^ img = Image::FromStream(ms);
                            roomImg->Image = img;
                        }

                        readerRoom->Close();
                    }
                }
            }
            else {
                MessageBox::Show("You do not have pending reservation!");
                this->Close();
            }
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }

    System::Void Receipt::fdBackTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        tempFeedback = fdBackTxtBox->Text;
    }

    System::Void Receipt::submitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tempFeedback->Length < 1) MessageBox::Show("Warning: Feedback length is less than minimum (1)!");
        if (tempFeedback->Length > 300) MessageBox::Show("Warning: Feedback length exceed maximum (300)!");

        String^ query = "INSERT INTO feedback (`USER ID`, FEEDBACK) VALUES (@tempUserId, @tempFeedback)";
        MySqlCommand^ command = gcnew MySqlCommand(query, conn);
        command->Parameters->AddWithValue("@tempUserId", user->getId());
        command->Parameters->AddWithValue("@tempFeedback", tempFeedback);

        try {
            command->ExecuteNonQuery();
            MessageBox::Show("Dear " + user->getFname() + ", Thank you for your feedback! We truly value your input and take it seriously. Your input is essential for us to continue improving and delivering the best possible experience to our users. Rest assured that we will carefully review your feedback and take necessary actions to address any issues and enhance our services.");
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }
}
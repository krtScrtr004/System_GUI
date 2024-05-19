#include "Receipt.h"
#include "Room.h"
#include "RoomList.h"
#include "Utils.h"

namespace System {
	Receipt::Receipt(User^ other) : user(other) {
		InitializeComponent();
		mySqlConn(conn);
	}

	Receipt::~Receipt() {
		mySqlDeconn(conn);
		if (components) {
			delete components;
		}
	}

    /*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

    // Form load
    System::Void Receipt::Receipt_Load(System::Object^ sender, System::EventArgs^ e) {
        fetchUserReservation();
    }

    System::Void Receipt::fdBackTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
        tempFeedback = fdBackTxtBox->Text;
    }

    System::Void Receipt::submitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
        if (tempFeedback->Length < 1) MessageBox::Show("Warning: Feedback length is less than minimum (1)!");
        if (tempFeedback->Length > 300) MessageBox::Show("Warning: Feedback length exceed maximum (300)!");

        insertUserFeedback();
        
        this->Close();
    }

    /*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

    // Get user's reservation data from the db
    void Receipt::fetchUserReservation(void) {
        try {
            String^ querySearch = "SELECT * FROM reservation WHERE `USER ID` = @userId AND STATUS = 1";
            MySqlCommand^ cmdSearch = gcnew MySqlCommand(querySearch, conn);
            cmdSearch->Parameters->AddWithValue("@userId", user->getId());

            MySqlDataReader^ readerSearch = cmdSearch->ExecuteReader();
            if (readerSearch->HasRows) {
                readerSearch->Close();
                fetchReservationData();
            }
            else {
                MessageBox::Show("You do not have pending reservation!");
                this->Close();
            }
            readerSearch->Close();
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }

    // Get reservation's information from the db
    void Receipt::fetchReservationData(void) {
        try
        {
            String^ queryData = "SELECT `ROOM CODE`, DATE_FORMAT(`DATE`, '%Y-%m-%d') AS dateOnly, `IN TIME`, `OUT TIME` FROM reservation WHERE `USER ID` = @tempUserId";
            MySqlCommand^ cmdReservation = gcnew MySqlCommand(queryData, conn);
            cmdReservation->Parameters->AddWithValue("@tempUserId", user->getId());

            MySqlDataReader^ readerReservation = cmdReservation->ExecuteReader();
            if (readerReservation->Read()) {
                rcodeTxtBox->Text = (readerReservation["ROOM CODE"]->ToString())->ToUpper();
                dateTxtBox->Text = (readerReservation["dateOnly"]->ToString())->ToUpper();
                inTimeTxtBox->Text = (readerReservation["IN TIME"]->ToString())->ToUpper();
                outTimeTxtBox->Text = (readerReservation["OUT TIME"]->ToString())->ToUpper();

                readerReservation->Close();
                fetchRoomImg();
               
            }
            readerReservation->Close();
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }

    // Get reserved room's image from the db
    void Receipt::fetchRoomImg(void) {
        try {
            String^ queryRoom = "SELECT * FROM room WHERE `ROOM CODE` = @tempRoomCode";
            MySqlCommand^ cmdRoom = gcnew MySqlCommand(queryRoom, conn);
            cmdRoom->Parameters->AddWithValue("@tempRoomCode", rcodeTxtBox->Text);

            MySqlDataReader^ readerRoom = cmdRoom->ExecuteReader();
            if (readerRoom->Read()) {
                Room^ room = gcnew Room();
                room->setBuilding(readerRoom["BUILDING"]->ToString());
                bldgTxtBox->Text = room->getBuilding();
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
            }
            readerRoom->Close();
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }

    // Inssert user's feedback to db 
    void Receipt::insertUserFeedback(void) {
        try {
            String^ query = "INSERT INTO feedback (`USER ID`, `ROOM CODE`, FEEDBACK) VALUES (@tempUserId, @tempRoomCode, @tempFeedback)";
            MySqlCommand^ command = gcnew MySqlCommand(query, conn);
            command->Parameters->AddWithValue("@tempUserId", user->getId());
            command->Parameters->AddWithValue("@tempRoomCode", rcodeTxtBox->Text);
            command->Parameters->AddWithValue("@tempFeedback", tempFeedback);

            command->ExecuteNonQuery();
            MessageBox::Show("Dear " + user->getFname() + ", Thank you for your feedback! We truly value your input and take it seriously. Your input is essential for us to continue improving and delivering the best possible experience to our users. Rest assured that we will carefully review your feedback and take necessary actions to address any issues and enhance our services.");
        }
        catch (Exception^ e) {
            MessageBox::Show(e->Message);
        }
    }

    /*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

}
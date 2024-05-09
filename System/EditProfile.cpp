#include "EditProfile.h"
#include "Utils.h"

namespace System {
	EditProfile::EditProfile(User^ other) : user(other)
	{
		InitializeComponent();
		mySqlConn(conn);
	}

	EditProfile::~EditProfile()
	{
		mySqlDeconn(conn);
		if (components)
		{
			delete components;
		}
	}

	// Image Selection Button
	System::Void EditProfile::imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog;
		ofd->Filter = "PNG Files *.png | *png | JPG Files *.jpg | *.jpg"; //  Filters file type selection
		if (ofd->ShowDialog() == Windows::Forms::DialogResult::OK) 
			tempProfileImgLoc = ofd->FileName;
	}

	// First Name Text Box
	System::Void EditProfile::fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempFname = fnameTxtBox->Text;
	}

	// Last Name Text Box
	System::Void EditProfile::lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempLname = lnameTxtBox->Text;
	}

	// ID Text Box
	System::Void EditProfile::idNumTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Warning: ID Number cannot be changed!");
	}

	// Account Type Text Box
	System::Void EditProfile::accTypeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Warning: Account Type cannot be changed!");
	}

	// Email Text Box
	System::Void EditProfile::emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Warning: Email cannot be changed!");
	}

	// Password Text Box
	System::Void EditProfile::passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		tempPassword = passTxtBox->Text;
	}

	System::Void EditProfile::confirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Updates User class with new data
		user->setFname(tempFname);
		user->setLname(tempLname);
		user->setPassword(tempPassword);

		// Reads image and copy to 'profileImg' in binary
		array<unsigned char>^ profileImg = user->getProfileImg();
		if (!String::IsNullOrWhiteSpace(tempProfileImgLoc)) {
			try
			{
				FileStream^ fs = gcnew FileStream(tempProfileImgLoc, FileMode::Open, FileAccess::Read);
				BinaryReader^ br = gcnew BinaryReader(fs);
				profileImg = br->ReadBytes(fs->Length);
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}

		user->setProfileImg(profileImg);

		String^ query = "UPDATE userInfo SET `FIRST NAME` = @tempFname, `LAST NAME` = @tempLname, PASSWORD = @tempPassword, PROFILE = @tempProfileImg WHERE EMAIL = @thisEmail";
		MySqlCommand^ command = gcnew MySqlCommand(query, conn);
		command->Parameters->AddWithValue("@tempFname", tempFname);
		command->Parameters->AddWithValue("@tempLname", tempLname);
		command->Parameters->AddWithValue("@tempPassword", tempPassword);
		command->Parameters->Add("@tempProfileImg", MySqlDbType::Blob)->Value = profileImg;
		command->Parameters->AddWithValue("@thisEmail", user->getEmail());

		String^ text = "Are you sure to edit your information?";
		String^ header = "Edit Profile Information Confirmation";
		if (confirmDialogue(text, header)) {
			try {
				command->ExecuteNonQuery();
				MessageBox::Show("Profile updated successfully!");
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}
		else
			MessageBox::Show("Profile was not updated!");

		this->Close();
	}
};
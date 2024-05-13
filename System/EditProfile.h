#pragma once
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for EditProfile
	/// </summary>
	public ref class EditProfile : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ conn;

	public:
		EditProfile(User^ other);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditProfile();

	protected:
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ fnameLbl;
	private: System::Windows::Forms::Label^ lnameLbl;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::TextBox^ fnameTxtBox;
	private: System::Windows::Forms::TextBox^ lnameTxtBox;
	private: System::Windows::Forms::TextBox^ idNumTxtBox;
	private: System::Windows::Forms::TextBox^ emailTxtBox;
	private: System::Windows::Forms::TextBox^ passTxtBox;
	private: System::Windows::Forms::Button^ confirmBtn;

	private: System::Windows::Forms::Label^ imgSlctLbl;
	private: System::Windows::Forms::Button^ imgSlctBtn;
	private: System::Windows::Forms::TextBox^ accTypeTxtBox;

	private: System::Windows::Forms::Label^ accTypeLbl;






	private: System::Windows::Forms::PictureBox^ imgIcon;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ accTypeIcon;
	private: System::Windows::Forms::PictureBox^ idNumIcon;
	private: System::Windows::Forms::PictureBox^ lnameIcon;
	private: System::Windows::Forms::PictureBox^ fnameIcon;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditProfile::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->fnameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lnameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->idNumTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->emailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->passTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->confirmBtn = (gcnew System::Windows::Forms::Button());
			this->imgSlctLbl = (gcnew System::Windows::Forms::Label());
			this->imgSlctBtn = (gcnew System::Windows::Forms::Button());
			this->accTypeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->imgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->accTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->idNumIcon = (gcnew System::Windows::Forms::PictureBox());
			this->lnameIcon = (gcnew System::Windows::Forms::PictureBox());
			this->fnameIcon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(91, 100);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(104, 22);
			this->fnameLbl->TabIndex = 0;
			this->fnameLbl->Text = L"First Name:";
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(91, 146);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(102, 22);
			this->lnameLbl->TabIndex = 1;
			this->lnameLbl->Text = L"Last Name:";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(91, 192);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(106, 22);
			this->idNumLbl->TabIndex = 2;
			this->idNumLbl->Text = L"ID Number:";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(91, 294);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(60, 22);
			this->emailLbl->TabIndex = 3;
			this->emailLbl->Text = L"Email:";
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(91, 342);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(94, 22);
			this->passLbl->TabIndex = 4;
			this->passLbl->Text = L"Password:";
			// 
			// fnameTxtBox
			// 
			this->fnameTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->fnameTxtBox->Location = System::Drawing::Point(241, 92);
			this->fnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->fnameTxtBox->Name = L"fnameTxtBox";
			this->fnameTxtBox->Size = System::Drawing::Size(213, 30);
			this->fnameTxtBox->TabIndex = 5;
			this->fnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::fnameTxtBox_TextChanged);
			// 
			// lnameTxtBox
			// 
			this->lnameTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lnameTxtBox->Location = System::Drawing::Point(241, 138);
			this->lnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lnameTxtBox->Name = L"lnameTxtBox";
			this->lnameTxtBox->Size = System::Drawing::Size(213, 30);
			this->lnameTxtBox->TabIndex = 6;
			this->lnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::lnameTxtBox_TextChanged);
			// 
			// idNumTxtBox
			// 
			this->idNumTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->idNumTxtBox->Location = System::Drawing::Point(241, 184);
			this->idNumTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->idNumTxtBox->Name = L"idNumTxtBox";
			this->idNumTxtBox->ReadOnly = true;
			this->idNumTxtBox->Size = System::Drawing::Size(213, 30);
			this->idNumTxtBox->TabIndex = 7;
			this->idNumTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::idNumTxtBox_TextChanged);
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->emailTxtBox->Location = System::Drawing::Point(241, 286);
			this->emailTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->ReadOnly = true;
			this->emailTxtBox->Size = System::Drawing::Size(213, 30);
			this->emailTxtBox->TabIndex = 8;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::emailTxtBox_TextChanged);
			// 
			// passTxtBox
			// 
			this->passTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->passTxtBox->Location = System::Drawing::Point(241, 334);
			this->passTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(213, 30);
			this->passTxtBox->TabIndex = 9;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::passTxtBox_TextChanged);
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmBtn->Location = System::Drawing::Point(36, 391);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(418, 40);
			this->confirmBtn->TabIndex = 21;
			this->confirmBtn->Text = L"CONFIRM";
			this->confirmBtn->UseVisualStyleBackColor = false;
			this->confirmBtn->Click += gcnew System::EventHandler(this, &EditProfile::confirmBtn_Click);
			// 
			// imgSlctLbl
			// 
			this->imgSlctLbl->AutoSize = true;
			this->imgSlctLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctLbl->Location = System::Drawing::Point(91, 54);
			this->imgSlctLbl->Name = L"imgSlctLbl";
			this->imgSlctLbl->Size = System::Drawing::Size(133, 22);
			this->imgSlctLbl->TabIndex = 23;
			this->imgSlctLbl->Text = L"Profile Picture:";
			// 
			// imgSlctBtn
			// 
			this->imgSlctBtn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->imgSlctBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgSlctBtn->Location = System::Drawing::Point(241, 44);
			this->imgSlctBtn->Name = L"imgSlctBtn";
			this->imgSlctBtn->Size = System::Drawing::Size(213, 32);
			this->imgSlctBtn->TabIndex = 24;
			this->imgSlctBtn->Text = L"Select";
			this->imgSlctBtn->UseVisualStyleBackColor = false;
			this->imgSlctBtn->Click += gcnew System::EventHandler(this, &EditProfile::imgSlctBtn_Click);
			// 
			// accTypeTxtBox
			// 
			this->accTypeTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->accTypeTxtBox->Location = System::Drawing::Point(241, 235);
			this->accTypeTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->accTypeTxtBox->Name = L"accTypeTxtBox";
			this->accTypeTxtBox->ReadOnly = true;
			this->accTypeTxtBox->Size = System::Drawing::Size(213, 30);
			this->accTypeTxtBox->TabIndex = 26;
			this->accTypeTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::accTypeTxtBox_TextChanged);
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(91, 243);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(128, 22);
			this->accTypeLbl->TabIndex = 25;
			this->accTypeLbl->Text = L"Account Type:";
			// 
			// imgIcon
			// 
			this->imgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgIcon.Image")));
			this->imgIcon->Location = System::Drawing::Point(36, 54);
			this->imgIcon->Name = L"imgIcon";
			this->imgIcon->Size = System::Drawing::Size(31, 22);
			this->imgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgIcon->TabIndex = 57;
			this->imgIcon->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(36, 342);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(31, 22);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 63;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(36, 294);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(31, 22);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 62;
			this->pictureBox5->TabStop = false;
			// 
			// accTypeIcon
			// 
			this->accTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accTypeIcon.Image")));
			this->accTypeIcon->Location = System::Drawing::Point(36, 243);
			this->accTypeIcon->Name = L"accTypeIcon";
			this->accTypeIcon->Size = System::Drawing::Size(31, 22);
			this->accTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->accTypeIcon->TabIndex = 61;
			this->accTypeIcon->TabStop = false;
			// 
			// idNumIcon
			// 
			this->idNumIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"idNumIcon.Image")));
			this->idNumIcon->Location = System::Drawing::Point(36, 192);
			this->idNumIcon->Name = L"idNumIcon";
			this->idNumIcon->Size = System::Drawing::Size(31, 22);
			this->idNumIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->idNumIcon->TabIndex = 60;
			this->idNumIcon->TabStop = false;
			// 
			// lnameIcon
			// 
			this->lnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lnameIcon.Image")));
			this->lnameIcon->Location = System::Drawing::Point(36, 146);
			this->lnameIcon->Name = L"lnameIcon";
			this->lnameIcon->Size = System::Drawing::Size(31, 22);
			this->lnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lnameIcon->TabIndex = 59;
			this->lnameIcon->TabStop = false;
			// 
			// fnameIcon
			// 
			this->fnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fnameIcon.Image")));
			this->fnameIcon->Location = System::Drawing::Point(36, 100);
			this->fnameIcon->Name = L"fnameIcon";
			this->fnameIcon->Size = System::Drawing::Size(31, 22);
			this->fnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->fnameIcon->TabIndex = 58;
			this->fnameIcon->TabStop = false;
			// 
			// EditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(484, 472);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->accTypeIcon);
			this->Controls->Add(this->idNumIcon);
			this->Controls->Add(this->lnameIcon);
			this->Controls->Add(this->fnameIcon);
			this->Controls->Add(this->imgIcon);
			this->Controls->Add(this->accTypeTxtBox);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->imgSlctBtn);
			this->Controls->Add(this->imgSlctLbl);
			this->Controls->Add(this->confirmBtn);
			this->Controls->Add(this->passTxtBox);
			this->Controls->Add(this->emailTxtBox);
			this->Controls->Add(this->idNumTxtBox);
			this->Controls->Add(this->lnameTxtBox);
			this->Controls->Add(this->fnameTxtBox);
			this->Controls->Add(this->passLbl);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->fnameLbl);
			this->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EditProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: User^ user = gcnew User();
	private: String^ tempProfileImgLoc;
	private: String^ tempFname;
	private: String^ tempLname;
	private: String^ tempPassword;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	// Image Selection Button
	private: System::Void imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e);

	// First Name Text Box
	private: System::Void fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Last Name Text Box
	private: System::Void lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// ID Text Box
	private: System::Void idNumTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Account Type Text Box
	private: System::Void accTypeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Email Text Box
	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Password Text Box
	private: System::Void passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Confirmation Button
	private: System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};
}

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
	private: System::Windows::Forms::Label^ editProfileLbl;
	private: System::Windows::Forms::Label^ imgSlctLbl;
	private: System::Windows::Forms::Button^ imgSlctBtn;
	private: System::Windows::Forms::TextBox^ accTypeTxtBox;

	private: System::Windows::Forms::Label^ accTypeLbl;


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
			this->editProfileLbl = (gcnew System::Windows::Forms::Label());
			this->imgSlctLbl = (gcnew System::Windows::Forms::Label());
			this->imgSlctBtn = (gcnew System::Windows::Forms::Button());
			this->accTypeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(25, 135);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(101, 20);
			this->fnameLbl->TabIndex = 0;
			this->fnameLbl->Text = L"First Name:";
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(25, 181);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(98, 20);
			this->lnameLbl->TabIndex = 1;
			this->lnameLbl->Text = L"Last Name:";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(25, 227);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(103, 20);
			this->idNumLbl->TabIndex = 2;
			this->idNumLbl->Text = L"ID Number:";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(25, 329);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(58, 20);
			this->emailLbl->TabIndex = 3;
			this->emailLbl->Text = L"Email:";
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(25, 377);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(89, 20);
			this->passLbl->TabIndex = 4;
			this->passLbl->Text = L"Password:";
			// 
			// fnameTxtBox
			// 
			this->fnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fnameTxtBox->Location = System::Drawing::Point(173, 133);
			this->fnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->fnameTxtBox->Name = L"fnameTxtBox";
			this->fnameTxtBox->Size = System::Drawing::Size(281, 30);
			this->fnameTxtBox->TabIndex = 5;
			this->fnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::fnameTxtBox_TextChanged);
			// 
			// lnameTxtBox
			// 
			this->lnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lnameTxtBox->Location = System::Drawing::Point(173, 179);
			this->lnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lnameTxtBox->Name = L"lnameTxtBox";
			this->lnameTxtBox->Size = System::Drawing::Size(281, 30);
			this->lnameTxtBox->TabIndex = 6;
			this->lnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::lnameTxtBox_TextChanged);
			// 
			// idNumTxtBox
			// 
			this->idNumTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->idNumTxtBox->Location = System::Drawing::Point(173, 225);
			this->idNumTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->idNumTxtBox->Name = L"idNumTxtBox";
			this->idNumTxtBox->ReadOnly = true;
			this->idNumTxtBox->Size = System::Drawing::Size(281, 30);
			this->idNumTxtBox->TabIndex = 7;
			this->idNumTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::idNumTxtBox_TextChanged);
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Location = System::Drawing::Point(173, 327);
			this->emailTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->ReadOnly = true;
			this->emailTxtBox->Size = System::Drawing::Size(281, 30);
			this->emailTxtBox->TabIndex = 8;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::emailTxtBox_TextChanged);
			// 
			// passTxtBox
			// 
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Location = System::Drawing::Point(173, 375);
			this->passTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(281, 30);
			this->passTxtBox->TabIndex = 9;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::passTxtBox_TextChanged);
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmBtn->Location = System::Drawing::Point(29, 422);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(425, 49);
			this->confirmBtn->TabIndex = 21;
			this->confirmBtn->Text = L"CONFIRM";
			this->confirmBtn->UseVisualStyleBackColor = false;
			this->confirmBtn->Click += gcnew System::EventHandler(this, &EditProfile::confirmBtn_Click);
			// 
			// editProfileLbl
			// 
			this->editProfileLbl->AutoSize = true;
			this->editProfileLbl->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editProfileLbl->Location = System::Drawing::Point(24, 33);
			this->editProfileLbl->Name = L"editProfileLbl";
			this->editProfileLbl->Size = System::Drawing::Size(334, 35);
			this->editProfileLbl->TabIndex = 22;
			this->editProfileLbl->Text = L"Edit Your Profile Information";
			// 
			// imgSlctLbl
			// 
			this->imgSlctLbl->AutoSize = true;
			this->imgSlctLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctLbl->Location = System::Drawing::Point(25, 91);
			this->imgSlctLbl->Name = L"imgSlctLbl";
			this->imgSlctLbl->Size = System::Drawing::Size(128, 20);
			this->imgSlctLbl->TabIndex = 23;
			this->imgSlctLbl->Text = L"Profile Picture:";
			// 
			// imgSlctBtn
			// 
			this->imgSlctBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->imgSlctBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgSlctBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->imgSlctBtn->Location = System::Drawing::Point(173, 85);
			this->imgSlctBtn->Name = L"imgSlctBtn";
			this->imgSlctBtn->Size = System::Drawing::Size(281, 32);
			this->imgSlctBtn->TabIndex = 24;
			this->imgSlctBtn->Text = L"Select";
			this->imgSlctBtn->UseVisualStyleBackColor = false;
			this->imgSlctBtn->Click += gcnew System::EventHandler(this, &EditProfile::imgSlctBtn_Click);
			// 
			// accTypeTxtBox
			// 
			this->accTypeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accTypeTxtBox->Location = System::Drawing::Point(173, 276);
			this->accTypeTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->accTypeTxtBox->Name = L"accTypeTxtBox";
			this->accTypeTxtBox->ReadOnly = true;
			this->accTypeTxtBox->Size = System::Drawing::Size(281, 30);
			this->accTypeTxtBox->TabIndex = 26;
			this->accTypeTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::accTypeTxtBox_TextChanged);
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(25, 278);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(123, 20);
			this->accTypeLbl->TabIndex = 25;
			this->accTypeLbl->Text = L"Account Type:";
			// 
			// EditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 521);
			this->ControlBox = false;
			this->Controls->Add(this->accTypeTxtBox);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->imgSlctBtn);
			this->Controls->Add(this->imgSlctLbl);
			this->Controls->Add(this->editProfileLbl);
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
			this->Text = L"EditProfile";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		User^ user = gcnew User();

		String^ tempProfileImgLoc;
		String^ tempFname = user->getFname();
		String^ tempLname = user->getLname();
		String^ tempPassword = user->getPassword();

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

};
}

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

	public ref class EditProfile : public System::Windows::Forms::Form
	{
	public:
		EditProfile(User^ other);

	protected:
		~EditProfile();

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
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ signupLbl;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::LinkLabel^ deleteLink;


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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->signupLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->deleteLink = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(69, 173);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(118, 26);
			this->fnameLbl->TabIndex = 0;
			this->fnameLbl->Text = L"First Name:";
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(69, 213);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(114, 26);
			this->lnameLbl->TabIndex = 1;
			this->lnameLbl->Text = L"Last Name:";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(69, 254);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(114, 26);
			this->idNumLbl->TabIndex = 2;
			this->idNumLbl->Text = L"ID Number:";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(69, 336);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(70, 26);
			this->emailLbl->TabIndex = 3;
			this->emailLbl->Text = L"Email:";
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(69, 375);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(101, 26);
			this->passLbl->TabIndex = 4;
			this->passLbl->Text = L"Password:";
			// 
			// fnameTxtBox
			// 
			this->fnameTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->fnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fnameTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fnameTxtBox->Location = System::Drawing::Point(237, 171);
			this->fnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->fnameTxtBox->Name = L"fnameTxtBox";
			this->fnameTxtBox->Size = System::Drawing::Size(213, 31);
			this->fnameTxtBox->TabIndex = 5;
			this->fnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::fnameTxtBox_TextChanged);
			// 
			// lnameTxtBox
			// 
			this->lnameTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lnameTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lnameTxtBox->Location = System::Drawing::Point(237, 211);
			this->lnameTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->lnameTxtBox->Name = L"lnameTxtBox";
			this->lnameTxtBox->Size = System::Drawing::Size(213, 31);
			this->lnameTxtBox->TabIndex = 6;
			this->lnameTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::lnameTxtBox_TextChanged);
			// 
			// idNumTxtBox
			// 
			this->idNumTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->idNumTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->idNumTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->idNumTxtBox->Location = System::Drawing::Point(237, 252);
			this->idNumTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->idNumTxtBox->Name = L"idNumTxtBox";
			this->idNumTxtBox->ReadOnly = true;
			this->idNumTxtBox->Size = System::Drawing::Size(213, 31);
			this->idNumTxtBox->TabIndex = 7;
			this->idNumTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::idNumTxtBox_TextChanged);
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(237, 331);
			this->emailTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->ReadOnly = true;
			this->emailTxtBox->Size = System::Drawing::Size(213, 31);
			this->emailTxtBox->TabIndex = 8;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::emailTxtBox_TextChanged);
			// 
			// passTxtBox
			// 
			this->passTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passTxtBox->Location = System::Drawing::Point(237, 370);
			this->passTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(213, 31);
			this->passTxtBox->TabIndex = 9;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::passTxtBox_TextChanged);
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmBtn->Location = System::Drawing::Point(32, 429);
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
			this->imgSlctLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctLbl->Location = System::Drawing::Point(69, 134);
			this->imgSlctLbl->Name = L"imgSlctLbl";
			this->imgSlctLbl->Size = System::Drawing::Size(148, 26);
			this->imgSlctLbl->TabIndex = 23;
			this->imgSlctLbl->Text = L"Profile Picture:";
			// 
			// imgSlctBtn
			// 
			this->imgSlctBtn->BackColor = System::Drawing::Color::White;
			this->imgSlctBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgSlctBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->imgSlctBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctBtn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->imgSlctBtn->Location = System::Drawing::Point(237, 132);
			this->imgSlctBtn->Name = L"imgSlctBtn";
			this->imgSlctBtn->Size = System::Drawing::Size(213, 31);
			this->imgSlctBtn->TabIndex = 24;
			this->imgSlctBtn->Text = L"Select";
			this->imgSlctBtn->UseVisualStyleBackColor = false;
			this->imgSlctBtn->Click += gcnew System::EventHandler(this, &EditProfile::imgSlctBtn_Click);
			// 
			// accTypeTxtBox
			// 
			this->accTypeTxtBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(3) {
				L"Student", L"Faculty",
					L"Admin"
			});
			this->accTypeTxtBox->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->accTypeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accTypeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accTypeTxtBox->Location = System::Drawing::Point(237, 292);
			this->accTypeTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->accTypeTxtBox->Name = L"accTypeTxtBox";
			this->accTypeTxtBox->ReadOnly = true;
			this->accTypeTxtBox->Size = System::Drawing::Size(213, 31);
			this->accTypeTxtBox->TabIndex = 26;
			this->accTypeTxtBox->TextChanged += gcnew System::EventHandler(this, &EditProfile::accTypeTxtBox_TextChanged);
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(69, 294);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(140, 26);
			this->accTypeLbl->TabIndex = 25;
			this->accTypeLbl->Text = L"Account Type:";
			// 
			// imgIcon
			// 
			this->imgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgIcon.Image")));
			this->imgIcon->Location = System::Drawing::Point(32, 133);
			this->imgIcon->Name = L"imgIcon";
			this->imgIcon->Size = System::Drawing::Size(29, 27);
			this->imgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgIcon->TabIndex = 57;
			this->imgIcon->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(32, 371);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(29, 27);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 63;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(32, 335);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(29, 27);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 62;
			this->pictureBox5->TabStop = false;
			// 
			// accTypeIcon
			// 
			this->accTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accTypeIcon.Image")));
			this->accTypeIcon->Location = System::Drawing::Point(32, 293);
			this->accTypeIcon->Name = L"accTypeIcon";
			this->accTypeIcon->Size = System::Drawing::Size(29, 27);
			this->accTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->accTypeIcon->TabIndex = 61;
			this->accTypeIcon->TabStop = false;
			// 
			// idNumIcon
			// 
			this->idNumIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"idNumIcon.Image")));
			this->idNumIcon->Location = System::Drawing::Point(32, 253);
			this->idNumIcon->Name = L"idNumIcon";
			this->idNumIcon->Size = System::Drawing::Size(29, 27);
			this->idNumIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->idNumIcon->TabIndex = 60;
			this->idNumIcon->TabStop = false;
			// 
			// lnameIcon
			// 
			this->lnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lnameIcon.Image")));
			this->lnameIcon->Location = System::Drawing::Point(32, 212);
			this->lnameIcon->Name = L"lnameIcon";
			this->lnameIcon->Size = System::Drawing::Size(29, 27);
			this->lnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lnameIcon->TabIndex = 59;
			this->lnameIcon->TabStop = false;
			// 
			// fnameIcon
			// 
			this->fnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fnameIcon.Image")));
			this->fnameIcon->Location = System::Drawing::Point(30, 172);
			this->fnameIcon->Name = L"fnameIcon";
			this->fnameIcon->Size = System::Drawing::Size(29, 27);
			this->fnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->fnameIcon->TabIndex = 58;
			this->fnameIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->signupLbl);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-1, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(491, 100);
			this->panel1->TabIndex = 64;
			// 
			// signupLbl
			// 
			this->signupLbl->AutoSize = true;
			this->signupLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLbl->Location = System::Drawing::Point(124, 36);
			this->signupLbl->Name = L"signupLbl";
			this->signupLbl->Size = System::Drawing::Size(336, 42);
			this->signupLbl->TabIndex = 34;
			this->signupLbl->Text = L"EDIT YOUR ACCOUNT";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(59, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// deleteLink
			// 
			this->deleteLink->ActiveLinkColor = System::Drawing::Color::Red;
			this->deleteLink->AutoSize = true;
			this->deleteLink->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteLink->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->deleteLink->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->deleteLink->Location = System::Drawing::Point(314, 477);
			this->deleteLink->Name = L"deleteLink";
			this->deleteLink->Size = System::Drawing::Size(129, 23);
			this->deleteLink->TabIndex = 71;
			this->deleteLink->TabStop = true;
			this->deleteLink->Text = L"Delete this user";
			this->deleteLink->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->deleteLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &EditProfile::deleteLink_LinkClicked);
			// 
			// EditProfile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(484, 520);
			this->Controls->Add(this->deleteLink);
			this->Controls->Add(this->panel1);
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EditProfile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &EditProfile::EditProfile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn;
	private: User^ user = gcnew User();
	private: String^ tempProfileImgLoc;
	private: String^ tempFname;
	private: String^ tempLname;
	private: String^ tempId;
	private: String^ tempAccType;
	private: String^ tempEmail;
	private: String^ tempPassword;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void EditProfile_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void idNumTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void accTypeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void deleteLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);
		   
	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	private: void updateInfo(void);

	private: void deleteUser(void);

	private: void deleteAssociatedReservation(void);

	private: void deleteAssociatedFeedback(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};
}

#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Signup : public System::Windows::Forms::Form
	{
	public:
		Signup(void);

	protected:
		~Signup();

	private: System::Windows::Forms::LinkLabel^ loginLnkLbl;
	private: System::Windows::Forms::Button^ signupBtn;
	private: System::Windows::Forms::TextBox^ passTxtBox;
	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::TextBox^ emailTxtBox;
	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::Label^ accTypeLbl;
	private: System::Windows::Forms::ComboBox^ accTypeCbox;
	private: System::Windows::Forms::TextBox^ idTxtBox;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::TextBox^ lnameTxtBox;
	private: System::Windows::Forms::Label^ lnameLbl;
	private: System::Windows::Forms::TextBox^ fnameTxtBox;
	private: System::Windows::Forms::Label^ fnameLbl;
	private: System::Windows::Forms::Label^ signupLbl;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ fnameIcon;
	private: System::Windows::Forms::PictureBox^ lnameIcon;
	private: System::Windows::Forms::PictureBox^ idNumIcon;
	private: System::Windows::Forms::PictureBox^ accTypeIcon;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->loginLnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->signupBtn = (gcnew System::Windows::Forms::Button());
			this->passTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->emailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeCbox = (gcnew System::Windows::Forms::ComboBox());
			this->idTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->lnameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->lnameLbl = (gcnew System::Windows::Forms::Label());
			this->fnameTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->fnameLbl = (gcnew System::Windows::Forms::Label());
			this->signupLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->fnameIcon = (gcnew System::Windows::Forms::PictureBox());
			this->lnameIcon = (gcnew System::Windows::Forms::PictureBox());
			this->idNumIcon = (gcnew System::Windows::Forms::PictureBox());
			this->accTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// loginLnkLbl
			// 
			this->loginLnkLbl->ActiveLinkColor = System::Drawing::SystemColors::AppWorkspace;
			this->loginLnkLbl->AutoSize = true;
			this->loginLnkLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->loginLnkLbl->LinkColor = System::Drawing::Color::Black;
			this->loginLnkLbl->Location = System::Drawing::Point(263, 493);
			this->loginLnkLbl->Name = L"loginLnkLbl";
			this->loginLnkLbl->Size = System::Drawing::Size(61, 24);
			this->loginLnkLbl->TabIndex = 32;
			this->loginLnkLbl->TabStop = true;
			this->loginLnkLbl->Text = L"Log In";
			this->loginLnkLbl->VisitedLinkColor = System::Drawing::Color::Black;
			this->loginLnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Signup::loginLnkLbl_LinkClicked);
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->signupBtn->FlatAppearance->BorderSize = 0;
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signupBtn->Location = System::Drawing::Point(58, 438);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(477, 40);
			this->signupBtn->TabIndex = 31;
			this->signupBtn->Text = L"SIGN UP";
			this->signupBtn->UseVisualStyleBackColor = false;
			this->signupBtn->Click += gcnew System::EventHandler(this, &Signup::signupBtn_Click_1);
			// 
			// passTxtBox
			// 
			this->passTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passTxtBox->Location = System::Drawing::Point(251, 384);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(285, 31);
			this->passTxtBox->TabIndex = 30;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::passTxtBox_TextChanged);
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(95, 386);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(94, 26);
			this->passLbl->TabIndex = 29;
			this->passLbl->Text = L"Password";
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(251, 334);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->Size = System::Drawing::Size(285, 31);
			this->emailTxtBox->TabIndex = 28;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::emailTxtBox_TextChanged);
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(95, 336);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(63, 26);
			this->emailLbl->TabIndex = 27;
			this->emailLbl->Text = L"Email";
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->BackColor = System::Drawing::Color::Transparent;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(95, 283);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(133, 26);
			this->accTypeLbl->TabIndex = 26;
			this->accTypeLbl->Text = L"Account Type";
			// 
			// accTypeCbox
			// 
			this->accTypeCbox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->accTypeCbox->DisplayMember = L"ghasd";
			this->accTypeCbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->accTypeCbox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->accTypeCbox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeCbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accTypeCbox->FormattingEnabled = true;
			this->accTypeCbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student", L"Faculty", L"Admin" });
			this->accTypeCbox->Location = System::Drawing::Point(251, 280);
			this->accTypeCbox->Margin = System::Windows::Forms::Padding(5);
			this->accTypeCbox->Name = L"accTypeCbox";
			this->accTypeCbox->Size = System::Drawing::Size(285, 34);
			this->accTypeCbox->TabIndex = 25;
			this->accTypeCbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Signup::accTypeCbox_SelectedIndexChanged);
			// 
			// idTxtBox
			// 
			this->idTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->idTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->idTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->idTxtBox->Location = System::Drawing::Point(251, 230);
			this->idTxtBox->Name = L"idTxtBox";
			this->idTxtBox->Size = System::Drawing::Size(285, 31);
			this->idTxtBox->TabIndex = 24;
			this->idTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::idTxtBox_TextChanged);
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(95, 232);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(107, 26);
			this->idNumLbl->TabIndex = 23;
			this->idNumLbl->Text = L"ID Number";
			// 
			// lnameTxtBox
			// 
			this->lnameTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->lnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lnameTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lnameTxtBox->Location = System::Drawing::Point(251, 181);
			this->lnameTxtBox->Name = L"lnameTxtBox";
			this->lnameTxtBox->Size = System::Drawing::Size(285, 31);
			this->lnameTxtBox->TabIndex = 22;
			this->lnameTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::lnameTxtBox_TextChanged);
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(95, 183);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(107, 26);
			this->lnameLbl->TabIndex = 21;
			this->lnameLbl->Text = L"Last Name";
			// 
			// fnameTxtBox
			// 
			this->fnameTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->fnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fnameTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fnameTxtBox->Location = System::Drawing::Point(251, 135);
			this->fnameTxtBox->Name = L"fnameTxtBox";
			this->fnameTxtBox->Size = System::Drawing::Size(285, 31);
			this->fnameTxtBox->TabIndex = 20;
			this->fnameTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::fnameTxtBox_TextChanged);
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(95, 137);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(111, 26);
			this->fnameLbl->TabIndex = 19;
			this->fnameLbl->Text = L"First Name";
			// 
			// signupLbl
			// 
			this->signupLbl->AutoSize = true;
			this->signupLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLbl->Location = System::Drawing::Point(167, 43);
			this->signupLbl->Name = L"signupLbl";
			this->signupLbl->Size = System::Drawing::Size(345, 42);
			this->signupLbl->TabIndex = 18;
			this->signupLbl->Text = L"Sign Up Your Account";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(102, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 33;
			this->pictureBox1->TabStop = false;
			// 
			// fnameIcon
			// 
			this->fnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fnameIcon.Image")));
			this->fnameIcon->Location = System::Drawing::Point(58, 137);
			this->fnameIcon->Name = L"fnameIcon";
			this->fnameIcon->Size = System::Drawing::Size(35, 31);
			this->fnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->fnameIcon->TabIndex = 34;
			this->fnameIcon->TabStop = false;
			// 
			// lnameIcon
			// 
			this->lnameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lnameIcon.Image")));
			this->lnameIcon->Location = System::Drawing::Point(58, 181);
			this->lnameIcon->Name = L"lnameIcon";
			this->lnameIcon->Size = System::Drawing::Size(35, 31);
			this->lnameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->lnameIcon->TabIndex = 35;
			this->lnameIcon->TabStop = false;
			// 
			// idNumIcon
			// 
			this->idNumIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"idNumIcon.Image")));
			this->idNumIcon->Location = System::Drawing::Point(58, 227);
			this->idNumIcon->Name = L"idNumIcon";
			this->idNumIcon->Size = System::Drawing::Size(35, 31);
			this->idNumIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->idNumIcon->TabIndex = 36;
			this->idNumIcon->TabStop = false;
			// 
			// accTypeIcon
			// 
			this->accTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accTypeIcon.Image")));
			this->accTypeIcon->Location = System::Drawing::Point(58, 280);
			this->accTypeIcon->Name = L"accTypeIcon";
			this->accTypeIcon->Size = System::Drawing::Size(35, 31);
			this->accTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->accTypeIcon->TabIndex = 37;
			this->accTypeIcon->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(58, 334);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(35, 31);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 38;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(58, 386);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 31);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 39;
			this->pictureBox6->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->signupLbl);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-8, -9);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(612, 113);
			this->panel1->TabIndex = 40;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(595, 543);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->accTypeIcon);
			this->Controls->Add(this->idNumIcon);
			this->Controls->Add(this->lnameIcon);
			this->Controls->Add(this->fnameIcon);
			this->Controls->Add(this->loginLnkLbl);
			this->Controls->Add(this->signupBtn);
			this->Controls->Add(this->passTxtBox);
			this->Controls->Add(this->passLbl);
			this->Controls->Add(this->emailTxtBox);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->accTypeCbox);
			this->Controls->Add(this->idTxtBox);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->lnameTxtBox);
			this->Controls->Add(this->lnameLbl);
			this->Controls->Add(this->fnameTxtBox);
			this->Controls->Add(this->fnameLbl);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fnameIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lnameIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn;
	private: String^ tempFname;
	private: String^ tempLname;
	private: String^ tempId;
	private: String^ tempAccType;
	private: String^ tempEmail;
	private: String^ tempPassword;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void idTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void accTypeCbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void signupBtn_Click_1(System::Object^ sender, System::EventArgs^ e);

	private: System::Void loginLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	private: bool checkUserInfo(void);

	private: void insertNewUser(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

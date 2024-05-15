#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Login : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ conn;

	public:
		Login(void);

	protected:
		~Login();


	private: System::Windows::Forms::Label^ loginLbl;
	private: System::Windows::Forms::TextBox^ passTxtBox;







	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::LinkLabel^ signupLnkLbl;
	private: System::Windows::Forms::LinkLabel^ fpassLnkLbl;
	private: System::Windows::Forms::Label^ emailLbl;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ passIcon;

	private: System::Windows::Forms::PictureBox^ emailIcon;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ emailTxtBox;





	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->loginLbl = (gcnew System::Windows::Forms::Label());
			this->passTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->signupLnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->fpassLnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->passIcon = (gcnew System::Windows::Forms::PictureBox());
			this->emailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->emailTxtBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emailIcon))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// loginLbl
			// 
			this->loginLbl->AutoSize = true;
			this->loginLbl->BackColor = System::Drawing::Color::Transparent;
			this->loginLbl->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->loginLbl->Location = System::Drawing::Point(409, 106);
			this->loginLbl->Name = L"loginLbl";
			this->loginLbl->Size = System::Drawing::Size(341, 35);
			this->loginLbl->TabIndex = 1;
			this->loginLbl->Text = L"Log In Your Account";
			// 
			// passTxtBox
			// 
			this->passTxtBox->BackColor = System::Drawing::Color::White;
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passTxtBox->Location = System::Drawing::Point(529, 227);
			this->passTxtBox->Multiline = true;
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(200, 24);
			this->passTxtBox->TabIndex = 5;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &Login::passTxtBox_TextChanged);
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(408, 227);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(100, 27);
			this->passLbl->TabIndex = 4;
			this->passLbl->Text = L"Password";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->loginBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginBtn->Location = System::Drawing::Point(371, 287);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(358, 40);
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Text = L"LOG IN";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Login::loginBtn_Click);
			// 
			// signupLnkLbl
			// 
			this->signupLnkLbl->ActiveLinkColor = System::Drawing::Color::Blue;
			this->signupLnkLbl->AutoSize = true;
			this->signupLnkLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupLnkLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->signupLnkLbl->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLnkLbl->Location = System::Drawing::Point(411, 343);
			this->signupLnkLbl->Name = L"signupLnkLbl";
			this->signupLnkLbl->Size = System::Drawing::Size(75, 24);
			this->signupLnkLbl->TabIndex = 7;
			this->signupLnkLbl->TabStop = true;
			this->signupLnkLbl->Text = L"Sign Up";
			this->signupLnkLbl->VisitedLinkColor = System::Drawing::Color::Black;
			this->signupLnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::signupLnkLbl_LinkClicked);
			// 
			// fpassLnkLbl
			// 
			this->fpassLnkLbl->ActiveLinkColor = System::Drawing::Color::Blue;
			this->fpassLnkLbl->AutoSize = true;
			this->fpassLnkLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fpassLnkLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fpassLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->fpassLnkLbl->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->fpassLnkLbl->Location = System::Drawing::Point(535, 343);
			this->fpassLnkLbl->Name = L"fpassLnkLbl";
			this->fpassLnkLbl->Size = System::Drawing::Size(148, 24);
			this->fpassLnkLbl->TabIndex = 8;
			this->fpassLnkLbl->TabStop = true;
			this->fpassLnkLbl->Text = L"Forget Password";
			this->fpassLnkLbl->VisitedLinkColor = System::Drawing::Color::Black;
			this->fpassLnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::fpassLnkLbl_LinkClicked);
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(408, 179);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(61, 27);
			this->emailLbl->TabIndex = 2;
			this->emailLbl->Text = L"Email";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(348, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(55, 64);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// passIcon
			// 
			this->passIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"passIcon.Image")));
			this->passIcon->Location = System::Drawing::Point(371, 227);
			this->passIcon->Name = L"passIcon";
			this->passIcon->Size = System::Drawing::Size(31, 22);
			this->passIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->passIcon->TabIndex = 10;
			this->passIcon->TabStop = false;
			// 
			// emailIcon
			// 
			this->emailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"emailIcon.Image")));
			this->emailIcon->Location = System::Drawing::Point(371, 179);
			this->emailIcon->Name = L"emailIcon";
			this->emailIcon->Size = System::Drawing::Size(31, 22);
			this->emailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->emailIcon->TabIndex = 11;
			this->emailIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(-3, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(315, 468);
			this->panel1->TabIndex = 12;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(309, 468);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->emailTxtBox->BackColor = System::Drawing::Color::White;
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(529, 179);
			this->emailTxtBox->Multiline = true;
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->Size = System::Drawing::Size(200, 24);
			this->emailTxtBox->TabIndex = 3;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &Login::emailTxtBox_TextChanged);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(788, 461);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->emailIcon);
			this->Controls->Add(this->passIcon);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->fpassLnkLbl);
			this->Controls->Add(this->signupLnkLbl);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passTxtBox);
			this->Controls->Add(this->passLbl);
			this->Controls->Add(this->emailTxtBox);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->loginLbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emailIcon))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: String^ tempEmail;
	private: String^ tempPassword;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Redirect to Profile Page
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e);

	 // Sign Up Hyperlink
	private: System::Void signupLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	// Forget Password Hyperlink
	private: System::Void fpassLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	 /*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
};


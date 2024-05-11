#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ conn;

	public:
		Signup(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup();

	private: System::Windows::Forms::LinkLabel^ loginLnkLbl;
	protected:
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
			this->SuspendLayout();
			// 
			// loginLnkLbl
			// 
			this->loginLnkLbl->ActiveLinkColor = System::Drawing::Color::Blue;
			this->loginLnkLbl->AutoSize = true;
			this->loginLnkLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->loginLnkLbl->LinkColor = System::Drawing::Color::Black;
			this->loginLnkLbl->Location = System::Drawing::Point(406, 454);
			this->loginLnkLbl->Name = L"loginLnkLbl";
			this->loginLnkLbl->Size = System::Drawing::Size(55, 20);
			this->loginLnkLbl->TabIndex = 32;
			this->loginLnkLbl->TabStop = true;
			this->loginLnkLbl->Text = L"Log In";
			this->loginLnkLbl->VisitedLinkColor = System::Drawing::Color::Black;
			this->loginLnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Signup::loginLnkLbl_LinkClicked);
			// 
			// signupBtn
			// 
			this->signupBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->signupBtn->FlatAppearance->BorderSize = 0;
			this->signupBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signupBtn->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->signupBtn->Location = System::Drawing::Point(66, 391);
			this->signupBtn->Name = L"signupBtn";
			this->signupBtn->Size = System::Drawing::Size(736, 40);
			this->signupBtn->TabIndex = 31;
			this->signupBtn->Text = L"SIGN UP";
			this->signupBtn->UseVisualStyleBackColor = false;
			this->signupBtn->Click += gcnew System::EventHandler(this, &Signup::signupBtn_Click_1);
			// 
			// passTxtBox
			// 
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxtBox->Location = System::Drawing::Point(450, 315);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(352, 38);
			this->passTxtBox->TabIndex = 30;
			this->passTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::passTxtBox_TextChanged);
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(446, 291);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(89, 20);
			this->passLbl->TabIndex = 29;
			this->passLbl->Text = L"Password:";
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(65, 315);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->Size = System::Drawing::Size(352, 38);
			this->emailTxtBox->TabIndex = 28;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::emailTxtBox_TextChanged);
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(61, 291);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(58, 20);
			this->emailLbl->TabIndex = 27;
			this->emailLbl->Text = L"Email:";
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(446, 214);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(123, 20);
			this->accTypeLbl->TabIndex = 26;
			this->accTypeLbl->Text = L"Account Type:";
			// 
			// accTypeCbox
			// 
			this->accTypeCbox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->accTypeCbox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->accTypeCbox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeCbox->FormattingEnabled = true;
			this->accTypeCbox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student", L"Faculty", L"Admin" });
			this->accTypeCbox->Location = System::Drawing::Point(450, 238);
			this->accTypeCbox->Margin = System::Windows::Forms::Padding(5);
			this->accTypeCbox->Name = L"accTypeCbox";
			this->accTypeCbox->Size = System::Drawing::Size(352, 35);
			this->accTypeCbox->TabIndex = 25;
			this->accTypeCbox->SelectedIndexChanged += gcnew System::EventHandler(this, &Signup::accTypeCbox_SelectedIndexChanged);
			// 
			// idTxtBox
			// 
			this->idTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->idTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idTxtBox->Location = System::Drawing::Point(65, 239);
			this->idTxtBox->Name = L"idTxtBox";
			this->idTxtBox->Size = System::Drawing::Size(352, 38);
			this->idTxtBox->TabIndex = 24;
			this->idTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::idTxtBox_TextChanged);
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(61, 215);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(103, 20);
			this->idNumLbl->TabIndex = 23;
			this->idNumLbl->Text = L"ID Number:";
			// 
			// lnameTxtBox
			// 
			this->lnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lnameTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameTxtBox->Location = System::Drawing::Point(450, 160);
			this->lnameTxtBox->Name = L"lnameTxtBox";
			this->lnameTxtBox->Size = System::Drawing::Size(352, 38);
			this->lnameTxtBox->TabIndex = 22;
			this->lnameTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::lnameTxtBox_TextChanged);
			// 
			// lnameLbl
			// 
			this->lnameLbl->AutoSize = true;
			this->lnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lnameLbl->Location = System::Drawing::Point(447, 131);
			this->lnameLbl->Name = L"lnameLbl";
			this->lnameLbl->Size = System::Drawing::Size(98, 20);
			this->lnameLbl->TabIndex = 21;
			this->lnameLbl->Text = L"Last Name:";
			// 
			// fnameTxtBox
			// 
			this->fnameTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fnameTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameTxtBox->Location = System::Drawing::Point(65, 160);
			this->fnameTxtBox->Name = L"fnameTxtBox";
			this->fnameTxtBox->Size = System::Drawing::Size(352, 38);
			this->fnameTxtBox->TabIndex = 20;
			this->fnameTxtBox->TextChanged += gcnew System::EventHandler(this, &Signup::fnameTxtBox_TextChanged);
			// 
			// fnameLbl
			// 
			this->fnameLbl->AutoSize = true;
			this->fnameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fnameLbl->Location = System::Drawing::Point(62, 131);
			this->fnameLbl->Name = L"fnameLbl";
			this->fnameLbl->Size = System::Drawing::Size(101, 20);
			this->fnameLbl->TabIndex = 19;
			this->fnameLbl->Text = L"First Name:";
			// 
			// signupLbl
			// 
			this->signupLbl->AutoSize = true;
			this->signupLbl->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupLbl->Location = System::Drawing::Point(59, 62);
			this->signupLbl->Name = L"signupLbl";
			this->signupLbl->Size = System::Drawing::Size(301, 41);
			this->signupLbl->TabIndex = 18;
			this->signupLbl->Text = L"Sign Up Your Account";
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(873, 522);
			this->ControlBox = false;
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
			this->Controls->Add(this->signupLbl);
			this->Name = L"Signup";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signup";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: String^ tempFname = " ";
	private: String^ tempLname = " ";
	private: String^ tempId = " ";
	private: String^ tempAccType = " ";
	private: String^ tempEmail = " ";
	private: String^ tempPassword = " ";

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void fnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void lnameTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void idTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void accTypeCbox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void passTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	// Sign Up Button
	private: System::Void signupBtn_Click_1(System::Object^ sender, System::EventArgs^ e);

	// Return to Login Page
	private: System::Void loginLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

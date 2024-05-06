#pragma once
#include "Profile.h"
#include "Signup.h"
#include "ForgetPass.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ sysNameLbl;
	private: System::Windows::Forms::Label^ loginLbl;


	private: System::Windows::Forms::TextBox^ passTxtBox;

	private: System::Windows::Forms::Label^ passLbl;
	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::LinkLabel^ signupLnkLbl;
	private: System::Windows::Forms::LinkLabel^ fpassLnkLbl;
	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::TextBox^ emailTxtBox;


	protected:

	protected:


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
			this->sysNameLbl = (gcnew System::Windows::Forms::Label());
			this->loginLbl = (gcnew System::Windows::Forms::Label());
			this->passTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->passLbl = (gcnew System::Windows::Forms::Label());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->signupLnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->fpassLnkLbl = (gcnew System::Windows::Forms::LinkLabel());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->emailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// sysNameLbl
			// 
			this->sysNameLbl->AutoSize = true;
			this->sysNameLbl->Font = (gcnew System::Drawing::Font(L"Impact", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sysNameLbl->Location = System::Drawing::Point(50, 140);
			this->sysNameLbl->Name = L"sysNameLbl";
			this->sysNameLbl->Size = System::Drawing::Size(354, 225);
			this->sysNameLbl->TabIndex = 0;
			this->sysNameLbl->Text = L"CLASSROOM\r\nRESERVATION\r\nSYSTEM\r\n";
			this->sysNameLbl->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// loginLbl
			// 
			this->loginLbl->AutoSize = true;
			this->loginLbl->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginLbl->Location = System::Drawing::Point(445, 118);
			this->loginLbl->Name = L"loginLbl";
			this->loginLbl->Size = System::Drawing::Size(239, 35);
			this->loginLbl->TabIndex = 1;
			this->loginLbl->Text = L"Log In Your Account";
			// 
			// passTxtBox
			// 
			this->passTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passTxtBox->Location = System::Drawing::Point(452, 259);
			this->passTxtBox->Name = L"passTxtBox";
			this->passTxtBox->Size = System::Drawing::Size(352, 31);
			this->passTxtBox->TabIndex = 5;
			// 
			// passLbl
			// 
			this->passLbl->AutoSize = true;
			this->passLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passLbl->Location = System::Drawing::Point(449, 235);
			this->passLbl->Name = L"passLbl";
			this->passLbl->Size = System::Drawing::Size(89, 20);
			this->passLbl->TabIndex = 4;
			this->passLbl->Text = L"Password:";
			// 
			// loginBtn
			// 
			this->loginBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->loginBtn->FlatAppearance->BorderSize = 0;
			this->loginBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginBtn->Location = System::Drawing::Point(452, 323);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(352, 40);
			this->loginBtn->TabIndex = 6;
			this->loginBtn->Text = L"LOG IN";
			this->loginBtn->UseVisualStyleBackColor = false;
			this->loginBtn->Click += gcnew System::EventHandler(this, &Login::loginBtn_Click);
			// 
			// signupLnkLbl
			// 
			this->signupLnkLbl->ActiveLinkColor = System::Drawing::Color::Blue;
			this->signupLnkLbl->AutoSize = true;
			this->signupLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->signupLnkLbl->LinkColor = System::Drawing::Color::Black;
			this->signupLnkLbl->Location = System::Drawing::Point(511, 383);
			this->signupLnkLbl->Name = L"signupLnkLbl";
			this->signupLnkLbl->Size = System::Drawing::Size(58, 17);
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
			this->fpassLnkLbl->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->fpassLnkLbl->LinkColor = System::Drawing::Color::Black;
			this->fpassLnkLbl->Location = System::Drawing::Point(644, 383);
			this->fpassLnkLbl->Name = L"fpassLnkLbl";
			this->fpassLnkLbl->Size = System::Drawing::Size(114, 17);
			this->fpassLnkLbl->TabIndex = 8;
			this->fpassLnkLbl->TabStop = true;
			this->fpassLnkLbl->Text = L"Forget Password";
			this->fpassLnkLbl->VisitedLinkColor = System::Drawing::Color::Black;
			this->fpassLnkLbl->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::fpassLnkLbl_LinkClicked);
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(448, 164);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(58, 20);
			this->emailLbl->TabIndex = 2;
			this->emailLbl->Text = L"Email:";
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(451, 188);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->Size = System::Drawing::Size(352, 31);
			this->emailTxtBox->TabIndex = 3;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->ClientSize = System::Drawing::Size(873, 522);
			this->Controls->Add(this->fpassLnkLbl);
			this->Controls->Add(this->signupLnkLbl);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passTxtBox);
			this->Controls->Add(this->passLbl);
			this->Controls->Add(this->emailTxtBox);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->loginLbl);
			this->Controls->Add(this->sysNameLbl);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Redirect to Profile Page
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Profile^ profileForm = gcnew Profile();
		profileForm->Show();
		this->Hide();
	}

	// Sign Up Hyperlink
	private: System::Void signupLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		// TODO: Error Handling
		// If text boxes are empty
		// Input length

		// Redirects to Sign Up page
		Signup^ signUpForm = gcnew Signup();
		signUpForm->Show();
	}

	// Forget Password Hyperlink
	private: System::Void fpassLnkLbl_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		ForgetPass^ forgetPassForm = gcnew ForgetPass();
		forgetPassForm->Show();
	}
};
};


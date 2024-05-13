#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class ForgetPass : public System::Windows::Forms::Form
	{
	public:
		ForgetPass(void);

	protected:
		~ForgetPass();

	private: System::Windows::Forms::Button^ findAccBtn;
	protected:

	protected:

	private: System::Windows::Forms::TextBox^ emailTxtBox;

	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::Label^ fpassLbl;
	private: System::Windows::Forms::Label^ captionTxtBox;

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
			this->findAccBtn = (gcnew System::Windows::Forms::Button());
			this->emailTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->fpassLbl = (gcnew System::Windows::Forms::Label());
			this->captionTxtBox = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// findAccBtn
			// 
			this->findAccBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->findAccBtn->FlatAppearance->BorderSize = 0;
			this->findAccBtn->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->findAccBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->findAccBtn->Location = System::Drawing::Point(57, 181);
			this->findAccBtn->Name = L"findAccBtn";
			this->findAccBtn->Size = System::Drawing::Size(352, 40);
			this->findAccBtn->TabIndex = 31;
			this->findAccBtn->Text = L"FIND ACCOUNT";
			this->findAccBtn->UseVisualStyleBackColor = false;
			this->findAccBtn->Click += gcnew System::EventHandler(this, &ForgetPass::findAccBtn_Click);
			// 
			// emailTxtBox
			// 
			this->emailTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailTxtBox->Location = System::Drawing::Point(57, 144);
			this->emailTxtBox->Name = L"emailTxtBox";
			this->emailTxtBox->Size = System::Drawing::Size(352, 31);
			this->emailTxtBox->TabIndex = 24;
			this->emailTxtBox->TextChanged += gcnew System::EventHandler(this, &ForgetPass::emailTxtBox_TextChanged);
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(53, 120);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(49, 19);
			this->emailLbl->TabIndex = 23;
			this->emailLbl->Text = L"Email:";
			// 
			// fpassLbl
			// 
			this->fpassLbl->AutoSize = true;
			this->fpassLbl->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fpassLbl->Location = System::Drawing::Point(50, 46);
			this->fpassLbl->Name = L"fpassLbl";
			this->fpassLbl->Size = System::Drawing::Size(244, 41);
			this->fpassLbl->TabIndex = 18;
			this->fpassLbl->Text = L"Forget Password";
			// 
			// captionTxtBox
			// 
			this->captionTxtBox->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->captionTxtBox->AutoEllipsis = true;
			this->captionTxtBox->AutoSize = true;
			this->captionTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->captionTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->captionTxtBox->Location = System::Drawing::Point(54, 87);
			this->captionTxtBox->Name = L"captionTxtBox";
			this->captionTxtBox->Size = System::Drawing::Size(364, 19);
			this->captionTxtBox->TabIndex = 32;
			this->captionTxtBox->Text = L"Enter your email and we\'ll check for it in our database\r\n";
			// 
			// ForgetPass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(471, 263);
			this->Controls->Add(this->captionTxtBox);
			this->Controls->Add(this->findAccBtn);
			this->Controls->Add(this->emailTxtBox);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->fpassLbl);
			this->Name = L"ForgetPass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: MySqlConnection^ conn = gcnew MySqlConnection();
		private: String^ tempEmail;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS------------------------------------------------------------------------*/

	private: System::Void emailTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	// Find Account Page
	private: System::Void findAccBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};
}

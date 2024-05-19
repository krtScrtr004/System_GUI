#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class ChangePass : public System::Windows::Forms::Form
	{
	public:
		ChangePass(String^ email);

	protected:
		~ChangePass();
		
	private: System::Windows::Forms::Label^ captionTxtBox;
	private: System::Windows::Forms::Button^ npassBtn;
	private: System::Windows::Forms::TextBox^ npassTxtBox;
	private: System::Windows::Forms::Label^ npassLbl;
	private: System::Windows::Forms::Label^ changePassLbl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangePass::typeid));
			this->captionTxtBox = (gcnew System::Windows::Forms::Label());
			this->npassBtn = (gcnew System::Windows::Forms::Button());
			this->npassTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->npassLbl = (gcnew System::Windows::Forms::Label());
			this->changePassLbl = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// captionTxtBox
			// 
			this->captionTxtBox->AllowDrop = true;
			this->captionTxtBox->AutoSize = true;
			this->captionTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->captionTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->captionTxtBox->Location = System::Drawing::Point(54, 81);
			this->captionTxtBox->Name = L"captionTxtBox";
			this->captionTxtBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->captionTxtBox->Size = System::Drawing::Size(195, 23);
			this->captionTxtBox->TabIndex = 37;
			this->captionTxtBox->Text = L"Type your new password";
			this->captionTxtBox->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// npassBtn
			// 
			this->npassBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->npassBtn->FlatAppearance->BorderSize = 0;
			this->npassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->npassBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassBtn->ForeColor = System::Drawing::Color::White;
			this->npassBtn->Location = System::Drawing::Point(59, 161);
			this->npassBtn->Name = L"npassBtn";
			this->npassBtn->Size = System::Drawing::Size(396, 40);
			this->npassBtn->TabIndex = 36;
			this->npassBtn->Text = L"CONFIRM";
			this->npassBtn->UseVisualStyleBackColor = false;
			this->npassBtn->Click += gcnew System::EventHandler(this, &ChangePass::npassBtn_Click);
			// 
			// npassTxtBox
			// 
			this->npassTxtBox->BackColor = System::Drawing::Color::White;
			this->npassTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->npassTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->npassTxtBox->Location = System::Drawing::Point(218, 120);
			this->npassTxtBox->Name = L"npassTxtBox";
			this->npassTxtBox->Size = System::Drawing::Size(237, 31);
			this->npassTxtBox->TabIndex = 35;
			this->npassTxtBox->TextChanged += gcnew System::EventHandler(this, &ChangePass::npassTxtBox_TextChanged);
			// 
			// npassLbl
			// 
			this->npassLbl->AutoSize = true;
			this->npassLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->npassLbl->Location = System::Drawing::Point(55, 122);
			this->npassLbl->Name = L"npassLbl";
			this->npassLbl->Size = System::Drawing::Size(146, 26);
			this->npassLbl->TabIndex = 34;
			this->npassLbl->Text = L"New Password:";
			// 
			// changePassLbl
			// 
			this->changePassLbl->AutoSize = true;
			this->changePassLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePassLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->changePassLbl->Location = System::Drawing::Point(51, 40);
			this->changePassLbl->Name = L"changePassLbl";
			this->changePassLbl->Size = System::Drawing::Size(282, 42);
			this->changePassLbl->TabIndex = 33;
			this->changePassLbl->Text = L"Change Password";
			// 
			// ChangePass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(521, 255);
			this->Controls->Add(this->captionTxtBox);
			this->Controls->Add(this->npassBtn);
			this->Controls->Add(this->npassTxtBox);
			this->Controls->Add(this->npassLbl);
			this->Controls->Add(this->changePassLbl);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ChangePass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: String^ tempEmail;
	private: String^ tempPassword;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void npassTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void npassBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}
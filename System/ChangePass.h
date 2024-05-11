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
	/// Summary for ChangePass
	/// </summary>
	public ref class ChangePass : public System::Windows::Forms::Form
	{
	public:
		ChangePass(void)
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
		~ChangePass()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ captionTxtBox;
	protected:

	private: System::Windows::Forms::Button^ npassBtn;
	protected:

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
			this->captionTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->captionTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->captionTxtBox->Location = System::Drawing::Point(73, 106);
			this->captionTxtBox->Name = L"captionTxtBox";
			this->captionTxtBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->captionTxtBox->Size = System::Drawing::Size(160, 17);
			this->captionTxtBox->TabIndex = 37;
			this->captionTxtBox->Text = L"Type your new password";
			this->captionTxtBox->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// npassBtn
			// 
			this->npassBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->npassBtn->FlatAppearance->BorderSize = 0;
			this->npassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->npassBtn->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->npassBtn->Location = System::Drawing::Point(77, 216);
			this->npassBtn->Name = L"npassBtn";
			this->npassBtn->Size = System::Drawing::Size(352, 40);
			this->npassBtn->TabIndex = 36;
			this->npassBtn->Text = L"CONFIRM";
			this->npassBtn->UseVisualStyleBackColor = false;
			this->npassBtn->Click += gcnew System::EventHandler(this, &ChangePass::npassBtn_Click);
			// 
			// npassTxtBox
			// 
			this->npassTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->npassTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassTxtBox->Location = System::Drawing::Point(77, 160);
			this->npassTxtBox->Name = L"npassTxtBox";
			this->npassTxtBox->Size = System::Drawing::Size(352, 31);
			this->npassTxtBox->TabIndex = 35;
			// 
			// npassLbl
			// 
			this->npassLbl->AutoSize = true;
			this->npassLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->npassLbl->Location = System::Drawing::Point(73, 136);
			this->npassLbl->Name = L"npassLbl";
			this->npassLbl->Size = System::Drawing::Size(108, 19);
			this->npassLbl->TabIndex = 34;
			this->npassLbl->Text = L"New Password:";
			// 
			// changePassLbl
			// 
			this->changePassLbl->AutoSize = true;
			this->changePassLbl->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changePassLbl->Location = System::Drawing::Point(70, 65);
			this->changePassLbl->Name = L"changePassLbl";
			this->changePassLbl->Size = System::Drawing::Size(261, 41);
			this->changePassLbl->TabIndex = 33;
			this->changePassLbl->Text = L"Change Password";
			// 
			// ChangePass
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(511, 307);
			this->ControlBox = false;
			this->Controls->Add(this->captionTxtBox);
			this->Controls->Add(this->npassBtn);
			this->Controls->Add(this->npassTxtBox);
			this->Controls->Add(this->npassLbl);
			this->Controls->Add(this->changePassLbl);
			this->Name = L"ChangePass";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ChangePass";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void npassBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

};
}
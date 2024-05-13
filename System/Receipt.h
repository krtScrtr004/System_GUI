#pragma once
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	public ref class Receipt : public System::Windows::Forms::Form
	{
	public:
		Receipt(User^ other);

	protected:
		~Receipt();

	private: System::Windows::Forms::PictureBox^ roomImg;
	protected:
	private: System::Windows::Forms::Label^ rcodeLbl;

	private: System::Windows::Forms::Label^ fateLbl;
	private: System::Windows::Forms::Label^ inTimeLbl;
	private: System::Windows::Forms::Label^ outTimeLbl;
	private: System::Windows::Forms::TextBox^ rcodeTxtBox;

	private: System::Windows::Forms::TextBox^ dateTxtBox;

	private: System::Windows::Forms::TextBox^ inTimeTxtBox;
	private: System::Windows::Forms::TextBox^ outTimeTxtBox;
	private: System::Windows::Forms::Label^ fdbckTxtBox;
	private: System::Windows::Forms::TextBox^ fdBackTxtBox;
	private: System::Windows::Forms::Button^ submitBtn;
	private: System::Windows::Forms::TextBox^ bldgTxtBox;
	private: System::Windows::Forms::Label^ bldgLbl;

	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::PictureBox^ durationIcon;
	private: System::Windows::Forms::PictureBox^ timeIcon;
	private: System::Windows::Forms::PictureBox^ dateIcon;
	private: System::Windows::Forms::PictureBox^ feedbackIcon;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Receipt::typeid));
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeLbl = (gcnew System::Windows::Forms::Label());
			this->fateLbl = (gcnew System::Windows::Forms::Label());
			this->inTimeLbl = (gcnew System::Windows::Forms::Label());
			this->outTimeLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->inTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->outTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->fdbckTxtBox = (gcnew System::Windows::Forms::Label());
			this->fdBackTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->bldgTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->bldgLbl = (gcnew System::Windows::Forms::Label());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->durationIcon = (gcnew System::Windows::Forms::PictureBox());
			this->timeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->dateIcon = (gcnew System::Windows::Forms::PictureBox());
			this->feedbackIcon = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedbackIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.InitialImage")));
			this->roomImg->Location = System::Drawing::Point(37, 37);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(212, 189);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 0;
			this->roomImg->TabStop = false;
			// 
			// rcodeLbl
			// 
			this->rcodeLbl->AutoSize = true;
			this->rcodeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeLbl->Location = System::Drawing::Point(307, 43);
			this->rcodeLbl->Name = L"rcodeLbl";
			this->rcodeLbl->Size = System::Drawing::Size(124, 22);
			this->rcodeLbl->TabIndex = 1;
			this->rcodeLbl->Text = L"ROOM CODE:";
			// 
			// fateLbl
			// 
			this->fateLbl->AutoSize = true;
			this->fateLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fateLbl->Location = System::Drawing::Point(307, 117);
			this->fateLbl->Name = L"fateLbl";
			this->fateLbl->Size = System::Drawing::Size(59, 22);
			this->fateLbl->TabIndex = 3;
			this->fateLbl->Text = L"DATE:";
			// 
			// inTimeLbl
			// 
			this->inTimeLbl->AutoSize = true;
			this->inTimeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeLbl->Location = System::Drawing::Point(307, 154);
			this->inTimeLbl->Name = L"inTimeLbl";
			this->inTimeLbl->Size = System::Drawing::Size(80, 22);
			this->inTimeLbl->TabIndex = 4;
			this->inTimeLbl->Text = L"IN TIME:";
			// 
			// outTimeLbl
			// 
			this->outTimeLbl->AutoSize = true;
			this->outTimeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeLbl->Location = System::Drawing::Point(307, 191);
			this->outTimeLbl->Name = L"outTimeLbl";
			this->outTimeLbl->Size = System::Drawing::Size(98, 22);
			this->outTimeLbl->TabIndex = 5;
			this->outTimeLbl->Text = L"OUT TIME:";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(449, 34);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->ReadOnly = true;
			this->rcodeTxtBox->Size = System::Drawing::Size(229, 31);
			this->rcodeTxtBox->TabIndex = 6;
			this->rcodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dateTxtBox
			// 
			this->dateTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->dateTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTxtBox->Location = System::Drawing::Point(449, 108);
			this->dateTxtBox->Name = L"dateTxtBox";
			this->dateTxtBox->ReadOnly = true;
			this->dateTxtBox->Size = System::Drawing::Size(229, 31);
			this->dateTxtBox->TabIndex = 8;
			this->dateTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// inTimeTxtBox
			// 
			this->inTimeTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->inTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeTxtBox->Location = System::Drawing::Point(449, 145);
			this->inTimeTxtBox->Name = L"inTimeTxtBox";
			this->inTimeTxtBox->ReadOnly = true;
			this->inTimeTxtBox->Size = System::Drawing::Size(229, 31);
			this->inTimeTxtBox->TabIndex = 9;
			this->inTimeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outTimeTxtBox
			// 
			this->outTimeTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->outTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeTxtBox->Location = System::Drawing::Point(449, 182);
			this->outTimeTxtBox->Name = L"outTimeTxtBox";
			this->outTimeTxtBox->ReadOnly = true;
			this->outTimeTxtBox->Size = System::Drawing::Size(229, 31);
			this->outTimeTxtBox->TabIndex = 10;
			this->outTimeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fdbckTxtBox
			// 
			this->fdbckTxtBox->AutoSize = true;
			this->fdbckTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdbckTxtBox->Location = System::Drawing::Point(66, 247);
			this->fdbckTxtBox->Name = L"fdbckTxtBox";
			this->fdbckTxtBox->Size = System::Drawing::Size(75, 19);
			this->fdbckTxtBox->TabIndex = 11;
			this->fdbckTxtBox->Text = L"Feedback:";
			// 
			// fdBackTxtBox
			// 
			this->fdBackTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->fdBackTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdBackTxtBox->Location = System::Drawing::Point(37, 269);
			this->fdBackTxtBox->Multiline = true;
			this->fdBackTxtBox->Name = L"fdBackTxtBox";
			this->fdBackTxtBox->Size = System::Drawing::Size(641, 171);
			this->fdBackTxtBox->TabIndex = 12;
			this->fdBackTxtBox->TextChanged += gcnew System::EventHandler(this, &Receipt::fdBackTxtBox_TextChanged);
			// 
			// submitBtn
			// 
			this->submitBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->submitBtn->Location = System::Drawing::Point(37, 447);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(641, 42);
			this->submitBtn->TabIndex = 13;
			this->submitBtn->Text = L"SUBMIT";
			this->submitBtn->UseVisualStyleBackColor = false;
			this->submitBtn->Click += gcnew System::EventHandler(this, &Receipt::submitBtn_Click);
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->bldgTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgTxtBox->Location = System::Drawing::Point(449, 71);
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->ReadOnly = true;
			this->bldgTxtBox->Size = System::Drawing::Size(229, 31);
			this->bldgTxtBox->TabIndex = 7;
			this->bldgTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bldgLbl
			// 
			this->bldgLbl->AutoSize = true;
			this->bldgLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgLbl->Location = System::Drawing::Point(307, 80);
			this->bldgLbl->Name = L"bldgLbl";
			this->bldgLbl->Size = System::Drawing::Size(97, 22);
			this->bldgLbl->TabIndex = 2;
			this->bldgLbl->Text = L"BUILDING:";
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(270, 80);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(31, 22);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 58;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(270, 43);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(31, 22);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 57;
			this->rcodeIcon->TabStop = false;
			// 
			// durationIcon
			// 
			this->durationIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"durationIcon.Image")));
			this->durationIcon->Location = System::Drawing::Point(270, 191);
			this->durationIcon->Name = L"durationIcon";
			this->durationIcon->Size = System::Drawing::Size(31, 22);
			this->durationIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->durationIcon->TabIndex = 64;
			this->durationIcon->TabStop = false;
			// 
			// timeIcon
			// 
			this->timeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"timeIcon.Image")));
			this->timeIcon->Location = System::Drawing::Point(270, 154);
			this->timeIcon->Name = L"timeIcon";
			this->timeIcon->Size = System::Drawing::Size(31, 22);
			this->timeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->timeIcon->TabIndex = 63;
			this->timeIcon->TabStop = false;
			// 
			// dateIcon
			// 
			this->dateIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dateIcon.Image")));
			this->dateIcon->Location = System::Drawing::Point(270, 117);
			this->dateIcon->Name = L"dateIcon";
			this->dateIcon->Size = System::Drawing::Size(31, 22);
			this->dateIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->dateIcon->TabIndex = 62;
			this->dateIcon->TabStop = false;
			// 
			// feedbackIcon
			// 
			this->feedbackIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedbackIcon.Image")));
			this->feedbackIcon->Location = System::Drawing::Point(37, 247);
			this->feedbackIcon->Name = L"feedbackIcon";
			this->feedbackIcon->Size = System::Drawing::Size(23, 19);
			this->feedbackIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->feedbackIcon->TabIndex = 65;
			this->feedbackIcon->TabStop = false;
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(719, 510);
			this->Controls->Add(this->feedbackIcon);
			this->Controls->Add(this->durationIcon);
			this->Controls->Add(this->timeIcon);
			this->Controls->Add(this->dateIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeIcon);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->fdbckTxtBox);
			this->Controls->Add(this->outTimeTxtBox);
			this->Controls->Add(this->inTimeTxtBox);
			this->Controls->Add(this->dateTxtBox);
			this->Controls->Add(this->bldgTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->outTimeLbl);
			this->Controls->Add(this->inTimeLbl);
			this->Controls->Add(this->fateLbl);
			this->Controls->Add(this->bldgLbl);
			this->Controls->Add(this->rcodeLbl);
			this->Controls->Add(this->roomImg);
			this->Controls->Add(this->fdBackTxtBox);
			this->Name = L"Receipt";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedbackIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: User^ user = gcnew User();
	private: String^ tempFeedback;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/
	
	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void fdBackTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS--------------------------------------------------------------------------*/

	private: void fetchLblData(void);

	private: void fetchRoomImg(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

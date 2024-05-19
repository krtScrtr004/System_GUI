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
	private: System::Windows::Forms::TextBox^ rcodeTxtBox;
	private: System::Windows::Forms::TextBox^ dateTxtBox;
	private: System::Windows::Forms::TextBox^ inTimeTxtBox;
	private: System::Windows::Forms::TextBox^ outTimeTxtBox;
	private: System::Windows::Forms::Label^ fdbckTxtBox;
	private: System::Windows::Forms::TextBox^ fdBackTxtBox;
	private: System::Windows::Forms::Button^ submitBtn;
	private: System::Windows::Forms::TextBox^ bldgTxtBox;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::PictureBox^ durationIcon;
	private: System::Windows::Forms::PictureBox^ timeIcon;
	private: System::Windows::Forms::PictureBox^ dateIcon;
	private: System::Windows::Forms::PictureBox^ feedbackIcon;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ reserveLbl;

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
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->inTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->outTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->fdbckTxtBox = (gcnew System::Windows::Forms::Label());
			this->fdBackTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->bldgTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->durationIcon = (gcnew System::Windows::Forms::PictureBox());
			this->timeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->dateIcon = (gcnew System::Windows::Forms::PictureBox());
			this->feedbackIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->reserveLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedbackIcon))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.InitialImage")));
			this->roomImg->Location = System::Drawing::Point(38, 66);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(246, 210);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 0;
			this->roomImg->TabStop = false;
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->rcodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(73, 289);
			this->rcodeTxtBox->Multiline = true;
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->ReadOnly = true;
			this->rcodeTxtBox->Size = System::Drawing::Size(209, 30);
			this->rcodeTxtBox->TabIndex = 6;
			this->rcodeTxtBox->Text = L"ROOM CODE";
			// 
			// dateTxtBox
			// 
			this->dateTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->dateTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dateTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTxtBox->Location = System::Drawing::Point(73, 360);
			this->dateTxtBox->Multiline = true;
			this->dateTxtBox->Name = L"dateTxtBox";
			this->dateTxtBox->ReadOnly = true;
			this->dateTxtBox->Size = System::Drawing::Size(209, 26);
			this->dateTxtBox->TabIndex = 8;
			this->dateTxtBox->Text = L"DATE";
			// 
			// inTimeTxtBox
			// 
			this->inTimeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->inTimeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeTxtBox->Location = System::Drawing::Point(73, 395);
			this->inTimeTxtBox->Multiline = true;
			this->inTimeTxtBox->Name = L"inTimeTxtBox";
			this->inTimeTxtBox->ReadOnly = true;
			this->inTimeTxtBox->Size = System::Drawing::Size(209, 24);
			this->inTimeTxtBox->TabIndex = 9;
			this->inTimeTxtBox->Text = L"IN TIME";
			// 
			// outTimeTxtBox
			// 
			this->outTimeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->outTimeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->outTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeTxtBox->Location = System::Drawing::Point(73, 430);
			this->outTimeTxtBox->Multiline = true;
			this->outTimeTxtBox->Name = L"outTimeTxtBox";
			this->outTimeTxtBox->ReadOnly = true;
			this->outTimeTxtBox->Size = System::Drawing::Size(209, 24);
			this->outTimeTxtBox->TabIndex = 10;
			this->outTimeTxtBox->Text = L"OUT TIME";
			// 
			// fdbckTxtBox
			// 
			this->fdbckTxtBox->AutoSize = true;
			this->fdbckTxtBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fdbckTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdbckTxtBox->Location = System::Drawing::Point(87, 36);
			this->fdbckTxtBox->Name = L"fdbckTxtBox";
			this->fdbckTxtBox->Size = System::Drawing::Size(115, 26);
			this->fdbckTxtBox->TabIndex = 11;
			this->fdbckTxtBox->Text = L"FEEDBACK:";
			// 
			// fdBackTxtBox
			// 
			this->fdBackTxtBox->BackColor = System::Drawing::Color::White;
			this->fdBackTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fdBackTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdBackTxtBox->Location = System::Drawing::Point(47, 68);
			this->fdBackTxtBox->Multiline = true;
			this->fdBackTxtBox->Name = L"fdBackTxtBox";
			this->fdBackTxtBox->Size = System::Drawing::Size(428, 330);
			this->fdBackTxtBox->TabIndex = 12;
			this->fdBackTxtBox->TextChanged += gcnew System::EventHandler(this, &Receipt::fdBackTxtBox_TextChanged);
			// 
			// submitBtn
			// 
			this->submitBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->submitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->submitBtn->Location = System::Drawing::Point(47, 414);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(428, 42);
			this->submitBtn->TabIndex = 13;
			this->submitBtn->Text = L"SUBMIT";
			this->submitBtn->UseVisualStyleBackColor = false;
			this->submitBtn->Click += gcnew System::EventHandler(this, &Receipt::submitBtn_Click);
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->bldgTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bldgTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgTxtBox->Location = System::Drawing::Point(73, 325);
			this->bldgTxtBox->Multiline = true;
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->ReadOnly = true;
			this->bldgTxtBox->Size = System::Drawing::Size(209, 29);
			this->bldgTxtBox->TabIndex = 7;
			this->bldgTxtBox->Text = L"BUILDING";
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(38, 322);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(29, 27);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 58;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(38, 286);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(29, 27);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 57;
			this->rcodeIcon->TabStop = false;
			// 
			// durationIcon
			// 
			this->durationIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"durationIcon.Image")));
			this->durationIcon->Location = System::Drawing::Point(38, 427);
			this->durationIcon->Name = L"durationIcon";
			this->durationIcon->Size = System::Drawing::Size(29, 27);
			this->durationIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->durationIcon->TabIndex = 64;
			this->durationIcon->TabStop = false;
			// 
			// timeIcon
			// 
			this->timeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"timeIcon.Image")));
			this->timeIcon->Location = System::Drawing::Point(38, 392);
			this->timeIcon->Name = L"timeIcon";
			this->timeIcon->Size = System::Drawing::Size(29, 27);
			this->timeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->timeIcon->TabIndex = 63;
			this->timeIcon->TabStop = false;
			// 
			// dateIcon
			// 
			this->dateIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dateIcon.Image")));
			this->dateIcon->Location = System::Drawing::Point(38, 357);
			this->dateIcon->Name = L"dateIcon";
			this->dateIcon->Size = System::Drawing::Size(29, 27);
			this->dateIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->dateIcon->TabIndex = 62;
			this->dateIcon->TabStop = false;
			// 
			// feedbackIcon
			// 
			this->feedbackIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedbackIcon.Image")));
			this->feedbackIcon->Location = System::Drawing::Point(47, 35);
			this->feedbackIcon->Name = L"feedbackIcon";
			this->feedbackIcon->Size = System::Drawing::Size(34, 27);
			this->feedbackIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->feedbackIcon->TabIndex = 65;
			this->feedbackIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->feedbackIcon);
			this->panel1->Controls->Add(this->fdbckTxtBox);
			this->panel1->Controls->Add(this->fdBackTxtBox);
			this->panel1->Controls->Add(this->submitBtn);
			this->panel1->Location = System::Drawing::Point(327, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(525, 486);
			this->panel1->TabIndex = 66;
			// 
			// reserveLbl
			// 
			this->reserveLbl->AutoSize = true;
			this->reserveLbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserveLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveLbl->Location = System::Drawing::Point(33, 34);
			this->reserveLbl->Name = L"reserveLbl";
			this->reserveLbl->Size = System::Drawing::Size(141, 26);
			this->reserveLbl->TabIndex = 66;
			this->reserveLbl->Text = L"RESERVATION:";
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->ClientSize = System::Drawing::Size(842, 478);
			this->Controls->Add(this->reserveLbl);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->durationIcon);
			this->Controls->Add(this->timeIcon);
			this->Controls->Add(this->dateIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeIcon);
			this->Controls->Add(this->outTimeTxtBox);
			this->Controls->Add(this->inTimeTxtBox);
			this->Controls->Add(this->dateTxtBox);
			this->Controls->Add(this->bldgTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->roomImg);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: User^ user = gcnew User();
	private: String^ tempFeedback;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/
	
	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void fdBackTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS--------------------------------------------------------------------------*/

	private: void fetchUserReservation(void);

	private: void fetchReservationData(void);

	private: void fetchRoomImg(void);

	private: void insertUserFeedback(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

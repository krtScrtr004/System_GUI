#pragma once
#include "Room.h"
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for ReserveInfoForm
	/// </summary>
	public ref class ReserveInfoForm : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ conn;

	public:
		ReserveInfoForm(User^ otherUser, Room^ otherRoom);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ReserveInfoForm();
		

	protected:

	private: System::Windows::Forms::Label^ reserveFormLbl;
	private: System::Windows::Forms::Label^ dateLbl;
	private: System::Windows::Forms::Label^ timeLbl;



	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ reserveBtn;
	private: System::Windows::Forms::PictureBox^ roomImg;
	private: System::Windows::Forms::Label^ roomNameLbl;
	private: System::Windows::Forms::Label^ bldLbl;
	private: System::Windows::Forms::Label^ boardTypeLbl;
	private: System::Windows::Forms::Label^ tvAvailLbl;
	private: System::Windows::Forms::Label^ acAvailLbl;
	private: System::Windows::Forms::Label^ roomInfoLbl;

	private: System::Windows::Forms::Label^ roomCodeDataLbl;

	private: System::Windows::Forms::Label^ bldDataLbl;
	private: System::Windows::Forms::Label^ boardTypeDataLbl;
	private: System::Windows::Forms::Label^ tvAvailDataLbl;
	private: System::Windows::Forms::Label^ acAvailDataLbl;
	private: System::Windows::Forms::Label^ noteLbl;
	private: System::Windows::Forms::NumericUpDown^ durationNum;
	private: System::Windows::Forms::TextBox^ datePkr;
	private: System::Windows::Forms::TextBox^ timePkr;




	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReserveInfoForm::typeid));
			this->reserveFormLbl = (gcnew System::Windows::Forms::Label());
			this->dateLbl = (gcnew System::Windows::Forms::Label());
			this->timeLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->reserveBtn = (gcnew System::Windows::Forms::Button());
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->roomNameLbl = (gcnew System::Windows::Forms::Label());
			this->bldLbl = (gcnew System::Windows::Forms::Label());
			this->boardTypeLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailLbl = (gcnew System::Windows::Forms::Label());
			this->acAvailLbl = (gcnew System::Windows::Forms::Label());
			this->roomInfoLbl = (gcnew System::Windows::Forms::Label());
			this->roomCodeDataLbl = (gcnew System::Windows::Forms::Label());
			this->bldDataLbl = (gcnew System::Windows::Forms::Label());
			this->boardTypeDataLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->acAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->noteLbl = (gcnew System::Windows::Forms::Label());
			this->durationNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->datePkr = (gcnew System::Windows::Forms::TextBox());
			this->timePkr = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationNum))->BeginInit();
			this->SuspendLayout();
			// 
			// reserveFormLbl
			// 
			this->reserveFormLbl->AutoSize = true;
			this->reserveFormLbl->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveFormLbl->Location = System::Drawing::Point(48, 37);
			this->reserveFormLbl->Name = L"reserveFormLbl";
			this->reserveFormLbl->Size = System::Drawing::Size(295, 35);
			this->reserveFormLbl->TabIndex = 23;
			this->reserveFormLbl->Text = L"Reservation Information";
			// 
			// dateLbl
			// 
			this->dateLbl->AutoSize = true;
			this->dateLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLbl->Location = System::Drawing::Point(50, 414);
			this->dateLbl->Name = L"dateLbl";
			this->dateLbl->Size = System::Drawing::Size(63, 21);
			this->dateLbl->TabIndex = 24;
			this->dateLbl->Text = L"DATE:";
			// 
			// timeLbl
			// 
			this->timeLbl->AutoSize = true;
			this->timeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLbl->Location = System::Drawing::Point(50, 465);
			this->timeLbl->Name = L"timeLbl";
			this->timeLbl->Size = System::Drawing::Size(60, 21);
			this->timeLbl->TabIndex = 25;
			this->timeLbl->Text = L"TIME:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(50, 521);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 21);
			this->label1->TabIndex = 28;
			this->label1->Text = L"DURATION:";
			// 
			// reserveBtn
			// 
			this->reserveBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->reserveBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->reserveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserveBtn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->reserveBtn->Location = System::Drawing::Point(54, 580);
			this->reserveBtn->Name = L"reserveBtn";
			this->reserveBtn->Size = System::Drawing::Size(786, 36);
			this->reserveBtn->TabIndex = 30;
			this->reserveBtn->Text = L"RESERVE";
			this->reserveBtn->UseVisualStyleBackColor = false;
			this->reserveBtn->Click += gcnew System::EventHandler(this, &ReserveInfoForm::reserveBtn_Click);
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(54, 101);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(269, 269);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 31;
			this->roomImg->TabStop = false;
			this->roomImg->Click += gcnew System::EventHandler(this, &ReserveInfoForm::roomImg_Click);
			// 
			// roomNameLbl
			// 
			this->roomNameLbl->AutoSize = true;
			this->roomNameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameLbl->Location = System::Drawing::Point(359, 170);
			this->roomNameLbl->Name = L"roomNameLbl";
			this->roomNameLbl->Size = System::Drawing::Size(128, 21);
			this->roomNameLbl->TabIndex = 32;
			this->roomNameLbl->Text = L"ROOM CODE:";
			// 
			// bldLbl
			// 
			this->bldLbl->AutoSize = true;
			this->bldLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldLbl->Location = System::Drawing::Point(359, 210);
			this->bldLbl->Name = L"bldLbl";
			this->bldLbl->Size = System::Drawing::Size(218, 21);
			this->bldLbl->TabIndex = 33;
			this->bldLbl->Text = L"BUILDING / FLOOR NO:";
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(359, 253);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(130, 21);
			this->boardTypeLbl->TabIndex = 34;
			this->boardTypeLbl->Text = L"BOARD TYPE:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(359, 302);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(121, 21);
			this->tvAvailLbl->TabIndex = 35;
			this->tvAvailLbl->Text = L"TELEVISION:";
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(359, 349);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(193, 21);
			this->acAvailLbl->TabIndex = 36;
			this->acAvailLbl->Text = L"AIR CONDITIONING:";
			// 
			// roomInfoLbl
			// 
			this->roomInfoLbl->AutoSize = true;
			this->roomInfoLbl->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomInfoLbl->Location = System::Drawing::Point(358, 101);
			this->roomInfoLbl->Name = L"roomInfoLbl";
			this->roomInfoLbl->Size = System::Drawing::Size(206, 29);
			this->roomInfoLbl->TabIndex = 37;
			this->roomInfoLbl->Text = L"ROOM INFORMATION:";
			// 
			// roomCodeDataLbl
			// 
			this->roomCodeDataLbl->AutoSize = true;
			this->roomCodeDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCodeDataLbl->Location = System::Drawing::Point(673, 170);
			this->roomCodeDataLbl->Name = L"roomCodeDataLbl";
			this->roomCodeDataLbl->Size = System::Drawing::Size(97, 22);
			this->roomCodeDataLbl->TabIndex = 39;
			this->roomCodeDataLbl->Text = L"ITC - 208A";
			// 
			// bldDataLbl
			// 
			this->bldDataLbl->AutoEllipsis = true;
			this->bldDataLbl->AutoSize = true;
			this->bldDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldDataLbl->Location = System::Drawing::Point(673, 209);
			this->bldDataLbl->Name = L"bldDataLbl";
			this->bldDataLbl->Size = System::Drawing::Size(135, 22);
			this->bldDataLbl->TabIndex = 40;
			this->bldDataLbl->Text = L"ITC - 2nd Floor";
			// 
			// boardTypeDataLbl
			// 
			this->boardTypeDataLbl->AutoSize = true;
			this->boardTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeDataLbl->Location = System::Drawing::Point(673, 253);
			this->boardTypeDataLbl->Name = L"boardTypeDataLbl";
			this->boardTypeDataLbl->Size = System::Drawing::Size(104, 22);
			this->boardTypeDataLbl->TabIndex = 41;
			this->boardTypeDataLbl->Text = L"Blackboard";
			// 
			// tvAvailDataLbl
			// 
			this->tvAvailDataLbl->AutoSize = true;
			this->tvAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailDataLbl->Location = System::Drawing::Point(673, 301);
			this->tvAvailDataLbl->Name = L"tvAvailDataLbl";
			this->tvAvailDataLbl->Size = System::Drawing::Size(43, 22);
			this->tvAvailDataLbl->TabIndex = 42;
			this->tvAvailDataLbl->Text = L"N/A";
			// 
			// acAvailDataLbl
			// 
			this->acAvailDataLbl->AutoSize = true;
			this->acAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailDataLbl->Location = System::Drawing::Point(673, 348);
			this->acAvailDataLbl->Name = L"acAvailDataLbl";
			this->acAvailDataLbl->Size = System::Drawing::Size(43, 22);
			this->acAvailDataLbl->TabIndex = 43;
			this->acAvailDataLbl->Text = L"N/A";
			// 
			// noteLbl
			// 
			this->noteLbl->AutoSize = true;
			this->noteLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noteLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->noteLbl->Location = System::Drawing::Point(534, 545);
			this->noteLbl->Name = L"noteLbl";
			this->noteLbl->Size = System::Drawing::Size(288, 20);
			this->noteLbl->TabIndex = 44;
			this->noteLbl->Text = L"Enter reservation duration in HOURS";
			// 
			// durationNum
			// 
			this->durationNum->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->durationNum->Location = System::Drawing::Point(173, 511);
			this->durationNum->Name = L"durationNum";
			this->durationNum->Size = System::Drawing::Size(667, 31);
			this->durationNum->TabIndex = 45;
			this->durationNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->durationNum->ValueChanged += gcnew System::EventHandler(this, &ReserveInfoForm::durationNum_ValueChanged);
			// 
			// datePkr
			// 
			this->datePkr->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePkr->Location = System::Drawing::Point(173, 404);
			this->datePkr->Name = L"datePkr";
			this->datePkr->Size = System::Drawing::Size(667, 31);
			this->datePkr->TabIndex = 46;
			this->datePkr->Text = L"YYYY-MM-DD";
			this->datePkr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->datePkr->TextChanged += gcnew System::EventHandler(this, &ReserveInfoForm::datePkr_TextChanged);
			// 
			// timePkr
			// 
			this->timePkr->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timePkr->Location = System::Drawing::Point(173, 455);
			this->timePkr->Name = L"timePkr";
			this->timePkr->Size = System::Drawing::Size(667, 31);
			this->timePkr->TabIndex = 47;
			this->timePkr->Text = L"HH:MM:SS (Use 24-Hour format)";
			this->timePkr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->timePkr->TextChanged += gcnew System::EventHandler(this, &ReserveInfoForm::timePkr_TextChanged);
			// 
			// ReserveInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(907, 664);
			this->Controls->Add(this->timePkr);
			this->Controls->Add(this->datePkr);
			this->Controls->Add(this->durationNum);
			this->Controls->Add(this->noteLbl);
			this->Controls->Add(this->acAvailDataLbl);
			this->Controls->Add(this->tvAvailDataLbl);
			this->Controls->Add(this->boardTypeDataLbl);
			this->Controls->Add(this->bldDataLbl);
			this->Controls->Add(this->roomCodeDataLbl);
			this->Controls->Add(this->roomInfoLbl);
			this->Controls->Add(this->acAvailLbl);
			this->Controls->Add(this->tvAvailLbl);
			this->Controls->Add(this->boardTypeLbl);
			this->Controls->Add(this->bldLbl);
			this->Controls->Add(this->roomNameLbl);
			this->Controls->Add(this->roomImg);
			this->Controls->Add(this->reserveBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->timeLbl);
			this->Controls->Add(this->dateLbl);
			this->Controls->Add(this->reserveFormLbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ReserveInfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ReserveInfoForm";
			this->Load += gcnew System::EventHandler(this, &ReserveInfoForm::ReserveInfoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationNum))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private:
		User^ user = gcnew User();
		Room^ room = gcnew Room();

		String^ tempImgLoc;
		String^ tempDate;
		String^ tempTime;
		Decimal^ tempDuration;

	private: System::Void roomImg_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void ReserveInfoForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void datePkr_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void timePkr_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void durationNum_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	
	// Submit Button
	private: System::Void reserveBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

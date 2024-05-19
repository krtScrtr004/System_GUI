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

	public ref class ReserveInfoForm : public System::Windows::Forms::Form
	{
	public:
		ReserveInfoForm(User^ otherUser, Room^ otherRoom);

	protected:
		~ReserveInfoForm();

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
	private: System::Windows::Forms::PictureBox^ acAvailIcon;
	private: System::Windows::Forms::PictureBox^ tvAvailIcon;
	private: System::Windows::Forms::PictureBox^ boardTypeIcon;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::PictureBox^ dateIcon;
	private: System::Windows::Forms::PictureBox^ timeIcon;
	private: System::Windows::Forms::PictureBox^ durationIcon;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ReserveInfoForm::typeid));
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
			this->acAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->tvAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->boardTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->dateIcon = (gcnew System::Windows::Forms::PictureBox());
			this->timeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->durationIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dateLbl
			// 
			this->dateLbl->AutoSize = true;
			this->dateLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->dateLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dateLbl->Location = System::Drawing::Point(101, 43);
			this->dateLbl->Name = L"dateLbl";
			this->dateLbl->Size = System::Drawing::Size(64, 26);
			this->dateLbl->TabIndex = 24;
			this->dateLbl->Text = L"DATE:";
			// 
			// timeLbl
			// 
			this->timeLbl->AutoSize = true;
			this->timeLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->timeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->timeLbl->Location = System::Drawing::Point(101, 81);
			this->timeLbl->Name = L"timeLbl";
			this->timeLbl->Size = System::Drawing::Size(63, 26);
			this->timeLbl->TabIndex = 25;
			this->timeLbl->Text = L"TIME:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 26);
			this->label1->TabIndex = 28;
			this->label1->Text = L"DURATION:";
			// 
			// reserveBtn
			// 
			this->reserveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->reserveBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->reserveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserveBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->reserveBtn->Location = System::Drawing::Point(63, 186);
			this->reserveBtn->Name = L"reserveBtn";
			this->reserveBtn->Size = System::Drawing::Size(755, 36);
			this->reserveBtn->TabIndex = 30;
			this->reserveBtn->Text = L"RESERVE";
			this->reserveBtn->UseVisualStyleBackColor = false;
			this->reserveBtn->Click += gcnew System::EventHandler(this, &ReserveInfoForm::reserveBtn_Click);
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(54, 41);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(269, 269);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 31;
			this->roomImg->TabStop = false;
			// 
			// roomNameLbl
			// 
			this->roomNameLbl->AutoSize = true;
			this->roomNameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomNameLbl->Location = System::Drawing::Point(384, 90);
			this->roomNameLbl->Name = L"roomNameLbl";
			this->roomNameLbl->Size = System::Drawing::Size(126, 26);
			this->roomNameLbl->TabIndex = 32;
			this->roomNameLbl->Text = L"ROOM CODE:";
			// 
			// bldLbl
			// 
			this->bldLbl->AutoSize = true;
			this->bldLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bldLbl->Location = System::Drawing::Point(384, 134);
			this->bldLbl->Name = L"bldLbl";
			this->bldLbl->Size = System::Drawing::Size(104, 26);
			this->bldLbl->TabIndex = 33;
			this->bldLbl->Text = L"BUILDING:";
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(384, 176);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(130, 26);
			this->boardTypeLbl->TabIndex = 34;
			this->boardTypeLbl->Text = L"BOARD TYPE:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(384, 219);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(123, 26);
			this->tvAvailLbl->TabIndex = 35;
			this->tvAvailLbl->Text = L"TELEVISION:";
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(384, 263);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(188, 26);
			this->acAvailLbl->TabIndex = 36;
			this->acAvailLbl->Text = L"AIR CONDITIONING:";
			// 
			// roomInfoLbl
			// 
			this->roomInfoLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomInfoLbl->Location = System::Drawing::Point(342, 41);
			this->roomInfoLbl->Name = L"roomInfoLbl";
			this->roomInfoLbl->Size = System::Drawing::Size(258, 30);
			this->roomInfoLbl->TabIndex = 37;
			this->roomInfoLbl->Text = L"ROOM INFORMATION:";
			// 
			// roomCodeDataLbl
			// 
			this->roomCodeDataLbl->AutoSize = true;
			this->roomCodeDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCodeDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomCodeDataLbl->Location = System::Drawing::Point(606, 90);
			this->roomCodeDataLbl->Name = L"roomCodeDataLbl";
			this->roomCodeDataLbl->Size = System::Drawing::Size(119, 26);
			this->roomCodeDataLbl->TabIndex = 39;
			this->roomCodeDataLbl->Text = L"ROOM CODE";
			// 
			// bldDataLbl
			// 
			this->bldDataLbl->AutoEllipsis = true;
			this->bldDataLbl->AutoSize = true;
			this->bldDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bldDataLbl->Location = System::Drawing::Point(606, 134);
			this->bldDataLbl->Name = L"bldDataLbl";
			this->bldDataLbl->Size = System::Drawing::Size(97, 26);
			this->bldDataLbl->TabIndex = 40;
			this->bldDataLbl->Text = L"BUILDING";
			// 
			// boardTypeDataLbl
			// 
			this->boardTypeDataLbl->AutoSize = true;
			this->boardTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->boardTypeDataLbl->Location = System::Drawing::Point(606, 175);
			this->boardTypeDataLbl->Name = L"boardTypeDataLbl";
			this->boardTypeDataLbl->Size = System::Drawing::Size(123, 26);
			this->boardTypeDataLbl->TabIndex = 41;
			this->boardTypeDataLbl->Text = L"BOARD TYPE";
			// 
			// tvAvailDataLbl
			// 
			this->tvAvailDataLbl->AutoSize = true;
			this->tvAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tvAvailDataLbl->Location = System::Drawing::Point(606, 219);
			this->tvAvailDataLbl->Name = L"tvAvailDataLbl";
			this->tvAvailDataLbl->Size = System::Drawing::Size(157, 26);
			this->tvAvailDataLbl->TabIndex = 42;
			this->tvAvailDataLbl->Text = L"TV AVAILABILITY";
			// 
			// acAvailDataLbl
			// 
			this->acAvailDataLbl->AutoSize = true;
			this->acAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->acAvailDataLbl->Location = System::Drawing::Point(606, 263);
			this->acAvailDataLbl->Name = L"acAvailDataLbl";
			this->acAvailDataLbl->Size = System::Drawing::Size(157, 26);
			this->acAvailDataLbl->TabIndex = 43;
			this->acAvailDataLbl->Text = L"AC AVAILABILITY";
			// 
			// noteLbl
			// 
			this->noteLbl->AutoSize = true;
			this->noteLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->noteLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noteLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->noteLbl->Location = System::Drawing::Point(564, 152);
			this->noteLbl->Name = L"noteLbl";
			this->noteLbl->Size = System::Drawing::Size(254, 20);
			this->noteLbl->TabIndex = 44;
			this->noteLbl->Text = L"Enter reservation duration in HOURS";
			// 
			// durationNum
			// 
			this->durationNum->BackColor = System::Drawing::Color::White;
			this->durationNum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->durationNum->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->durationNum->Location = System::Drawing::Point(251, 118);
			this->durationNum->Name = L"durationNum";
			this->durationNum->Size = System::Drawing::Size(567, 31);
			this->durationNum->TabIndex = 45;
			this->durationNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->durationNum->ValueChanged += gcnew System::EventHandler(this, &ReserveInfoForm::durationNum_ValueChanged);
			// 
			// datePkr
			// 
			this->datePkr->BackColor = System::Drawing::Color::White;
			this->datePkr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->datePkr->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->datePkr->Location = System::Drawing::Point(251, 41);
			this->datePkr->Name = L"datePkr";
			this->datePkr->Size = System::Drawing::Size(567, 31);
			this->datePkr->TabIndex = 46;
			this->datePkr->Text = L"YYYY-MM-DD";
			this->datePkr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->datePkr->TextChanged += gcnew System::EventHandler(this, &ReserveInfoForm::datePkr_TextChanged);
			// 
			// timePkr
			// 
			this->timePkr->BackColor = System::Drawing::Color::White;
			this->timePkr->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->timePkr->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->timePkr->Location = System::Drawing::Point(251, 79);
			this->timePkr->Name = L"timePkr";
			this->timePkr->Size = System::Drawing::Size(567, 31);
			this->timePkr->TabIndex = 47;
			this->timePkr->Text = L"HH:MM:SS (Use 24-Hour format)";
			this->timePkr->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->timePkr->TextChanged += gcnew System::EventHandler(this, &ReserveInfoForm::timePkr_TextChanged);
			// 
			// acAvailIcon
			// 
			this->acAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailIcon.Image")));
			this->acAvailIcon->Location = System::Drawing::Point(349, 262);
			this->acAvailIcon->Name = L"acAvailIcon";
			this->acAvailIcon->Size = System::Drawing::Size(29, 27);
			this->acAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailIcon->TabIndex = 58;
			this->acAvailIcon->TabStop = false;
			// 
			// tvAvailIcon
			// 
			this->tvAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailIcon.Image")));
			this->tvAvailIcon->Location = System::Drawing::Point(349, 218);
			this->tvAvailIcon->Name = L"tvAvailIcon";
			this->tvAvailIcon->Size = System::Drawing::Size(29, 27);
			this->tvAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailIcon->TabIndex = 57;
			this->tvAvailIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(349, 174);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(29, 27);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 56;
			this->boardTypeIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(349, 133);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(29, 27);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 55;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(349, 89);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(29, 27);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 54;
			this->rcodeIcon->TabStop = false;
			// 
			// dateIcon
			// 
			this->dateIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->dateIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dateIcon.Image")));
			this->dateIcon->Location = System::Drawing::Point(66, 42);
			this->dateIcon->Name = L"dateIcon";
			this->dateIcon->Size = System::Drawing::Size(29, 27);
			this->dateIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->dateIcon->TabIndex = 59;
			this->dateIcon->TabStop = false;
			// 
			// timeIcon
			// 
			this->timeIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->timeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"timeIcon.Image")));
			this->timeIcon->Location = System::Drawing::Point(66, 80);
			this->timeIcon->Name = L"timeIcon";
			this->timeIcon->Size = System::Drawing::Size(29, 27);
			this->timeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->timeIcon->TabIndex = 60;
			this->timeIcon->TabStop = false;
			// 
			// durationIcon
			// 
			this->durationIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->durationIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"durationIcon.Image")));
			this->durationIcon->Location = System::Drawing::Point(66, 119);
			this->durationIcon->Name = L"durationIcon";
			this->durationIcon->Size = System::Drawing::Size(29, 27);
			this->durationIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->durationIcon->TabIndex = 61;
			this->durationIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->durationIcon);
			this->panel1->Controls->Add(this->durationNum);
			this->panel1->Controls->Add(this->timeIcon);
			this->panel1->Controls->Add(this->reserveBtn);
			this->panel1->Controls->Add(this->dateIcon);
			this->panel1->Controls->Add(this->noteLbl);
			this->panel1->Controls->Add(this->datePkr);
			this->panel1->Controls->Add(this->timePkr);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dateLbl);
			this->panel1->Controls->Add(this->timeLbl);
			this->panel1->Location = System::Drawing::Point(-9, 346);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 255);
			this->panel1->TabIndex = 62;
			// 
			// ReserveInfoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->ClientSize = System::Drawing::Size(868, 593);
			this->Controls->Add(this->acAvailIcon);
			this->Controls->Add(this->tvAvailIcon);
			this->Controls->Add(this->boardTypeIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeIcon);
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
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ReserveInfoForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &ReserveInfoForm::ReserveInfoForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE
	private: MySqlConnection^ conn;
	private: User^ user = gcnew User();
	private: Room^ room = gcnew Room();
	private: String^ tempImgLoc;
	private: String^ tempDate;
	private: String^ tempTime;
	private: Decimal^ tempDuration;

	/*---------------------------------------------------------------------------EVENT HANDLER FUNCTIONS----------------------------------------------------------------------*/

	private: System::Void ReserveInfoForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void datePkr_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void timePkr_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void durationNum_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void reserveBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	private: void displayData(void);

	private: bool checkDateFormat(void);

	private: bool checkTimeFormat(void);

	private: bool checkDuration(void);

	private: String^ parseTime(void);

	private: bool checkIfReserved(void);

	private: void insertReservation(String^ outTime);

	/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	public ref class RoomInfo : public System::Windows::Forms::Form
	{
	public:
		RoomInfo(Room^ other);

	protected:
		~RoomInfo();

	private: System::Windows::Forms::PictureBox^ roomImg;
	private: System::Windows::Forms::Label^ roomNameLbl;
	private: System::Windows::Forms::Label^ bldLbl;
	private: System::Windows::Forms::Label^ boardTypeLbl;
	private: System::Windows::Forms::Label^ tvAvailLbl;
	private: System::Windows::Forms::Label^ acAvailLbl;
	private: System::Windows::Forms::Button^ editInfoBtn;
	private: System::Windows::Forms::Label^ roomInfoLbl;
	private: System::Windows::Forms::TextBox^ rcodeTxtBox;
	private: System::Windows::Forms::TextBox^ buildingTxtBox;
	private: System::Windows::Forms::Label^ roomTypeLbll;
	private: System::Windows::Forms::ComboBox^ roomTypeCBox;
	private: System::Windows::Forms::ComboBox^ boardTypeCBox;
	private: System::Windows::Forms::ComboBox^ tvCBox;
	private: System::Windows::Forms::ComboBox^ acCBox;
	private: System::Windows::Forms::Button^ changeImgBtn;
	private: System::Windows::Forms::Label^ statusLbl;
	private: System::Windows::Forms::ComboBox^ statusCBox;
	private: System::Windows::Forms::PictureBox^ acAvailabilityIcon;
	private: System::Windows::Forms::PictureBox^ tvAvailabilityIcon;
	private: System::Windows::Forms::PictureBox^ boardTypeIcon;
	private: System::Windows::Forms::PictureBox^ roomTypeIcon;
	private: System::Windows::Forms::PictureBox^ statusIcon;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeImg;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::LinkLabel^ deleteLink;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomInfo::typeid));
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->roomNameLbl = (gcnew System::Windows::Forms::Label());
			this->bldLbl = (gcnew System::Windows::Forms::Label());
			this->boardTypeLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailLbl = (gcnew System::Windows::Forms::Label());
			this->acAvailLbl = (gcnew System::Windows::Forms::Label());
			this->editInfoBtn = (gcnew System::Windows::Forms::Button());
			this->roomInfoLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->buildingTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->roomTypeLbll = (gcnew System::Windows::Forms::Label());
			this->roomTypeCBox = (gcnew System::Windows::Forms::ComboBox());
			this->boardTypeCBox = (gcnew System::Windows::Forms::ComboBox());
			this->tvCBox = (gcnew System::Windows::Forms::ComboBox());
			this->acCBox = (gcnew System::Windows::Forms::ComboBox());
			this->changeImgBtn = (gcnew System::Windows::Forms::Button());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			this->statusCBox = (gcnew System::Windows::Forms::ComboBox());
			this->acAvailabilityIcon = (gcnew System::Windows::Forms::PictureBox());
			this->tvAvailabilityIcon = (gcnew System::Windows::Forms::PictureBox());
			this->boardTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->roomTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->statusIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeImg = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->deleteLink = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailabilityIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailabilityIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeImg))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(45, 89);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(296, 293);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 45;
			this->roomImg->TabStop = false;
			// 
			// roomNameLbl
			// 
			this->roomNameLbl->AutoSize = true;
			this->roomNameLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->roomNameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomNameLbl->Location = System::Drawing::Point(450, 91);
			this->roomNameLbl->Name = L"roomNameLbl";
			this->roomNameLbl->Size = System::Drawing::Size(126, 26);
			this->roomNameLbl->TabIndex = 46;
			this->roomNameLbl->Text = L"ROOM CODE:";
			// 
			// bldLbl
			// 
			this->bldLbl->AutoSize = true;
			this->bldLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bldLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bldLbl->Location = System::Drawing::Point(450, 132);
			this->bldLbl->Name = L"bldLbl";
			this->bldLbl->Size = System::Drawing::Size(104, 26);
			this->bldLbl->TabIndex = 47;
			this->bldLbl->Text = L"BUILDING:";
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(450, 271);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(130, 26);
			this->boardTypeLbl->TabIndex = 48;
			this->boardTypeLbl->Text = L"BOARD TYPE:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(450, 316);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(123, 26);
			this->tvAvailLbl->TabIndex = 49;
			this->tvAvailLbl->Text = L"TELEVISION:";
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(450, 363);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(188, 26);
			this->acAvailLbl->TabIndex = 50;
			this->acAvailLbl->Text = L"AIR CONDITIONING:";
			// 
			// editInfoBtn
			// 
			this->editInfoBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->editInfoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editInfoBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editInfoBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->editInfoBtn->Location = System::Drawing::Point(415, 414);
			this->editInfoBtn->Name = L"editInfoBtn";
			this->editInfoBtn->Size = System::Drawing::Size(472, 39);
			this->editInfoBtn->TabIndex = 57;
			this->editInfoBtn->Text = L"EDIT INFO";
			this->editInfoBtn->UseVisualStyleBackColor = false;
			this->editInfoBtn->Click += gcnew System::EventHandler(this, &RoomInfo::editInfoBtn_Click);
			// 
			// roomInfoLbl
			// 
			this->roomInfoLbl->AutoSize = true;
			this->roomInfoLbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->roomInfoLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomInfoLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomInfoLbl->Location = System::Drawing::Point(40, 37);
			this->roomInfoLbl->Name = L"roomInfoLbl";
			this->roomInfoLbl->Size = System::Drawing::Size(251, 29);
			this->roomInfoLbl->TabIndex = 51;
			this->roomInfoLbl->Text = L"ROOM INFORMATION:";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->rcodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(692, 89);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->Size = System::Drawing::Size(195, 31);
			this->rcodeTxtBox->TabIndex = 58;
			this->rcodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->rcodeTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::rcodeTxtBox_TextChanged);
			// 
			// buildingTxtBox
			// 
			this->buildingTxtBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->buildingTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->buildingTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buildingTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buildingTxtBox->Location = System::Drawing::Point(692, 130);
			this->buildingTxtBox->Name = L"buildingTxtBox";
			this->buildingTxtBox->Size = System::Drawing::Size(195, 31);
			this->buildingTxtBox->TabIndex = 59;
			this->buildingTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->buildingTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::buildingTxtBox_TextChanged);
			// 
			// roomTypeLbll
			// 
			this->roomTypeLbll->AutoSize = true;
			this->roomTypeLbll->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->roomTypeLbll->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLbll->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomTypeLbll->Location = System::Drawing::Point(450, 226);
			this->roomTypeLbll->Name = L"roomTypeLbll";
			this->roomTypeLbll->Size = System::Drawing::Size(123, 26);
			this->roomTypeLbll->TabIndex = 63;
			this->roomTypeLbll->Text = L"ROOM TYPE:";
			// 
			// roomTypeCBox
			// 
			this->roomTypeCBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->roomTypeCBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->roomTypeCBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeCBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomTypeCBox->FormattingEnabled = true;
			this->roomTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ckassroom", L"Laboratory" });
			this->roomTypeCBox->Location = System::Drawing::Point(692, 223);
			this->roomTypeCBox->Name = L"roomTypeCBox";
			this->roomTypeCBox->Size = System::Drawing::Size(195, 34);
			this->roomTypeCBox->TabIndex = 65;
			this->roomTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::roomTypeCBox_SelectedIndexChanged);
			// 
			// boardTypeCBox
			// 
			this->boardTypeCBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->boardTypeCBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->boardTypeCBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeCBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->boardTypeCBox->FormattingEnabled = true;
			this->boardTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Whiteboard", L"Blackboard" });
			this->boardTypeCBox->Location = System::Drawing::Point(692, 268);
			this->boardTypeCBox->Name = L"boardTypeCBox";
			this->boardTypeCBox->Size = System::Drawing::Size(195, 34);
			this->boardTypeCBox->TabIndex = 66;
			this->boardTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::boardTypeCBox_SelectedIndexChanged);
			// 
			// tvCBox
			// 
			this->tvCBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tvCBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->tvCBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvCBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tvCBox->FormattingEnabled = true;
			this->tvCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->tvCBox->Location = System::Drawing::Point(692, 313);
			this->tvCBox->Name = L"tvCBox";
			this->tvCBox->Size = System::Drawing::Size(195, 34);
			this->tvCBox->TabIndex = 67;
			this->tvCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::tvCBox_SelectedIndexChanged);
			// 
			// acCBox
			// 
			this->acCBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->acCBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->acCBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acCBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->acCBox->FormattingEnabled = true;
			this->acCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available\t", L"Not Available" });
			this->acCBox->Location = System::Drawing::Point(692, 360);
			this->acCBox->Name = L"acCBox";
			this->acCBox->Size = System::Drawing::Size(195, 34);
			this->acCBox->TabIndex = 68;
			this->acCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::acCBox_SelectedIndexChanged);
			// 
			// changeImgBtn
			// 
			this->changeImgBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->changeImgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->changeImgBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changeImgBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->changeImgBtn->Location = System::Drawing::Point(45, 414);
			this->changeImgBtn->Name = L"changeImgBtn";
			this->changeImgBtn->Size = System::Drawing::Size(296, 39);
			this->changeImgBtn->TabIndex = 69;
			this->changeImgBtn->Text = L"CHANGE IMAGE";
			this->changeImgBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changeImgBtn->UseVisualStyleBackColor = false;
			this->changeImgBtn->Click += gcnew System::EventHandler(this, &RoomInfo::changeImgBtn_Click);
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(450, 181);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(84, 26);
			this->statusLbl->TabIndex = 70;
			this->statusLbl->Text = L"STATUS:";
			// 
			// statusCBox
			// 
			this->statusCBox->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->statusCBox->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->statusCBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusCBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->statusCBox->FormattingEnabled = true;
			this->statusCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->statusCBox->Location = System::Drawing::Point(692, 178);
			this->statusCBox->Name = L"statusCBox";
			this->statusCBox->Size = System::Drawing::Size(195, 34);
			this->statusCBox->TabIndex = 71;
			this->statusCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::statusCBox_SelectedIndexChanged);
			// 
			// acAvailabilityIcon
			// 
			this->acAvailabilityIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->acAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailabilityIcon.Image")));
			this->acAvailabilityIcon->Location = System::Drawing::Point(415, 362);
			this->acAvailabilityIcon->Name = L"acAvailabilityIcon";
			this->acAvailabilityIcon->Size = System::Drawing::Size(29, 27);
			this->acAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailabilityIcon->TabIndex = 79;
			this->acAvailabilityIcon->TabStop = false;
			// 
			// tvAvailabilityIcon
			// 
			this->tvAvailabilityIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->tvAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailabilityIcon.Image")));
			this->tvAvailabilityIcon->Location = System::Drawing::Point(415, 315);
			this->tvAvailabilityIcon->Name = L"tvAvailabilityIcon";
			this->tvAvailabilityIcon->Size = System::Drawing::Size(29, 27);
			this->tvAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailabilityIcon->TabIndex = 78;
			this->tvAvailabilityIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(415, 270);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(29, 27);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 77;
			this->boardTypeIcon->TabStop = false;
			// 
			// roomTypeIcon
			// 
			this->roomTypeIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->roomTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomTypeIcon.Image")));
			this->roomTypeIcon->Location = System::Drawing::Point(415, 225);
			this->roomTypeIcon->Name = L"roomTypeIcon";
			this->roomTypeIcon->Size = System::Drawing::Size(29, 27);
			this->roomTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomTypeIcon->TabIndex = 76;
			this->roomTypeIcon->TabStop = false;
			// 
			// statusIcon
			// 
			this->statusIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->statusIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statusIcon.Image")));
			this->statusIcon->Location = System::Drawing::Point(415, 180);
			this->statusIcon->Name = L"statusIcon";
			this->statusIcon->Size = System::Drawing::Size(29, 27);
			this->statusIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->statusIcon->TabIndex = 75;
			this->statusIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(415, 130);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(29, 27);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 74;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeImg
			// 
			this->rcodeImg->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->rcodeImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeImg.Image")));
			this->rcodeImg->Location = System::Drawing::Point(415, 90);
			this->rcodeImg->Name = L"rcodeImg";
			this->rcodeImg->Size = System::Drawing::Size(29, 27);
			this->rcodeImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeImg->TabIndex = 73;
			this->rcodeImg->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->roomImg);
			this->panel1->Controls->Add(this->changeImgBtn);
			this->panel1->Controls->Add(this->roomInfoLbl);
			this->panel1->Location = System::Drawing::Point(-5, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(378, 494);
			this->panel1->TabIndex = 80;
			// 
			// deleteLink
			// 
			this->deleteLink->ActiveLinkColor = System::Drawing::Color::Red;
			this->deleteLink->AutoSize = true;
			this->deleteLink->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteLink->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->deleteLink->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->deleteLink->Location = System::Drawing::Point(751, 42);
			this->deleteLink->Name = L"deleteLink";
			this->deleteLink->Size = System::Drawing::Size(136, 23);
			this->deleteLink->TabIndex = 70;
			this->deleteLink->TabStop = true;
			this->deleteLink->Text = L"Delete this room";
			this->deleteLink->VisitedLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->deleteLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RoomInfo::deleteLink_LinkClicked);
			// 
			// RoomInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(927, 488);
			this->Controls->Add(this->deleteLink);
			this->Controls->Add(this->acAvailabilityIcon);
			this->Controls->Add(this->tvAvailabilityIcon);
			this->Controls->Add(this->boardTypeIcon);
			this->Controls->Add(this->roomTypeIcon);
			this->Controls->Add(this->statusIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeImg);
			this->Controls->Add(this->statusCBox);
			this->Controls->Add(this->statusLbl);
			this->Controls->Add(this->acCBox);
			this->Controls->Add(this->tvCBox);
			this->Controls->Add(this->boardTypeCBox);
			this->Controls->Add(this->roomTypeCBox);
			this->Controls->Add(this->roomTypeLbll);
			this->Controls->Add(this->buildingTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->editInfoBtn);
			this->Controls->Add(this->acAvailLbl);
			this->Controls->Add(this->tvAvailLbl);
			this->Controls->Add(this->boardTypeLbl);
			this->Controls->Add(this->bldLbl);
			this->Controls->Add(this->roomNameLbl);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RoomInfo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &RoomInfo::RoomInfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailabilityIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailabilityIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeImg))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: Room^ room = gcnew Room();
	private: String^ tempImgLoc;
	private: String^ tempRoomCode;
	private: String^ tempBuilding;
	private: String^ tempStatus; 
	private: String^ tempRoomType;
	private: String^ tempBoardType;
	private: String^ tempTv;
	private: String^ tempAc;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void RoomInfo_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void changeImgBtn_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void rcodeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void buildingTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void tvCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void acCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void editInfoBtn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void deleteLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/
	
	private: void displayData(void);

	private: bool doesRoomExists(void);

	private: void editRoomInfo(void);

	private: void deleteRoom(void);

	private: void deleteAssociatedReservation(void);

	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

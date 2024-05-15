#pragma once

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::IO;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class AddRoom : public System::Windows::Forms::Form
	{
	public:
		AddRoom(void);

	protected:
		~AddRoom();
		
	private: System::Windows::Forms::Label^ roomTypeLbl;
	protected:
	private: System::Windows::Forms::Button^ imgSlctBtn;
	private: System::Windows::Forms::Label^ imgSlctLbl;

	private: System::Windows::Forms::Button^ confirmBtn;
	private: System::Windows::Forms::TextBox^ bldgTxtBox;


	private: System::Windows::Forms::TextBox^ rcodeTxtBox;
	private: System::Windows::Forms::Label^ acAvailLbl;
	private: System::Windows::Forms::Label^ tvAvailLbl;
	private: System::Windows::Forms::Label^ statusLbl;
	private: System::Windows::Forms::Label^ buildingLbl;
	private: System::Windows::Forms::Label^ rcodeLbl;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ComboBox^ statusCBox;
	private: System::Windows::Forms::ComboBox^ roomTypeCBox;
	private: System::Windows::Forms::ComboBox^ tvAvailCBox;
	private: System::Windows::Forms::ComboBox^ acAvailCBox;
	private: System::Windows::Forms::ComboBox^ boardTypeCBox;
	private: System::Windows::Forms::Label^ boardTypeLbl;
	private: System::Windows::Forms::PictureBox^ imgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeImg;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ statusIcon;
	private: System::Windows::Forms::PictureBox^ roomTypeIcon;
	private: System::Windows::Forms::PictureBox^ boardTypeIcon;
	private: System::Windows::Forms::PictureBox^ tvAvailabilityIcon;
	private: System::Windows::Forms::PictureBox^ acAvailabilityIcon;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ signupLbl;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddRoom::typeid));
			this->roomTypeLbl = (gcnew System::Windows::Forms::Label());
			this->imgSlctBtn = (gcnew System::Windows::Forms::Button());
			this->imgSlctLbl = (gcnew System::Windows::Forms::Label());
			this->confirmBtn = (gcnew System::Windows::Forms::Button());
			this->bldgTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->acAvailLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailLbl = (gcnew System::Windows::Forms::Label());
			this->statusLbl = (gcnew System::Windows::Forms::Label());
			this->buildingLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeLbl = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->statusCBox = (gcnew System::Windows::Forms::ComboBox());
			this->roomTypeCBox = (gcnew System::Windows::Forms::ComboBox());
			this->tvAvailCBox = (gcnew System::Windows::Forms::ComboBox());
			this->acAvailCBox = (gcnew System::Windows::Forms::ComboBox());
			this->boardTypeCBox = (gcnew System::Windows::Forms::ComboBox());
			this->boardTypeLbl = (gcnew System::Windows::Forms::Label());
			this->imgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeImg = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->statusIcon = (gcnew System::Windows::Forms::PictureBox());
			this->roomTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->boardTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->tvAvailabilityIcon = (gcnew System::Windows::Forms::PictureBox());
			this->acAvailabilityIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->signupLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailabilityIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailabilityIcon))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// roomTypeLbl
			// 
			this->roomTypeLbl->AutoSize = true;
			this->roomTypeLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->roomTypeLbl->Location = System::Drawing::Point(70, 321);
			this->roomTypeLbl->Name = L"roomTypeLbl";
			this->roomTypeLbl->Size = System::Drawing::Size(121, 27);
			this->roomTypeLbl->TabIndex = 41;
			this->roomTypeLbl->Text = L"Room Type:";
			// 
			// imgSlctBtn
			// 
			this->imgSlctBtn->BackColor = System::Drawing::Color::White;
			this->imgSlctBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgSlctBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->imgSlctBtn->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctBtn->Location = System::Drawing::Point(238, 128);
			this->imgSlctBtn->Name = L"imgSlctBtn";
			this->imgSlctBtn->Size = System::Drawing::Size(265, 28);
			this->imgSlctBtn->TabIndex = 40;
			this->imgSlctBtn->Text = L"Select";
			this->imgSlctBtn->UseVisualStyleBackColor = false;
			this->imgSlctBtn->Click += gcnew System::EventHandler(this, &AddRoom::imgSlctBtn_Click);
			// 
			// imgSlctLbl
			// 
			this->imgSlctLbl->AutoSize = true;
			this->imgSlctLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->imgSlctLbl->Location = System::Drawing::Point(70, 134);
			this->imgSlctLbl->Name = L"imgSlctLbl";
			this->imgSlctLbl->Size = System::Drawing::Size(131, 27);
			this->imgSlctLbl->TabIndex = 39;
			this->imgSlctLbl->Text = L"Room Image:";
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->confirmBtn->Location = System::Drawing::Point(37, 524);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(466, 40);
			this->confirmBtn->TabIndex = 37;
			this->confirmBtn->Text = L"CONFIRM";
			this->confirmBtn->UseVisualStyleBackColor = false;
			this->confirmBtn->Click += gcnew System::EventHandler(this, &AddRoom::confirmBtn_Click);
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->BackColor = System::Drawing::Color::White;
			this->bldgTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bldgTxtBox->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgTxtBox->Location = System::Drawing::Point(238, 224);
			this->bldgTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bldgTxtBox->Multiline = true;
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->Size = System::Drawing::Size(265, 24);
			this->bldgTxtBox->TabIndex = 33;
			this->bldgTxtBox->TextChanged += gcnew System::EventHandler(this, &AddRoom::bldgTxtBox_TextChanged);
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::Color::White;
			this->rcodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(238, 178);
			this->rcodeTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rcodeTxtBox->Multiline = true;
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->Size = System::Drawing::Size(265, 24);
			this->rcodeTxtBox->TabIndex = 32;
			this->rcodeTxtBox->TextChanged += gcnew System::EventHandler(this, &AddRoom::rcodeTxtBox_TextChanged);
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(70, 472);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(162, 27);
			this->acAvailLbl->TabIndex = 31;
			this->acAvailLbl->Text = L"Airconditioning:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(70, 424);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(111, 27);
			this->tvAvailLbl->TabIndex = 30;
			this->tvAvailLbl->Text = L"Television:";
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(70, 270);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(79, 27);
			this->statusLbl->TabIndex = 29;
			this->statusLbl->Text = L"Status:";
			// 
			// buildingLbl
			// 
			this->buildingLbl->AutoSize = true;
			this->buildingLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buildingLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buildingLbl->Location = System::Drawing::Point(70, 224);
			this->buildingLbl->Name = L"buildingLbl";
			this->buildingLbl->Size = System::Drawing::Size(91, 27);
			this->buildingLbl->TabIndex = 28;
			this->buildingLbl->Text = L"Building:";
			// 
			// rcodeLbl
			// 
			this->rcodeLbl->AutoSize = true;
			this->rcodeLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->rcodeLbl->Location = System::Drawing::Point(70, 178);
			this->rcodeLbl->Name = L"rcodeLbl";
			this->rcodeLbl->Size = System::Drawing::Size(128, 27);
			this->rcodeLbl->TabIndex = 27;
			this->rcodeLbl->Text = L"Room Code:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// statusCBox
			// 
			this->statusCBox->BackColor = System::Drawing::Color::White;
			this->statusCBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->statusCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusCBox->FormattingEnabled = true;
			this->statusCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->statusCBox->Location = System::Drawing::Point(238, 270);
			this->statusCBox->Name = L"statusCBox";
			this->statusCBox->Size = System::Drawing::Size(265, 29);
			this->statusCBox->TabIndex = 43;
			this->statusCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::statusCBox_SelectedIndexChanged);
			// 
			// roomTypeCBox
			// 
			this->roomTypeCBox->BackColor = System::Drawing::Color::White;
			this->roomTypeCBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->roomTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeCBox->FormattingEnabled = true;
			this->roomTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Classroom\t", L"Laboratory" });
			this->roomTypeCBox->Location = System::Drawing::Point(238, 321);
			this->roomTypeCBox->Name = L"roomTypeCBox";
			this->roomTypeCBox->Size = System::Drawing::Size(265, 29);
			this->roomTypeCBox->TabIndex = 44;
			this->roomTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::roomTypeCBox_SelectedIndexChanged);
			// 
			// tvAvailCBox
			// 
			this->tvAvailCBox->BackColor = System::Drawing::Color::White;
			this->tvAvailCBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tvAvailCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailCBox->FormattingEnabled = true;
			this->tvAvailCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->tvAvailCBox->Location = System::Drawing::Point(238, 424);
			this->tvAvailCBox->Name = L"tvAvailCBox";
			this->tvAvailCBox->Size = System::Drawing::Size(265, 29);
			this->tvAvailCBox->TabIndex = 45;
			this->tvAvailCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::tvAvailCBox_SelectedIndexChanged);
			// 
			// acAvailCBox
			// 
			this->acAvailCBox->BackColor = System::Drawing::Color::White;
			this->acAvailCBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->acAvailCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailCBox->FormattingEnabled = true;
			this->acAvailCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->acAvailCBox->Location = System::Drawing::Point(238, 472);
			this->acAvailCBox->Name = L"acAvailCBox";
			this->acAvailCBox->Size = System::Drawing::Size(265, 29);
			this->acAvailCBox->TabIndex = 46;
			this->acAvailCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::acAvailCBox_SelectedIndexChanged);
			// 
			// boardTypeCBox
			// 
			this->boardTypeCBox->BackColor = System::Drawing::Color::White;
			this->boardTypeCBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->boardTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeCBox->FormattingEnabled = true;
			this->boardTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Whiteboard", L"BlackbBoard" });
			this->boardTypeCBox->Location = System::Drawing::Point(238, 371);
			this->boardTypeCBox->Name = L"boardTypeCBox";
			this->boardTypeCBox->Size = System::Drawing::Size(265, 29);
			this->boardTypeCBox->TabIndex = 48;
			this->boardTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::boardTypeCBox_SelectedIndexChanged);
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(70, 371);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(123, 27);
			this->boardTypeLbl->TabIndex = 47;
			this->boardTypeLbl->Text = L"Board Type:";
			// 
			// imgIcon
			// 
			this->imgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imgIcon.Image")));
			this->imgIcon->Location = System::Drawing::Point(37, 134);
			this->imgIcon->Name = L"imgIcon";
			this->imgIcon->Size = System::Drawing::Size(31, 22);
			this->imgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imgIcon->TabIndex = 49;
			this->imgIcon->TabStop = false;
			// 
			// rcodeImg
			// 
			this->rcodeImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeImg.Image")));
			this->rcodeImg->Location = System::Drawing::Point(37, 178);
			this->rcodeImg->Name = L"rcodeImg";
			this->rcodeImg->Size = System::Drawing::Size(31, 22);
			this->rcodeImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeImg->TabIndex = 50;
			this->rcodeImg->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(35, 224);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(31, 22);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 51;
			this->bldgIcon->TabStop = false;
			// 
			// statusIcon
			// 
			this->statusIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statusIcon.Image")));
			this->statusIcon->Location = System::Drawing::Point(37, 270);
			this->statusIcon->Name = L"statusIcon";
			this->statusIcon->Size = System::Drawing::Size(31, 22);
			this->statusIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->statusIcon->TabIndex = 52;
			this->statusIcon->TabStop = false;
			// 
			// roomTypeIcon
			// 
			this->roomTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomTypeIcon.Image")));
			this->roomTypeIcon->Location = System::Drawing::Point(37, 321);
			this->roomTypeIcon->Name = L"roomTypeIcon";
			this->roomTypeIcon->Size = System::Drawing::Size(31, 22);
			this->roomTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomTypeIcon->TabIndex = 53;
			this->roomTypeIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(37, 371);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(31, 22);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 54;
			this->boardTypeIcon->TabStop = false;
			// 
			// tvAvailabilityIcon
			// 
			this->tvAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailabilityIcon.Image")));
			this->tvAvailabilityIcon->Location = System::Drawing::Point(37, 424);
			this->tvAvailabilityIcon->Name = L"tvAvailabilityIcon";
			this->tvAvailabilityIcon->Size = System::Drawing::Size(31, 22);
			this->tvAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailabilityIcon->TabIndex = 55;
			this->tvAvailabilityIcon->TabStop = false;
			// 
			// acAvailabilityIcon
			// 
			this->acAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailabilityIcon.Image")));
			this->acAvailabilityIcon->Location = System::Drawing::Point(37, 472);
			this->acAvailabilityIcon->Name = L"acAvailabilityIcon";
			this->acAvailabilityIcon->Size = System::Drawing::Size(31, 22);
			this->acAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailabilityIcon->TabIndex = 56;
			this->acAvailabilityIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->signupLbl);
			this->panel1->Location = System::Drawing::Point(-3, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 100);
			this->panel1->TabIndex = 57;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(125, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(59, 66);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// signupLbl
			// 
			this->signupLbl->AutoSize = true;
			this->signupLbl->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signupLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->signupLbl->Location = System::Drawing::Point(190, 34);
			this->signupLbl->Name = L"signupLbl";
			this->signupLbl->Size = System::Drawing::Size(218, 42);
			this->signupLbl->TabIndex = 19;
			this->signupLbl->Text = L"ADD A ROOM";
			// 
			// AddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(545, 596);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->acAvailabilityIcon);
			this->Controls->Add(this->tvAvailabilityIcon);
			this->Controls->Add(this->boardTypeIcon);
			this->Controls->Add(this->roomTypeIcon);
			this->Controls->Add(this->statusIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeImg);
			this->Controls->Add(this->imgIcon);
			this->Controls->Add(this->boardTypeCBox);
			this->Controls->Add(this->boardTypeLbl);
			this->Controls->Add(this->acAvailCBox);
			this->Controls->Add(this->tvAvailCBox);
			this->Controls->Add(this->roomTypeCBox);
			this->Controls->Add(this->statusCBox);
			this->Controls->Add(this->roomTypeLbl);
			this->Controls->Add(this->imgSlctBtn);
			this->Controls->Add(this->imgSlctLbl);
			this->Controls->Add(this->confirmBtn);
			this->Controls->Add(this->bldgTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->acAvailLbl);
			this->Controls->Add(this->tvAvailLbl);
			this->Controls->Add(this->statusLbl);
			this->Controls->Add(this->buildingLbl);
			this->Controls->Add(this->rcodeLbl);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"AddRoom";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailabilityIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailabilityIcon))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: String^ tempImgLoc;
	private: String^ tempRoomCode;
	private: String^ tempBuilding;
	private: String^ tempStatus;
	private: String^ tempBoardType;
	private: String^ tempRoomType;
	private: String^ tempTv;
	private: String^ tempAc;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS----------------------------------------------------------------------*/

	private: System::Void imgSlctBtn_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void rcodeTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void bldgTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void statusCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void roomTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void boardTypeCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void tvAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void acAvailCBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void confirmBtn_Click(System::Object^ sender, System::EventArgs^ e);
	
	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	private: void insertRoom(void);

	/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

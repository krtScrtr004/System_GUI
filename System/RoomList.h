#pragma once
#include "Room.h"
namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class RoomList : public System::Windows::Forms::Form
	{
	public:
		RoomList(User^ other);

	protected:
		~RoomList();
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ opt1MStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt2MStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::PictureBox^ roomImg;
	private: System::Windows::Forms::Label^ roomCodeDataLbl;
	private: System::Windows::Forms::Label^ bldDataLbl;
	private: System::Windows::Forms::Label^ boardTypeDataLbl;
	private: System::Windows::Forms::Label^ tvAvailDataLbl;
	private: System::Windows::Forms::Label^ acAvailDataLbl;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ boardTypeIcon;
	private: System::Windows::Forms::PictureBox^ tvAvailIcon;
	private: System::Windows::Forms::PictureBox^ acAvailIcon;
	private: System::Windows::Forms::Button^ reserveBtn;
	private: System::Windows::Forms::RadioButton^ clRBtn;
	private: System::Windows::Forms::RadioButton^ labRBtn;
	private: System::Windows::Forms::Button^ addRoomBtn;
	private: System::Windows::Forms::DataGridView^ roomsTbl;
	private: System::Windows::Forms::Panel^ panel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RoomList::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt1MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt2MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->roomCodeDataLbl = (gcnew System::Windows::Forms::Label());
			this->bldDataLbl = (gcnew System::Windows::Forms::Label());
			this->boardTypeDataLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->acAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->boardTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->tvAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->acAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->reserveBtn = (gcnew System::Windows::Forms::Button());
			this->clRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->labRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->addRoomBtn = (gcnew System::Windows::Forms::Button());
			this->roomsTbl = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// profileMStrip
			// 
			this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->profileMStrip->Name = L"profileMStrip";
			this->profileMStrip->Size = System::Drawing::Size(73, 27);
			this->profileMStrip->Text = L"Profile";
			this->profileMStrip->Click += gcnew System::EventHandler(this, &RoomList::profileMStrip_Click);
			// 
			// opt1MStrip
			// 
			this->opt1MStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt1MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt1MStrip->Name = L"opt1MStrip";
			this->opt1MStrip->Size = System::Drawing::Size(87, 27);
			this->opt1MStrip->Text = L"Reserve";
			this->opt1MStrip->Click += gcnew System::EventHandler(this, &RoomList::opt1MStrip_Click);
			// 
			// opt2MStrip
			// 
			this->opt2MStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt2MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt2MStrip->Name = L"opt2MStrip";
			this->opt2MStrip->Size = System::Drawing::Size(80, 27);
			this->opt2MStrip->Text = L"Receipt";
			this->opt2MStrip->Click += gcnew System::EventHandler(this, &RoomList::opt2MStrip_Click);
			// 
			// exitMStrip
			// 
			this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exitMStrip->Name = L"exitMStrip";
			this->exitMStrip->Size = System::Drawing::Size(54, 27);
			this->exitMStrip->Text = L"Exit";
			this->exitMStrip->Click += gcnew System::EventHandler(this, &RoomList::exitMStrip_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->profileMStrip, this->opt1MStrip,
					this->opt2MStrip, this->exitMStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(897, 31);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(46, 42);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(270, 270);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 9;
			this->roomImg->TabStop = false;
			// 
			// roomCodeDataLbl
			// 
			this->roomCodeDataLbl->AutoSize = true;
			this->roomCodeDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCodeDataLbl->Location = System::Drawing::Point(81, 328);
			this->roomCodeDataLbl->Name = L"roomCodeDataLbl";
			this->roomCodeDataLbl->Size = System::Drawing::Size(113, 24);
			this->roomCodeDataLbl->TabIndex = 44;
			this->roomCodeDataLbl->Text = L"ROOM CODE";
			// 
			// bldDataLbl
			// 
			this->bldDataLbl->AutoEllipsis = true;
			this->bldDataLbl->AutoSize = true;
			this->bldDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldDataLbl->Location = System::Drawing::Point(81, 360);
			this->bldDataLbl->Name = L"bldDataLbl";
			this->bldDataLbl->Size = System::Drawing::Size(90, 24);
			this->bldDataLbl->TabIndex = 45;
			this->bldDataLbl->Text = L"BUILDING";
			// 
			// boardTypeDataLbl
			// 
			this->boardTypeDataLbl->AutoSize = true;
			this->boardTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeDataLbl->Location = System::Drawing::Point(81, 392);
			this->boardTypeDataLbl->Name = L"boardTypeDataLbl";
			this->boardTypeDataLbl->Size = System::Drawing::Size(117, 24);
			this->boardTypeDataLbl->TabIndex = 46;
			this->boardTypeDataLbl->Text = L"BOARD TYPE";
			// 
			// tvAvailDataLbl
			// 
			this->tvAvailDataLbl->AutoSize = true;
			this->tvAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailDataLbl->Location = System::Drawing::Point(81, 425);
			this->tvAvailDataLbl->Name = L"tvAvailDataLbl";
			this->tvAvailDataLbl->Size = System::Drawing::Size(145, 24);
			this->tvAvailDataLbl->TabIndex = 47;
			this->tvAvailDataLbl->Text = L"TV AVAILABILITY";
			// 
			// acAvailDataLbl
			// 
			this->acAvailDataLbl->AutoSize = true;
			this->acAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailDataLbl->Location = System::Drawing::Point(81, 459);
			this->acAvailDataLbl->Name = L"acAvailDataLbl";
			this->acAvailDataLbl->Size = System::Drawing::Size(145, 24);
			this->acAvailDataLbl->TabIndex = 48;
			this->acAvailDataLbl->Text = L"AC AVAILABILITY";
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(46, 325);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(29, 27);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 49;
			this->rcodeIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(46, 357);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(29, 27);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 50;
			this->bldgIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(46, 389);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(29, 27);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 51;
			this->boardTypeIcon->TabStop = false;
			// 
			// tvAvailIcon
			// 
			this->tvAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailIcon.Image")));
			this->tvAvailIcon->Location = System::Drawing::Point(46, 422);
			this->tvAvailIcon->Name = L"tvAvailIcon";
			this->tvAvailIcon->Size = System::Drawing::Size(29, 27);
			this->tvAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailIcon->TabIndex = 52;
			this->tvAvailIcon->TabStop = false;
			// 
			// acAvailIcon
			// 
			this->acAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailIcon.Image")));
			this->acAvailIcon->Location = System::Drawing::Point(46, 456);
			this->acAvailIcon->Name = L"acAvailIcon";
			this->acAvailIcon->Size = System::Drawing::Size(29, 27);
			this->acAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailIcon->TabIndex = 53;
			this->acAvailIcon->TabStop = false;
			// 
			// reserveBtn
			// 
			this->reserveBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->reserveBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reserveBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->reserveBtn->Location = System::Drawing::Point(46, 495);
			this->reserveBtn->Name = L"reserveBtn";
			this->reserveBtn->Size = System::Drawing::Size(270, 37);
			this->reserveBtn->TabIndex = 9;
			this->reserveBtn->Text = L"RESERVE";
			this->reserveBtn->UseVisualStyleBackColor = false;
			this->reserveBtn->Click += gcnew System::EventHandler(this, &RoomList::reserveBtn_Click);
			// 
			// clRBtn
			// 
			this->clRBtn->AutoSize = true;
			this->clRBtn->Checked = true;
			this->clRBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clRBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clRBtn->Location = System::Drawing::Point(262, 8);
			this->clRBtn->Name = L"clRBtn";
			this->clRBtn->Size = System::Drawing::Size(120, 28);
			this->clRBtn->TabIndex = 1;
			this->clRBtn->TabStop = true;
			this->clRBtn->Text = L"Classroom";
			this->clRBtn->UseVisualStyleBackColor = true;
			this->clRBtn->CheckedChanged += gcnew System::EventHandler(this, &RoomList::clRBtn_CheckedChanged);
			// 
			// labRBtn
			// 
			this->labRBtn->AutoSize = true;
			this->labRBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->labRBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRBtn->Location = System::Drawing::Point(377, 8);
			this->labRBtn->Name = L"labRBtn";
			this->labRBtn->Size = System::Drawing::Size(127, 28);
			this->labRBtn->TabIndex = 2;
			this->labRBtn->TabStop = true;
			this->labRBtn->Text = L"Laboratory";
			this->labRBtn->UseVisualStyleBackColor = true;
			this->labRBtn->CheckedChanged += gcnew System::EventHandler(this, &RoomList::labRBtn_CheckedChanged);
			// 
			// addRoomBtn
			// 
			this->addRoomBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
				static_cast<System::Int32>(static_cast<System::Byte>(119)));
			this->addRoomBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addRoomBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->addRoomBtn->Location = System::Drawing::Point(33, 497);
			this->addRoomBtn->Name = L"addRoomBtn";
			this->addRoomBtn->Size = System::Drawing::Size(471, 37);
			this->addRoomBtn->TabIndex = 8;
			this->addRoomBtn->Text = L"ADD A ROOM";
			this->addRoomBtn->UseVisualStyleBackColor = false;
			this->addRoomBtn->Click += gcnew System::EventHandler(this, &RoomList::addRoomBtn_Click);
			// 
			// roomsTbl
			// 
			this->roomsTbl->AllowUserToAddRows = false;
			this->roomsTbl->AllowUserToDeleteRows = false;
			this->roomsTbl->AllowUserToResizeColumns = false;
			this->roomsTbl->AllowUserToResizeRows = false;
			this->roomsTbl->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->roomsTbl->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(177)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->roomsTbl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->roomsTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(177)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->roomsTbl->DefaultCellStyle = dataGridViewCellStyle2;
			this->roomsTbl->Location = System::Drawing::Point(33, 42);
			this->roomsTbl->MultiSelect = false;
			this->roomsTbl->Name = L"roomsTbl";
			this->roomsTbl->ReadOnly = true;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
				static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(177)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->roomsTbl->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->roomsTbl->RowHeadersWidth = 51;
			this->roomsTbl->RowTemplate->Height = 24;
			this->roomsTbl->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->roomsTbl->Size = System::Drawing::Size(471, 484);
			this->roomsTbl->TabIndex = 3;
			this->roomsTbl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RoomList::roomsTbl_CellContentClick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->roomsTbl);
			this->panel1->Controls->Add(this->addRoomBtn);
			this->panel1->Controls->Add(this->labRBtn);
			this->panel1->Controls->Add(this->clRBtn);
			this->panel1->Location = System::Drawing::Point(364, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(533, 563);
			this->panel1->TabIndex = 54;
			// 
			// RoomList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->ClientSize = System::Drawing::Size(897, 555);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->reserveBtn);
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
			this->Controls->Add(this->roomImg);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RoomList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &RoomList::RoomList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: User^ user = gcnew User();
	private: Room^ room = gcnew Room;

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS----------------------------------------------------------------------*/
	
	private: System::Void RoomList_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	//private: System::Void aboutMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void reserveBtn_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void clRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void labRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void roomsTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

	private: System::Void addRoomBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS---------------------------------------------------------------------------*/

	private: void fillTable(void);

	private: void fetchRoomInfo(String^ selectedRoomCode);

	private: void setRoomInfo(void);

	private: bool checkUserReservation(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

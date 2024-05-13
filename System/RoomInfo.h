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
	protected:
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailabilityIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailabilityIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->statusIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeImg))->BeginInit();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(38, 46);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(296, 293);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 45;
			this->roomImg->TabStop = false;
			// 
			// roomNameLbl
			// 
			this->roomNameLbl->AutoSize = true;
			this->roomNameLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->roomNameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameLbl->Location = System::Drawing::Point(402, 92);
			this->roomNameLbl->Name = L"roomNameLbl";
			this->roomNameLbl->Size = System::Drawing::Size(124, 22);
			this->roomNameLbl->TabIndex = 46;
			this->roomNameLbl->Text = L"ROOM CODE:";
			// 
			// bldLbl
			// 
			this->bldLbl->AutoSize = true;
			this->bldLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->bldLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldLbl->Location = System::Drawing::Point(402, 132);
			this->bldLbl->Name = L"bldLbl";
			this->bldLbl->Size = System::Drawing::Size(97, 22);
			this->bldLbl->TabIndex = 47;
			this->bldLbl->Text = L"BUILDING:";
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(402, 272);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(122, 22);
			this->boardTypeLbl->TabIndex = 48;
			this->boardTypeLbl->Text = L"BOARD TYPE:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(402, 317);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(113, 22);
			this->tvAvailLbl->TabIndex = 49;
			this->tvAvailLbl->Text = L"TELEVISION:";
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(402, 364);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(180, 22);
			this->acAvailLbl->TabIndex = 50;
			this->acAvailLbl->Text = L"AIR CONDITIONING:";
			// 
			// editInfoBtn
			// 
			this->editInfoBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->editInfoBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editInfoBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->editInfoBtn->Location = System::Drawing::Point(38, 413);
			this->editInfoBtn->Name = L"editInfoBtn";
			this->editInfoBtn->Size = System::Drawing::Size(799, 42);
			this->editInfoBtn->TabIndex = 57;
			this->editInfoBtn->Text = L"EDIT INFO";
			this->editInfoBtn->UseVisualStyleBackColor = false;
			this->editInfoBtn->Click += gcnew System::EventHandler(this, &RoomInfo::editInfoBtn_Click);
			// 
			// roomInfoLbl
			// 
			this->roomInfoLbl->AutoSize = true;
			this->roomInfoLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->roomInfoLbl->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomInfoLbl->Location = System::Drawing::Point(360, 34);
			this->roomInfoLbl->Name = L"roomInfoLbl";
			this->roomInfoLbl->Size = System::Drawing::Size(206, 29);
			this->roomInfoLbl->TabIndex = 51;
			this->roomInfoLbl->Text = L"ROOM INFORMATION:";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(602, 83);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->Size = System::Drawing::Size(235, 31);
			this->rcodeTxtBox->TabIndex = 58;
			this->rcodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->rcodeTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::rcodeTxtBox_TextChanged);
			// 
			// buildingTxtBox
			// 
			this->buildingTxtBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buildingTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buildingTxtBox->Location = System::Drawing::Point(602, 129);
			this->buildingTxtBox->Name = L"buildingTxtBox";
			this->buildingTxtBox->Size = System::Drawing::Size(235, 31);
			this->buildingTxtBox->TabIndex = 59;
			this->buildingTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->buildingTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::buildingTxtBox_TextChanged);
			// 
			// roomTypeLbll
			// 
			this->roomTypeLbll->AutoSize = true;
			this->roomTypeLbll->BackColor = System::Drawing::SystemColors::ControlLight;
			this->roomTypeLbll->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLbll->Location = System::Drawing::Point(402, 227);
			this->roomTypeLbll->Name = L"roomTypeLbll";
			this->roomTypeLbll->Size = System::Drawing::Size(117, 22);
			this->roomTypeLbll->TabIndex = 63;
			this->roomTypeLbll->Text = L"ROOM TYPE:";
			// 
			// roomTypeCBox
			// 
			this->roomTypeCBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->roomTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeCBox->FormattingEnabled = true;
			this->roomTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ckassroom", L"Laboratory" });
			this->roomTypeCBox->Location = System::Drawing::Point(602, 220);
			this->roomTypeCBox->Name = L"roomTypeCBox";
			this->roomTypeCBox->Size = System::Drawing::Size(235, 29);
			this->roomTypeCBox->TabIndex = 65;
			this->roomTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::roomTypeCBox_SelectedIndexChanged);
			// 
			// boardTypeCBox
			// 
			this->boardTypeCBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->boardTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeCBox->FormattingEnabled = true;
			this->boardTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Whiteboard", L"Blackboard" });
			this->boardTypeCBox->Location = System::Drawing::Point(602, 265);
			this->boardTypeCBox->Name = L"boardTypeCBox";
			this->boardTypeCBox->Size = System::Drawing::Size(235, 29);
			this->boardTypeCBox->TabIndex = 66;
			this->boardTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::boardTypeCBox_SelectedIndexChanged);
			// 
			// tvCBox
			// 
			this->tvCBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tvCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvCBox->FormattingEnabled = true;
			this->tvCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->tvCBox->Location = System::Drawing::Point(602, 310);
			this->tvCBox->Name = L"tvCBox";
			this->tvCBox->Size = System::Drawing::Size(235, 29);
			this->tvCBox->TabIndex = 67;
			this->tvCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::tvCBox_SelectedIndexChanged);
			// 
			// acCBox
			// 
			this->acCBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->acCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acCBox->FormattingEnabled = true;
			this->acCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available\t", L"Not Available" });
			this->acCBox->Location = System::Drawing::Point(602, 357);
			this->acCBox->Name = L"acCBox";
			this->acCBox->Size = System::Drawing::Size(235, 29);
			this->acCBox->TabIndex = 68;
			this->acCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::acCBox_SelectedIndexChanged);
			// 
			// changeImgBtn
			// 
			this->changeImgBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->changeImgBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changeImgBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->changeImgBtn->Location = System::Drawing::Point(38, 355);
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
			this->statusLbl->BackColor = System::Drawing::SystemColors::ControlLight;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(402, 182);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(79, 22);
			this->statusLbl->TabIndex = 70;
			this->statusLbl->Text = L"STATUS:";
			// 
			// statusCBox
			// 
			this->statusCBox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->statusCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusCBox->FormattingEnabled = true;
			this->statusCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->statusCBox->Location = System::Drawing::Point(602, 175);
			this->statusCBox->Name = L"statusCBox";
			this->statusCBox->Size = System::Drawing::Size(235, 29);
			this->statusCBox->TabIndex = 71;
			this->statusCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::statusCBox_SelectedIndexChanged);
			// 
			// acAvailabilityIcon
			// 
			this->acAvailabilityIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->acAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailabilityIcon.Image")));
			this->acAvailabilityIcon->Location = System::Drawing::Point(365, 364);
			this->acAvailabilityIcon->Name = L"acAvailabilityIcon";
			this->acAvailabilityIcon->Size = System::Drawing::Size(31, 22);
			this->acAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailabilityIcon->TabIndex = 79;
			this->acAvailabilityIcon->TabStop = false;
			// 
			// tvAvailabilityIcon
			// 
			this->tvAvailabilityIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tvAvailabilityIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailabilityIcon.Image")));
			this->tvAvailabilityIcon->Location = System::Drawing::Point(365, 317);
			this->tvAvailabilityIcon->Name = L"tvAvailabilityIcon";
			this->tvAvailabilityIcon->Size = System::Drawing::Size(31, 22);
			this->tvAvailabilityIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailabilityIcon->TabIndex = 78;
			this->tvAvailabilityIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(365, 272);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(31, 22);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 77;
			this->boardTypeIcon->TabStop = false;
			// 
			// roomTypeIcon
			// 
			this->roomTypeIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->roomTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomTypeIcon.Image")));
			this->roomTypeIcon->Location = System::Drawing::Point(365, 227);
			this->roomTypeIcon->Name = L"roomTypeIcon";
			this->roomTypeIcon->Size = System::Drawing::Size(31, 22);
			this->roomTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomTypeIcon->TabIndex = 76;
			this->roomTypeIcon->TabStop = false;
			// 
			// statusIcon
			// 
			this->statusIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->statusIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"statusIcon.Image")));
			this->statusIcon->Location = System::Drawing::Point(365, 182);
			this->statusIcon->Name = L"statusIcon";
			this->statusIcon->Size = System::Drawing::Size(31, 22);
			this->statusIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->statusIcon->TabIndex = 75;
			this->statusIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->BackColor = System::Drawing::SystemColors::ControlLight;
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(365, 132);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(31, 22);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 74;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeImg
			// 
			this->rcodeImg->BackColor = System::Drawing::SystemColors::ControlLight;
			this->rcodeImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeImg.Image")));
			this->rcodeImg->Location = System::Drawing::Point(365, 92);
			this->rcodeImg->Name = L"rcodeImg";
			this->rcodeImg->Size = System::Drawing::Size(31, 22);
			this->rcodeImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeImg->TabIndex = 73;
			this->rcodeImg->TabStop = false;
			// 
			// RoomInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(879, 488);
			this->Controls->Add(this->acAvailabilityIcon);
			this->Controls->Add(this->tvAvailabilityIcon);
			this->Controls->Add(this->boardTypeIcon);
			this->Controls->Add(this->roomTypeIcon);
			this->Controls->Add(this->statusIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeImg);
			this->Controls->Add(this->statusCBox);
			this->Controls->Add(this->statusLbl);
			this->Controls->Add(this->changeImgBtn);
			this->Controls->Add(this->acCBox);
			this->Controls->Add(this->tvCBox);
			this->Controls->Add(this->boardTypeCBox);
			this->Controls->Add(this->roomTypeCBox);
			this->Controls->Add(this->roomTypeLbll);
			this->Controls->Add(this->buildingTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->editInfoBtn);
			this->Controls->Add(this->roomInfoLbl);
			this->Controls->Add(this->acAvailLbl);
			this->Controls->Add(this->tvAvailLbl);
			this->Controls->Add(this->boardTypeLbl);
			this->Controls->Add(this->bldLbl);
			this->Controls->Add(this->roomNameLbl);
			this->Controls->Add(this->roomImg);
			this->Name = L"RoomInfo";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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
	
};
}

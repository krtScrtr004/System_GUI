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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(44, 52);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(296, 293);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 45;
			this->roomImg->TabStop = false;
			// 
			// roomNameLbl
			// 
			this->roomNameLbl->AutoSize = true;
			this->roomNameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameLbl->Location = System::Drawing::Point(369, 110);
			this->roomNameLbl->Name = L"roomNameLbl";
			this->roomNameLbl->Size = System::Drawing::Size(128, 21);
			this->roomNameLbl->TabIndex = 46;
			this->roomNameLbl->Text = L"ROOM CODE:";
			// 
			// bldLbl
			// 
			this->bldLbl->AutoSize = true;
			this->bldLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldLbl->Location = System::Drawing::Point(369, 158);
			this->bldLbl->Name = L"bldLbl";
			this->bldLbl->Size = System::Drawing::Size(106, 21);
			this->bldLbl->TabIndex = 47;
			this->bldLbl->Text = L"BUILDING:";
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(369, 300);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(130, 21);
			this->boardTypeLbl->TabIndex = 48;
			this->boardTypeLbl->Text = L"BOARD TYPE:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(369, 346);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(121, 21);
			this->tvAvailLbl->TabIndex = 49;
			this->tvAvailLbl->Text = L"TELEVISION:";
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(369, 393);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(193, 21);
			this->acAvailLbl->TabIndex = 50;
			this->acAvailLbl->Text = L"AIR CONDITIONING:";
			// 
			// editInfoBtn
			// 
			this->editInfoBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editInfoBtn->Location = System::Drawing::Point(44, 445);
			this->editInfoBtn->Name = L"editInfoBtn";
			this->editInfoBtn->Size = System::Drawing::Size(801, 38);
			this->editInfoBtn->TabIndex = 57;
			this->editInfoBtn->Text = L"EDIT INFO";
			this->editInfoBtn->UseVisualStyleBackColor = true;
			this->editInfoBtn->Click += gcnew System::EventHandler(this, &RoomInfo::editInfoBtn_Click);
			// 
			// roomInfoLbl
			// 
			this->roomInfoLbl->AutoSize = true;
			this->roomInfoLbl->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomInfoLbl->Location = System::Drawing::Point(368, 52);
			this->roomInfoLbl->Name = L"roomInfoLbl";
			this->roomInfoLbl->Size = System::Drawing::Size(206, 29);
			this->roomInfoLbl->TabIndex = 51;
			this->roomInfoLbl->Text = L"ROOM INFORMATION:";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(616, 107);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->Size = System::Drawing::Size(229, 31);
			this->rcodeTxtBox->TabIndex = 58;
			this->rcodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->rcodeTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::rcodeTxtBox_TextChanged);
			// 
			// buildingTxtBox
			// 
			this->buildingTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buildingTxtBox->Location = System::Drawing::Point(616, 155);
			this->buildingTxtBox->Name = L"buildingTxtBox";
			this->buildingTxtBox->Size = System::Drawing::Size(229, 31);
			this->buildingTxtBox->TabIndex = 59;
			this->buildingTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->buildingTxtBox->TextChanged += gcnew System::EventHandler(this, &RoomInfo::buildingTxtBox_TextChanged);
			// 
			// roomTypeLbll
			// 
			this->roomTypeLbll->AutoSize = true;
			this->roomTypeLbll->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLbll->Location = System::Drawing::Point(369, 254);
			this->roomTypeLbll->Name = L"roomTypeLbll";
			this->roomTypeLbll->Size = System::Drawing::Size(123, 21);
			this->roomTypeLbll->TabIndex = 63;
			this->roomTypeLbll->Text = L"ROOM TYPE:";
			// 
			// roomTypeCBox
			// 
			this->roomTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeCBox->FormattingEnabled = true;
			this->roomTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Ckassroom", L"Laboratory" });
			this->roomTypeCBox->Location = System::Drawing::Point(616, 251);
			this->roomTypeCBox->Name = L"roomTypeCBox";
			this->roomTypeCBox->Size = System::Drawing::Size(229, 29);
			this->roomTypeCBox->TabIndex = 65;
			this->roomTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::roomTypeCBox_SelectedIndexChanged);
			// 
			// boardTypeCBox
			// 
			this->boardTypeCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeCBox->FormattingEnabled = true;
			this->boardTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Whiteboard", L"Blackboard" });
			this->boardTypeCBox->Location = System::Drawing::Point(616, 297);
			this->boardTypeCBox->Name = L"boardTypeCBox";
			this->boardTypeCBox->Size = System::Drawing::Size(229, 29);
			this->boardTypeCBox->TabIndex = 66;
			this->boardTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::boardTypeCBox_SelectedIndexChanged);
			// 
			// tvCBox
			// 
			this->tvCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvCBox->FormattingEnabled = true;
			this->tvCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->tvCBox->Location = System::Drawing::Point(616, 343);
			this->tvCBox->Name = L"tvCBox";
			this->tvCBox->Size = System::Drawing::Size(229, 29);
			this->tvCBox->TabIndex = 67;
			this->tvCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::tvCBox_SelectedIndexChanged);
			// 
			// acCBox
			// 
			this->acCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acCBox->FormattingEnabled = true;
			this->acCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available\t", L"Not Available" });
			this->acCBox->Location = System::Drawing::Point(616, 390);
			this->acCBox->Name = L"acCBox";
			this->acCBox->Size = System::Drawing::Size(229, 29);
			this->acCBox->TabIndex = 68;
			this->acCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::acCBox_SelectedIndexChanged);
			// 
			// changeImgBtn
			// 
			this->changeImgBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changeImgBtn->Location = System::Drawing::Point(44, 365);
			this->changeImgBtn->Name = L"changeImgBtn";
			this->changeImgBtn->Size = System::Drawing::Size(296, 39);
			this->changeImgBtn->TabIndex = 69;
			this->changeImgBtn->Text = L"CHANGE IMAGE";
			this->changeImgBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->changeImgBtn->UseVisualStyleBackColor = true;
			this->changeImgBtn->Click += gcnew System::EventHandler(this, &RoomInfo::changeImgBtn_Click);
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(369, 208);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(86, 21);
			this->statusLbl->TabIndex = 70;
			this->statusLbl->Text = L"STATUS:";
			// 
			// statusCBox
			// 
			this->statusCBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusCBox->FormattingEnabled = true;
			this->statusCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->statusCBox->Location = System::Drawing::Point(616, 205);
			this->statusCBox->Name = L"statusCBox";
			this->statusCBox->Size = System::Drawing::Size(229, 29);
			this->statusCBox->TabIndex = 71;
			this->statusCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &RoomInfo::statusCBox_SelectedIndexChanged);
			// 
			// RoomInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 539);
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
			this->Text = L"RoomInfo";
			this->Load += gcnew System::EventHandler(this, &RoomInfo::RoomInfo_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
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

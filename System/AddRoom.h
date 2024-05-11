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
	private: System::Windows::Forms::Label^ AddRoomLbl;
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
			this->roomTypeLbl = (gcnew System::Windows::Forms::Label());
			this->imgSlctBtn = (gcnew System::Windows::Forms::Button());
			this->imgSlctLbl = (gcnew System::Windows::Forms::Label());
			this->AddRoomLbl = (gcnew System::Windows::Forms::Label());
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
			this->SuspendLayout();
			// 
			// roomTypeLbl
			// 
			this->roomTypeLbl->AutoSize = true;
			this->roomTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomTypeLbl->Location = System::Drawing::Point(28, 286);
			this->roomTypeLbl->Name = L"roomTypeLbl";
			this->roomTypeLbl->Size = System::Drawing::Size(105, 20);
			this->roomTypeLbl->TabIndex = 41;
			this->roomTypeLbl->Text = L"Room Type:";
			// 
			// imgSlctBtn
			// 
			this->imgSlctBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->imgSlctBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->imgSlctBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->imgSlctBtn->Location = System::Drawing::Point(217, 97);
			this->imgSlctBtn->Name = L"imgSlctBtn";
			this->imgSlctBtn->Size = System::Drawing::Size(281, 26);
			this->imgSlctBtn->TabIndex = 40;
			this->imgSlctBtn->Text = L"Select";
			this->imgSlctBtn->UseVisualStyleBackColor = false;
			this->imgSlctBtn->Click += gcnew System::EventHandler(this, &AddRoom::imgSlctBtn_Click);
			// 
			// imgSlctLbl
			// 
			this->imgSlctLbl->AutoSize = true;
			this->imgSlctLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->imgSlctLbl->Location = System::Drawing::Point(28, 99);
			this->imgSlctLbl->Name = L"imgSlctLbl";
			this->imgSlctLbl->Size = System::Drawing::Size(116, 20);
			this->imgSlctLbl->TabIndex = 39;
			this->imgSlctLbl->Text = L"Room Image:";
			// 
			// AddRoomLbl
			// 
			this->AddRoomLbl->AutoSize = true;
			this->AddRoomLbl->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddRoomLbl->Location = System::Drawing::Point(27, 41);
			this->AddRoomLbl->Name = L"AddRoomLbl";
			this->AddRoomLbl->Size = System::Drawing::Size(148, 35);
			this->AddRoomLbl->TabIndex = 38;
			this->AddRoomLbl->Text = L"Add A Room";
			// 
			// confirmBtn
			// 
			this->confirmBtn->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->confirmBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->confirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->confirmBtn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBtn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->confirmBtn->Location = System::Drawing::Point(32, 487);
			this->confirmBtn->Name = L"confirmBtn";
			this->confirmBtn->Size = System::Drawing::Size(466, 49);
			this->confirmBtn->TabIndex = 37;
			this->confirmBtn->Text = L"CONFIRM";
			this->confirmBtn->UseVisualStyleBackColor = false;
			this->confirmBtn->Click += gcnew System::EventHandler(this, &AddRoom::confirmBtn_Click);
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->bldgTxtBox->Location = System::Drawing::Point(217, 187);
			this->bldgTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->Size = System::Drawing::Size(281, 22);
			this->bldgTxtBox->TabIndex = 33;
			this->bldgTxtBox->TextChanged += gcnew System::EventHandler(this, &AddRoom::bldgTxtBox_TextChanged);
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rcodeTxtBox->Location = System::Drawing::Point(217, 141);
			this->rcodeTxtBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->Size = System::Drawing::Size(281, 22);
			this->rcodeTxtBox->TabIndex = 32;
			this->rcodeTxtBox->TextChanged += gcnew System::EventHandler(this, &AddRoom::rcodeTxtBox_TextChanged);
			// 
			// acAvailLbl
			// 
			this->acAvailLbl->AutoSize = true;
			this->acAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailLbl->Location = System::Drawing::Point(28, 437);
			this->acAvailLbl->Name = L"acAvailLbl";
			this->acAvailLbl->Size = System::Drawing::Size(140, 20);
			this->acAvailLbl->TabIndex = 31;
			this->acAvailLbl->Text = L"Airconditioning:";
			// 
			// tvAvailLbl
			// 
			this->tvAvailLbl->AutoSize = true;
			this->tvAvailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailLbl->Location = System::Drawing::Point(28, 389);
			this->tvAvailLbl->Name = L"tvAvailLbl";
			this->tvAvailLbl->Size = System::Drawing::Size(93, 20);
			this->tvAvailLbl->TabIndex = 30;
			this->tvAvailLbl->Text = L"Television:";
			// 
			// statusLbl
			// 
			this->statusLbl->AutoSize = true;
			this->statusLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->statusLbl->Location = System::Drawing::Point(28, 235);
			this->statusLbl->Name = L"statusLbl";
			this->statusLbl->Size = System::Drawing::Size(64, 20);
			this->statusLbl->TabIndex = 29;
			this->statusLbl->Text = L"Status:";
			// 
			// buildingLbl
			// 
			this->buildingLbl->AutoSize = true;
			this->buildingLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buildingLbl->Location = System::Drawing::Point(28, 189);
			this->buildingLbl->Name = L"buildingLbl";
			this->buildingLbl->Size = System::Drawing::Size(82, 20);
			this->buildingLbl->TabIndex = 28;
			this->buildingLbl->Text = L"Building:";
			// 
			// rcodeLbl
			// 
			this->rcodeLbl->AutoSize = true;
			this->rcodeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeLbl->Location = System::Drawing::Point(28, 143);
			this->rcodeLbl->Name = L"rcodeLbl";
			this->rcodeLbl->Size = System::Drawing::Size(107, 20);
			this->rcodeLbl->TabIndex = 27;
			this->rcodeLbl->Text = L"Room Code:";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// statusCBox
			// 
			this->statusCBox->FormattingEnabled = true;
			this->statusCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->statusCBox->Location = System::Drawing::Point(217, 235);
			this->statusCBox->Name = L"statusCBox";
			this->statusCBox->Size = System::Drawing::Size(281, 24);
			this->statusCBox->TabIndex = 43;
			this->statusCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::statusCBox_SelectedIndexChanged);
			// 
			// roomTypeCBox
			// 
			this->roomTypeCBox->FormattingEnabled = true;
			this->roomTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Classroom\t", L"Laboratory" });
			this->roomTypeCBox->Location = System::Drawing::Point(217, 286);
			this->roomTypeCBox->Name = L"roomTypeCBox";
			this->roomTypeCBox->Size = System::Drawing::Size(281, 24);
			this->roomTypeCBox->TabIndex = 44;
			this->roomTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::roomTypeCBox_SelectedIndexChanged);
			// 
			// tvAvailCBox
			// 
			this->tvAvailCBox->FormattingEnabled = true;
			this->tvAvailCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->tvAvailCBox->Location = System::Drawing::Point(217, 389);
			this->tvAvailCBox->Name = L"tvAvailCBox";
			this->tvAvailCBox->Size = System::Drawing::Size(281, 24);
			this->tvAvailCBox->TabIndex = 45;
			this->tvAvailCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::tvAvailCBox_SelectedIndexChanged);
			// 
			// acAvailCBox
			// 
			this->acAvailCBox->FormattingEnabled = true;
			this->acAvailCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Available", L"Not Available" });
			this->acAvailCBox->Location = System::Drawing::Point(217, 437);
			this->acAvailCBox->Name = L"acAvailCBox";
			this->acAvailCBox->Size = System::Drawing::Size(281, 24);
			this->acAvailCBox->TabIndex = 46;
			this->acAvailCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::acAvailCBox_SelectedIndexChanged);
			// 
			// boardTypeCBox
			// 
			this->boardTypeCBox->FormattingEnabled = true;
			this->boardTypeCBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Whiteboard", L"BlackbBoard" });
			this->boardTypeCBox->Location = System::Drawing::Point(217, 336);
			this->boardTypeCBox->Name = L"boardTypeCBox";
			this->boardTypeCBox->Size = System::Drawing::Size(281, 24);
			this->boardTypeCBox->TabIndex = 48;
			this->boardTypeCBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AddRoom::boardTypeCBox_SelectedIndexChanged);
			// 
			// boardTypeLbl
			// 
			this->boardTypeLbl->AutoSize = true;
			this->boardTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeLbl->Location = System::Drawing::Point(28, 336);
			this->boardTypeLbl->Name = L"boardTypeLbl";
			this->boardTypeLbl->Size = System::Drawing::Size(106, 20);
			this->boardTypeLbl->TabIndex = 47;
			this->boardTypeLbl->Text = L"Board Type:";
			// 
			// AddRoom
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(545, 567);
			this->Controls->Add(this->boardTypeCBox);
			this->Controls->Add(this->boardTypeLbl);
			this->Controls->Add(this->acAvailCBox);
			this->Controls->Add(this->tvAvailCBox);
			this->Controls->Add(this->roomTypeCBox);
			this->Controls->Add(this->statusCBox);
			this->Controls->Add(this->roomTypeLbl);
			this->Controls->Add(this->imgSlctBtn);
			this->Controls->Add(this->imgSlctLbl);
			this->Controls->Add(this->AddRoomLbl);
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
			this->Text = L"ADD ROOM";
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

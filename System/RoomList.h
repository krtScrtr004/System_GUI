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

	/// <summary>
	/// Summary for RoomList
	/// </summary>
	public ref class RoomList : public System::Windows::Forms::Form
	{
	public:
		RoomList(User^ other);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RoomList();

	protected:


	protected:
	private: System::Windows::Forms::RadioButton^ clRBtn;
	private: System::Windows::Forms::RadioButton^ labRBtn;
	private: System::Windows::Forms::DataGridView^ roomsTbl;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt1MStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt2MStrip;




	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;
	private: System::Windows::Forms::Button^ addRoomBtn;
	private: System::Windows::Forms::PictureBox^ roomImg;
	private: System::Windows::Forms::Label^ acAvailDataLbl;
	private: System::Windows::Forms::Label^ tvAvailDataLbl;
	private: System::Windows::Forms::Label^ boardTypeDataLbl;
	private: System::Windows::Forms::Label^ bldDataLbl;
	private: System::Windows::Forms::Label^ roomCodeDataLbl;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ boardTypeIcon;
	private: System::Windows::Forms::PictureBox^ tvAvailIcon;
	private: System::Windows::Forms::PictureBox^ acAvailIcon;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ reserveBtn;


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
			this->clRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->labRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->roomsTbl = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt1MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt2MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addRoomBtn = (gcnew System::Windows::Forms::Button());
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->acAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->tvAvailDataLbl = (gcnew System::Windows::Forms::Label());
			this->boardTypeDataLbl = (gcnew System::Windows::Forms::Label());
			this->bldDataLbl = (gcnew System::Windows::Forms::Label());
			this->roomCodeDataLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->boardTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->tvAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->acAvailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->reserveBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// clRBtn
			// 
			this->clRBtn->AutoSize = true;
			this->clRBtn->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clRBtn->Location = System::Drawing::Point(246, 50);
			this->clRBtn->Name = L"clRBtn";
			this->clRBtn->Size = System::Drawing::Size(109, 24);
			this->clRBtn->TabIndex = 1;
			this->clRBtn->TabStop = true;
			this->clRBtn->Text = L"Classroom";
			this->clRBtn->UseVisualStyleBackColor = true;
			this->clRBtn->CheckedChanged += gcnew System::EventHandler(this, &RoomList::clRBtn_CheckedChanged);
			// 
			// labRBtn
			// 
			this->labRBtn->AutoSize = true;
			this->labRBtn->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRBtn->Location = System::Drawing::Point(361, 50);
			this->labRBtn->Name = L"labRBtn";
			this->labRBtn->Size = System::Drawing::Size(112, 24);
			this->labRBtn->TabIndex = 2;
			this->labRBtn->TabStop = true;
			this->labRBtn->Text = L"Laboratory";
			this->labRBtn->UseVisualStyleBackColor = true;
			this->labRBtn->CheckedChanged += gcnew System::EventHandler(this, &RoomList::labRBtn_CheckedChanged);
			// 
			// roomsTbl
			// 
			this->roomsTbl->AllowUserToAddRows = false;
			this->roomsTbl->AllowUserToDeleteRows = false;
			this->roomsTbl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->roomsTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->roomsTbl->Location = System::Drawing::Point(47, 82);
			this->roomsTbl->MultiSelect = false;
			this->roomsTbl->Name = L"roomsTbl";
			this->roomsTbl->ReadOnly = true;
			this->roomsTbl->RowHeadersWidth = 51;
			this->roomsTbl->RowTemplate->Height = 24;
			this->roomsTbl->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->roomsTbl->Size = System::Drawing::Size(426, 491);
			this->roomsTbl->TabIndex = 3;
			this->roomsTbl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RoomList::roomsTbl_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLight;
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
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(840, 27);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileMStrip
			// 
			this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->profileMStrip->Name = L"profileMStrip";
			this->profileMStrip->Size = System::Drawing::Size(60, 23);
			this->profileMStrip->Text = L"Profile";
			this->profileMStrip->Click += gcnew System::EventHandler(this, &RoomList::profileMStrip_Click);
			// 
			// opt1MStrip
			// 
			this->opt1MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt1MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt1MStrip->Name = L"opt1MStrip";
			this->opt1MStrip->Size = System::Drawing::Size(78, 23);
			this->opt1MStrip->Text = L"Reserve";
			this->opt1MStrip->Click += gcnew System::EventHandler(this, &RoomList::opt1MStrip_Click);
			// 
			// opt2MStrip
			// 
			this->opt2MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt2MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt2MStrip->Name = L"opt2MStrip";
			this->opt2MStrip->Size = System::Drawing::Size(73, 23);
			this->opt2MStrip->Text = L"Receipt";
			this->opt2MStrip->Click += gcnew System::EventHandler(this, &RoomList::opt2MStrip_Click);
			// 
			// exitMStrip
			// 
			this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exitMStrip->Name = L"exitMStrip";
			this->exitMStrip->Size = System::Drawing::Size(47, 23);
			this->exitMStrip->Text = L"Exit";
			this->exitMStrip->Click += gcnew System::EventHandler(this, &RoomList::exitMStrip_Click);
			// 
			// addRoomBtn
			// 
			this->addRoomBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->addRoomBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addRoomBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->addRoomBtn->Location = System::Drawing::Point(47, 536);
			this->addRoomBtn->Name = L"addRoomBtn";
			this->addRoomBtn->Size = System::Drawing::Size(426, 37);
			this->addRoomBtn->TabIndex = 8;
			this->addRoomBtn->Text = L"ADD A ROOM";
			this->addRoomBtn->UseVisualStyleBackColor = false;
			this->addRoomBtn->Click += gcnew System::EventHandler(this, &RoomList::addRoomBtn_Click);
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.Image")));
			this->roomImg->Location = System::Drawing::Point(36, 87);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(257, 257);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 9;
			this->roomImg->TabStop = false;
			// 
			// acAvailDataLbl
			// 
			this->acAvailDataLbl->AutoSize = true;
			this->acAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acAvailDataLbl->Location = System::Drawing::Point(73, 502);
			this->acAvailDataLbl->Name = L"acAvailDataLbl";
			this->acAvailDataLbl->Size = System::Drawing::Size(152, 22);
			this->acAvailDataLbl->TabIndex = 48;
			this->acAvailDataLbl->Text = L"AC AVAILABILITY";
			// 
			// tvAvailDataLbl
			// 
			this->tvAvailDataLbl->AutoSize = true;
			this->tvAvailDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tvAvailDataLbl->Location = System::Drawing::Point(73, 471);
			this->tvAvailDataLbl->Name = L"tvAvailDataLbl";
			this->tvAvailDataLbl->Size = System::Drawing::Size(150, 22);
			this->tvAvailDataLbl->TabIndex = 47;
			this->tvAvailDataLbl->Text = L"TV AVAILABILITY";
			// 
			// boardTypeDataLbl
			// 
			this->boardTypeDataLbl->AutoSize = true;
			this->boardTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->boardTypeDataLbl->Location = System::Drawing::Point(73, 437);
			this->boardTypeDataLbl->Name = L"boardTypeDataLbl";
			this->boardTypeDataLbl->Size = System::Drawing::Size(118, 22);
			this->boardTypeDataLbl->TabIndex = 46;
			this->boardTypeDataLbl->Text = L"BOARD TYPE";
			// 
			// bldDataLbl
			// 
			this->bldDataLbl->AutoEllipsis = true;
			this->bldDataLbl->AutoSize = true;
			this->bldDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldDataLbl->Location = System::Drawing::Point(73, 403);
			this->bldDataLbl->Name = L"bldDataLbl";
			this->bldDataLbl->Size = System::Drawing::Size(93, 22);
			this->bldDataLbl->TabIndex = 45;
			this->bldDataLbl->Text = L"BUILDING";
			// 
			// roomCodeDataLbl
			// 
			this->roomCodeDataLbl->AutoSize = true;
			this->roomCodeDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCodeDataLbl->Location = System::Drawing::Point(73, 371);
			this->roomCodeDataLbl->Name = L"roomCodeDataLbl";
			this->roomCodeDataLbl->Size = System::Drawing::Size(120, 22);
			this->roomCodeDataLbl->TabIndex = 44;
			this->roomCodeDataLbl->Text = L"ROOM CODE";
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(36, 371);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(31, 22);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 49;
			this->rcodeIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(36, 403);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(31, 22);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 50;
			this->bldgIcon->TabStop = false;
			// 
			// boardTypeIcon
			// 
			this->boardTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boardTypeIcon.Image")));
			this->boardTypeIcon->Location = System::Drawing::Point(36, 437);
			this->boardTypeIcon->Name = L"boardTypeIcon";
			this->boardTypeIcon->Size = System::Drawing::Size(31, 22);
			this->boardTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->boardTypeIcon->TabIndex = 51;
			this->boardTypeIcon->TabStop = false;
			// 
			// tvAvailIcon
			// 
			this->tvAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tvAvailIcon.Image")));
			this->tvAvailIcon->Location = System::Drawing::Point(36, 471);
			this->tvAvailIcon->Name = L"tvAvailIcon";
			this->tvAvailIcon->Size = System::Drawing::Size(31, 22);
			this->tvAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->tvAvailIcon->TabIndex = 52;
			this->tvAvailIcon->TabStop = false;
			// 
			// acAvailIcon
			// 
			this->acAvailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"acAvailIcon.Image")));
			this->acAvailIcon->Location = System::Drawing::Point(36, 502);
			this->acAvailIcon->Name = L"acAvailIcon";
			this->acAvailIcon->Size = System::Drawing::Size(31, 22);
			this->acAvailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->acAvailIcon->TabIndex = 53;
			this->acAvailIcon->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->addRoomBtn);
			this->panel1->Controls->Add(this->roomsTbl);
			this->panel1->Controls->Add(this->labRBtn);
			this->panel1->Controls->Add(this->clRBtn);
			this->panel1->Location = System::Drawing::Point(326, -7);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(518, 638);
			this->panel1->TabIndex = 54;
			// 
			// reserveBtn
			// 
			this->reserveBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->reserveBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveBtn->ForeColor = System::Drawing::SystemColors::Control;
			this->reserveBtn->Location = System::Drawing::Point(36, 530);
			this->reserveBtn->Name = L"reserveBtn";
			this->reserveBtn->Size = System::Drawing::Size(257, 37);
			this->reserveBtn->TabIndex = 9;
			this->reserveBtn->Text = L"RESERVE";
			this->reserveBtn->UseVisualStyleBackColor = false;
			this->reserveBtn->Click += gcnew System::EventHandler(this, &RoomList::reserveBtn_Click);
			// 
			// RoomList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(840, 590);
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
			this->Controls->Add(this->panel1);
			this->Name = L"RoomList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &RoomList::RoomList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boardTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tvAvailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->acAvailIcon))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

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

	private: void deletePassedRoomList(void);

	private: void fetchRoomInfo(String^ selectedRoomCode);

	private: void setRoomInfo(void);

	private: bool checkUserRoomList(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

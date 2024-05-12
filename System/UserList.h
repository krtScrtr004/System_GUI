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

	/// <summary>
	/// Summary for UserList
	/// </summary>
	public ref class UserList : public System::Windows::Forms::Form
	{
	public:
		UserList(User^ other);

	protected:
		~UserList();
		
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ opt1MStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt2MStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::DataGridView^ usersTbl;
	private: System::Windows::Forms::PictureBox^ userProfileImg;
	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::Label^ nameDataLbl;
	private: System::Windows::Forms::Label^ idNumDataLbl;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::Label^ emailDataLbl;

	private: System::Windows::Forms::Label^ emailLbl;
	private: System::Windows::Forms::Label^ accTypeDataLbl;
	private: System::Windows::Forms::Label^ accTypeLbl;





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
			this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt1MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt2MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->usersTbl = (gcnew System::Windows::Forms::DataGridView());
			this->userProfileImg = (gcnew System::Windows::Forms::PictureBox());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->nameDataLbl = (gcnew System::Windows::Forms::Label());
			this->idNumDataLbl = (gcnew System::Windows::Forms::Label());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->emailDataLbl = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeDataLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersTbl))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userProfileImg))->BeginInit();
			this->SuspendLayout();
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
			this->profileMStrip->Click += gcnew System::EventHandler(this, &UserList::profileMStrip_Click);
			// 
			// opt1MStrip
			// 
			this->opt1MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt1MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt1MStrip->Name = L"opt1MStrip";
			this->opt1MStrip->Size = System::Drawing::Size(78, 23);
			this->opt1MStrip->Text = L"Reserve";
			this->opt1MStrip->Click += gcnew System::EventHandler(this, &UserList::opt1MStrip_Click);
			// 
			// opt2MStrip
			// 
			this->opt2MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt2MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt2MStrip->Name = L"opt2MStrip";
			this->opt2MStrip->Size = System::Drawing::Size(73, 23);
			this->opt2MStrip->Text = L"Receipt";
			this->opt2MStrip->Click += gcnew System::EventHandler(this, &UserList::opt2MStrip_Click);
			// 
			// exitMStrip
			// 
			this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exitMStrip->Name = L"exitMStrip";
			this->exitMStrip->Size = System::Drawing::Size(47, 23);
			this->exitMStrip->Text = L"Exit";
			this->exitMStrip->Click += gcnew System::EventHandler(this, &UserList::exitMStrip_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
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
			this->menuStrip1->Size = System::Drawing::Size(1045, 27);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// usersTbl
			// 
			this->usersTbl->AllowUserToAddRows = false;
			this->usersTbl->AllowUserToDeleteRows = false;
			this->usersTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->usersTbl->Location = System::Drawing::Point(341, 62);
			this->usersTbl->MultiSelect = false;
			this->usersTbl->Name = L"usersTbl";
			this->usersTbl->ReadOnly = true;
			this->usersTbl->RowHeadersWidth = 51;
			this->usersTbl->RowTemplate->Height = 24;
			this->usersTbl->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->usersTbl->Size = System::Drawing::Size(652, 474);
			this->usersTbl->TabIndex = 12;
			this->usersTbl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UserList::usersTbl_CellContentClick);
			// 
			// userProfileImg
			// 
			this->userProfileImg->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->userProfileImg->Location = System::Drawing::Point(35, 62);
			this->userProfileImg->Name = L"userProfileImg";
			this->userProfileImg->Size = System::Drawing::Size(240, 240);
			this->userProfileImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->userProfileImg->TabIndex = 14;
			this->userProfileImg->TabStop = false;
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(31, 321);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(54, 19);
			this->nameLbl->TabIndex = 15;
			this->nameLbl->Text = L"NAME:";
			// 
			// nameDataLbl
			// 
			this->nameDataLbl->AutoEllipsis = true;
			this->nameDataLbl->AutoSize = true;
			this->nameDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameDataLbl->Location = System::Drawing::Point(31, 340);
			this->nameDataLbl->Name = L"nameDataLbl";
			this->nameDataLbl->Size = System::Drawing::Size(102, 20);
			this->nameDataLbl->TabIndex = 16;
			this->nameDataLbl->Text = L"NAME HERE";
			// 
			// idNumDataLbl
			// 
			this->idNumDataLbl->AutoSize = true;
			this->idNumDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumDataLbl->Location = System::Drawing::Point(31, 394);
			this->idNumDataLbl->Name = L"idNumDataLbl";
			this->idNumDataLbl->Size = System::Drawing::Size(145, 20);
			this->idNumDataLbl->TabIndex = 18;
			this->idNumDataLbl->Text = L"ID NUMBER HERE";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->Location = System::Drawing::Point(31, 375);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(91, 19);
			this->idNumLbl->TabIndex = 17;
			this->idNumLbl->Text = L"ID NUMBER:";
			// 
			// emailDataLbl
			// 
			this->emailDataLbl->AutoEllipsis = true;
			this->emailDataLbl->AutoSize = true;
			this->emailDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailDataLbl->Location = System::Drawing::Point(31, 452);
			this->emailDataLbl->Name = L"emailDataLbl";
			this->emailDataLbl->Size = System::Drawing::Size(102, 20);
			this->emailDataLbl->TabIndex = 20;
			this->emailDataLbl->Text = L"EMAIL HERE";
			// 
			// emailLbl
			// 
			this->emailLbl->AutoSize = true;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->Location = System::Drawing::Point(31, 433);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(54, 19);
			this->emailLbl->TabIndex = 19;
			this->emailLbl->Text = L"EMAIL:";
			// 
			// accTypeDataLbl
			// 
			this->accTypeDataLbl->AutoSize = true;
			this->accTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeDataLbl->Location = System::Drawing::Point(31, 516);
			this->accTypeDataLbl->Name = L"accTypeDataLbl";
			this->accTypeDataLbl->Size = System::Drawing::Size(167, 20);
			this->accTypeDataLbl->TabIndex = 22;
			this->accTypeDataLbl->Text = L"ACCOUN TYPE HERE";
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->Location = System::Drawing::Point(31, 497);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(108, 19);
			this->accTypeLbl->TabIndex = 21;
			this->accTypeLbl->Text = L"ACCOUN TYPE:";
			// 
			// UserList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1045, 587);
			this->Controls->Add(this->accTypeDataLbl);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->emailDataLbl);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->idNumDataLbl);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->nameDataLbl);
			this->Controls->Add(this->nameLbl);
			this->Controls->Add(this->userProfileImg);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->usersTbl);
			this->Name = L"UserList";
			this->Text = L"UserList";
			this->Load += gcnew System::EventHandler(this, &UserList::UserList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->usersTbl))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->userProfileImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: User^ user = gcnew User();

	private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void UserList_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void usersTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);


	void searchUser(User^ user);
};
}

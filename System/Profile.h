#pragma once
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	private:
		MySqlConnection^ conn;

	public:
		Profile(User^ user);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile();

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt1MStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ opt2MStrip;




	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;

	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::Label^ accTypeLbl;
	private: System::Windows::Forms::Label^ emailLbl;

	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::PictureBox^ profileImg;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ historyTbl;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt1MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opt2MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->profileImg = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->historyTbl = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyTbl))->BeginInit();
			this->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(830, 27);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileMStrip
			// 
			this->profileMStrip->BackColor = System::Drawing::SystemColors::ControlLight;
			this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->profileMStrip->Name = L"profileMStrip";
			this->profileMStrip->Size = System::Drawing::Size(67, 23);
			this->profileMStrip->Text = L"Profile";
			this->profileMStrip->Click += gcnew System::EventHandler(this, &Profile::profileMStrip_Click);
			// 
			// opt1MStrip
			// 
			this->opt1MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt1MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt1MStrip->Name = L"opt1MStrip";
			this->opt1MStrip->Size = System::Drawing::Size(74, 23);
			this->opt1MStrip->Text = L"Reserve";
			this->opt1MStrip->Click += gcnew System::EventHandler(this, &Profile::opt1MStrip_Click);
			// 
			// opt2MStrip
			// 
			this->opt2MStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->opt2MStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->opt2MStrip->Name = L"opt2MStrip";
			this->opt2MStrip->Size = System::Drawing::Size(73, 23);
			this->opt2MStrip->Text = L"Receipt";
			this->opt2MStrip->Click += gcnew System::EventHandler(this, &Profile::opt2MStrip_Click);
			// 
			// exitMStrip
			// 
			this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exitMStrip->Name = L"exitMStrip";
			this->exitMStrip->Size = System::Drawing::Size(47, 23);
			this->exitMStrip->Text = L"Exit";
			this->exitMStrip->Click += gcnew System::EventHandler(this, &Profile::exitMStrip_Click);
			// 
			// nameLbl
			// 
			this->nameLbl->AutoEllipsis = true;
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(38, 317);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nameLbl->Size = System::Drawing::Size(225, 34);
			this->nameLbl->TabIndex = 14;
			this->nameLbl->Text = L"Sample, Sample";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->BackColor = System::Drawing::Color::Transparent;
			this->idNumLbl->Cursor = System::Windows::Forms::Cursors::Default;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->idNumLbl->Location = System::Drawing::Point(77, 396);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(126, 20);
			this->idNumLbl->TabIndex = 15;
			this->idNumLbl->Text = L"2023 - 666666";
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->BackColor = System::Drawing::Color::Transparent;
			this->accTypeLbl->Cursor = System::Windows::Forms::Cursors::Default;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->accTypeLbl->Location = System::Drawing::Point(77, 433);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(130, 20);
			this->accTypeLbl->TabIndex = 16;
			this->accTypeLbl->Text = L"STUDENT TYPE";
			this->accTypeLbl->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoEllipsis = true;
			this->emailLbl->AutoSize = true;
			this->emailLbl->BackColor = System::Drawing::Color::Transparent;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->emailLbl->Location = System::Drawing::Point(77, 357);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(220, 22);
			this->emailLbl->TabIndex = 17;
			this->emailLbl->Text = L"sampleemail@rtu.edu.ph";
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->editBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Impact", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editBtn->Location = System::Drawing::Point(42, 470);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(262, 40);
			this->editBtn->TabIndex = 20;
			this->editBtn->Text = L"EDIT";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &Profile::editBtn_Click);
			// 
			// profileImg
			// 
			this->profileImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.BackgroundImage")));
			this->profileImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.Image")));
			this->profileImg->Location = System::Drawing::Point(42, 55);
			this->profileImg->Name = L"profileImg";
			this->profileImg->Size = System::Drawing::Size(253, 245);
			this->profileImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profileImg->TabIndex = 23;
			this->profileImg->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(42, 354);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 27);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(42, 426);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(29, 27);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(42, 389);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(29, 27);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 26;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel1->Controls->Add(this->historyTbl);
			this->panel1->Location = System::Drawing::Point(324, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(519, 569);
			this->panel1->TabIndex = 27;
			// 
			// historyTbl
			// 
			this->historyTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->historyTbl->Location = System::Drawing::Point(37, 55);
			this->historyTbl->Name = L"historyTbl";
			this->historyTbl->RowHeadersWidth = 51;
			this->historyTbl->RowTemplate->Height = 24;
			this->historyTbl->Size = System::Drawing::Size(441, 455);
			this->historyTbl->TabIndex = 2;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(830, 534);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->profileImg);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->nameLbl);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyTbl))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: User^ user = gcnew User();

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS---------------------------------------------------------------------*/

	// FOrm Load
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e);

	// Profile Menu
	private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// RoomList Menu
	private: System::Void opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// Exit Menu
	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// Edit Button
	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

	private: void fetchUserData();

	private: void displayData();

	private: void fillTable();

	/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

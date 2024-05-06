#pragma once
#include "Utils.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ reserveMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ historyMSrip;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;











	private: System::Windows::Forms::PictureBox^ profileImg;
	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::Label^ accTypeLbl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ currResLbl;
	private: System::Windows::Forms::TextBox^ roomCodeTxtBox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ noReservedTxtBox;
	private: System::Windows::Forms::Label^ label2;












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
			this->reserveMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->historyMSrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->profileImg = (gcnew System::Windows::Forms::PictureBox());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->currResLbl = (gcnew System::Windows::Forms::Label());
			this->roomCodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->noReservedTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->profileMStrip, this->reserveMStrip,
					this->historyMSrip, this->aboutMStrip, this->exitMStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(650, 27);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileMStrip
			// 
			this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->profileMStrip->Name = L"profileMStrip";
			this->profileMStrip->Size = System::Drawing::Size(67, 23);
			this->profileMStrip->Text = L"Profile";
			// 
			// reserveMStrip
			// 
			this->reserveMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->reserveMStrip->Name = L"reserveMStrip";
			this->reserveMStrip->Size = System::Drawing::Size(74, 23);
			this->reserveMStrip->Text = L"Reserve";
			// 
			// historyMSrip
			// 
			this->historyMSrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->historyMSrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->historyMSrip->Name = L"historyMSrip";
			this->historyMSrip->Size = System::Drawing::Size(70, 23);
			this->historyMSrip->Text = L"History";
			// 
			// aboutMStrip
			// 
			this->aboutMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->aboutMStrip->Name = L"aboutMStrip";
			this->aboutMStrip->Size = System::Drawing::Size(64, 23);
			this->aboutMStrip->Text = L"About";
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
			// profileImg
			// 
			this->profileImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.BackgroundImage")));
			this->profileImg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->profileImg->Location = System::Drawing::Point(28, 43);
			this->profileImg->Name = L"profileImg";
			this->profileImg->Size = System::Drawing::Size(248, 232);
			this->profileImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->profileImg->TabIndex = 13;
			this->profileImg->TabStop = false;
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(303, 43);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(349, 42);
			this->nameLbl->TabIndex = 14;
			this->nameLbl->Text = L"Lastname, Firstname MI.";
			// 
			// idNumLbl
			// 
			this->idNumLbl->AutoSize = true;
			this->idNumLbl->BackColor = System::Drawing::Color::Transparent;
			this->idNumLbl->Cursor = System::Windows::Forms::Cursors::Default;
			this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumLbl->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->idNumLbl->Location = System::Drawing::Point(304, 76);
			this->idNumLbl->Name = L"idNumLbl";
			this->idNumLbl->Size = System::Drawing::Size(116, 20);
			this->idNumLbl->TabIndex = 15;
			this->idNumLbl->Text = L"2023 - 666666";
			// 
			// accTypeLbl
			// 
			this->accTypeLbl->AutoSize = true;
			this->accTypeLbl->BackColor = System::Drawing::Color::Transparent;
			this->accTypeLbl->Cursor = System::Windows::Forms::Cursors::Default;
			this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeLbl->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->accTypeLbl->Location = System::Drawing::Point(469, 76);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(124, 20);
			this->accTypeLbl->TabIndex = 16;
			this->accTypeLbl->Text = L"STUDENT TYPE";
			this->accTypeLbl->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 22);
			this->label1->TabIndex = 17;
			this->label1->Text = L"sampleemail@rtu.edu.ph";
			// 
			// currResLbl
			// 
			this->currResLbl->AutoSize = true;
			this->currResLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currResLbl->Location = System::Drawing::Point(304, 154);
			this->currResLbl->Name = L"currResLbl";
			this->currResLbl->Size = System::Drawing::Size(141, 19);
			this->currResLbl->TabIndex = 18;
			this->currResLbl->Text = L"Current Reservation:";
			// 
			// roomCodeTxtBox
			// 
			this->roomCodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->roomCodeTxtBox->Enabled = false;
			this->roomCodeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomCodeTxtBox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->roomCodeTxtBox->Location = System::Drawing::Point(461, 152);
			this->roomCodeTxtBox->Name = L"roomCodeTxtBox";
			this->roomCodeTxtBox->Size = System::Drawing::Size(133, 25);
			this->roomCodeTxtBox->TabIndex = 19;
			this->roomCodeTxtBox->Text = L"Room Code";
			this->roomCodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(307, 226);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(287, 49);
			this->button1->TabIndex = 20;
			this->button1->Text = L"EDIT";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// noReservedTxtBox
			// 
			this->noReservedTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->noReservedTxtBox->Enabled = false;
			this->noReservedTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->noReservedTxtBox->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->noReservedTxtBox->Location = System::Drawing::Point(461, 183);
			this->noReservedTxtBox->Name = L"noReservedTxtBox";
			this->noReservedTxtBox->Size = System::Drawing::Size(133, 25);
			this->noReservedTxtBox->TabIndex = 22;
			this->noReservedTxtBox->Text = L"999";
			this->noReservedTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(304, 185);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(117, 19);
			this->label2->TabIndex = 21;
			this->label2->Text = L"No. of Reserved:";
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 298);
			this->Controls->Add(this->noReservedTxtBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->roomCodeTxtBox);
			this->Controls->Add(this->currResLbl);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->nameLbl);
			this->Controls->Add(this->profileImg);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// Edit Profile Sub Menu
	private: System::Void editSubMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// Exit Menu
	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e) {
		if (confirmExit())
			Application::Exit();
	}
private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

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
	private: System::Windows::Forms::ToolStripMenuItem^ reserveMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ reciptMStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;

	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::Label^ idNumLbl;
	private: System::Windows::Forms::Label^ accTypeLbl;
	private: System::Windows::Forms::Label^ emailLbl;

	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::PictureBox^ profileImg;



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
			this->reciptMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->idNumLbl = (gcnew System::Windows::Forms::Label());
			this->accTypeLbl = (gcnew System::Windows::Forms::Label());
			this->emailLbl = (gcnew System::Windows::Forms::Label());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->profileImg = (gcnew System::Windows::Forms::PictureBox());
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
					this->reciptMStrip, this->aboutMStrip, this->exitMStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(372, 27);
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
			this->profileMStrip->Click += gcnew System::EventHandler(this, &Profile::profileMStrip_Click);
			// 
			// reserveMStrip
			// 
			this->reserveMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->reserveMStrip->Name = L"reserveMStrip";
			this->reserveMStrip->Size = System::Drawing::Size(74, 23);
			this->reserveMStrip->Text = L"Reserve";
			this->reserveMStrip->Click += gcnew System::EventHandler(this, &Profile::reserveMStrip_Click);
			// 
			// reciptMStrip
			// 
			this->reciptMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reciptMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->reciptMStrip->Name = L"reciptMStrip";
			this->reciptMStrip->Size = System::Drawing::Size(73, 23);
			this->reciptMStrip->Text = L"Receipt";
			this->reciptMStrip->Click += gcnew System::EventHandler(this, &Profile::reciptMStrip_Click);
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
			// nameLbl
			// 
			this->nameLbl->AutoEllipsis = true;
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->Location = System::Drawing::Point(45, 342);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->nameLbl->Size = System::Drawing::Size(291, 28);
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
			this->idNumLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->idNumLbl->Location = System::Drawing::Point(46, 405);
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
			this->accTypeLbl->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->accTypeLbl->Location = System::Drawing::Point(46, 437);
			this->accTypeLbl->Name = L"accTypeLbl";
			this->accTypeLbl->Size = System::Drawing::Size(124, 20);
			this->accTypeLbl->TabIndex = 16;
			this->accTypeLbl->Text = L"STUDENT TYPE";
			this->accTypeLbl->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// emailLbl
			// 
			this->emailLbl->AutoEllipsis = true;
			this->emailLbl->AutoSize = true;
			this->emailLbl->BackColor = System::Drawing::Color::Transparent;
			this->emailLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLbl->ForeColor = System::Drawing::SystemColors::ControlText;
			this->emailLbl->Location = System::Drawing::Point(46, 370);
			this->emailLbl->Name = L"emailLbl";
			this->emailLbl->Size = System::Drawing::Size(227, 24);
			this->emailLbl->TabIndex = 17;
			this->emailLbl->Text = L"sampleemail@rtu.edu.ph";
			// 
			// editBtn
			// 
			this->editBtn->BackColor = System::Drawing::Color::MediumBlue;
			this->editBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editBtn->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->editBtn->Location = System::Drawing::Point(50, 477);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(269, 40);
			this->editBtn->TabIndex = 20;
			this->editBtn->Text = L"EDIT";
			this->editBtn->UseVisualStyleBackColor = false;
			this->editBtn->Click += gcnew System::EventHandler(this, &Profile::editBtn_Click);
			// 
			// profileImg
			// 
			this->profileImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.Image")));
			this->profileImg->Location = System::Drawing::Point(53, 57);
			this->profileImg->Name = L"profileImg";
			this->profileImg->Size = System::Drawing::Size(266, 266);
			this->profileImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profileImg->TabIndex = 23;
			this->profileImg->TabStop = false;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(372, 567);
			this->ControlBox = false;
			this->Controls->Add(this->profileImg);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(this->emailLbl);
			this->Controls->Add(this->accTypeLbl);
			this->Controls->Add(this->idNumLbl);
			this->Controls->Add(this->nameLbl);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		User^ user;

	private: void fetchUserData();

	private: void displayData();

	//private: System::Void profileImg_Click(System::Object^ sender, System::EventArgs^ e);

	// Profile Menu
	private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// Reservation Menu
	private: System::Void reserveMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void reciptMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// Exit Menu
	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	// Edit Button
	private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);

};
}

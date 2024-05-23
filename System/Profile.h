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

    public ref class Profile : public System::Windows::Forms::Form
    {
    public:
        Profile(User^ user);

    protected:
        ~Profile();

    private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
    private: System::Windows::Forms::ToolStripMenuItem^ opt1MStrip;
    private: System::Windows::Forms::ToolStripMenuItem^ opt2MStrip;
    private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::PictureBox^ profileImg;


    private: System::Windows::Forms::PictureBox^ pictureBox3;
    private: System::Windows::Forms::PictureBox^ pictureBox2;
    private: System::Windows::Forms::PictureBox^ pictureBox1;

    private: System::Windows::Forms::Label^ emailLbl;
    private: System::Windows::Forms::Label^ accTypeLbl;
    private: System::Windows::Forms::Label^ idNumLbl;
    private: System::Windows::Forms::Label^ nameLbl;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::DataGridView^ historyTbl;
    private: System::Windows::Forms::Button^ editBtn;





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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->opt1MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->opt2MStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->profileImg = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
            this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
            this->emailLbl = (gcnew System::Windows::Forms::Label());
            this->accTypeLbl = (gcnew System::Windows::Forms::Label());
            this->idNumLbl = (gcnew System::Windows::Forms::Label());
            this->nameLbl = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->historyTbl = (gcnew System::Windows::Forms::DataGridView());
            this->editBtn = (gcnew System::Windows::Forms::Button());
            this->menuStrip1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
            this->panel1->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyTbl))->BeginInit();
            this->SuspendLayout();
            // 
            // profileMStrip
            // 
            this->profileMStrip->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
            this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->profileMStrip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->profileMStrip->Name = L"profileMStrip";
            this->profileMStrip->Size = System::Drawing::Size(77, 27);
            this->profileMStrip->Text = L"Profile";
            this->profileMStrip->Click += gcnew System::EventHandler(this, &Profile::profileMStrip_Click);
            // 
            // opt1MStrip
            // 
            this->opt1MStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->opt1MStrip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->opt1MStrip->Name = L"opt1MStrip";
            this->opt1MStrip->Size = System::Drawing::Size(84, 27);
            this->opt1MStrip->Text = L"Reserve";
            this->opt1MStrip->Click += gcnew System::EventHandler(this, &Profile::opt1MStrip_Click);
            // 
            // opt2MStrip
            // 
            this->opt2MStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->opt2MStrip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->opt2MStrip->Name = L"opt2MStrip";
            this->opt2MStrip->Size = System::Drawing::Size(80, 27);
            this->opt2MStrip->Text = L"Receipt";
            this->opt2MStrip->Click += gcnew System::EventHandler(this, &Profile::opt2MStrip_Click);
            // 
            // exitMStrip
            // 
            this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->exitMStrip->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->exitMStrip->Name = L"exitMStrip";
            this->exitMStrip->Size = System::Drawing::Size(54, 27);
            this->exitMStrip->Text = L"Exit";
            this->exitMStrip->Click += gcnew System::EventHandler(this, &Profile::exitMStrip_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
                static_cast<System::Int32>(static_cast<System::Byte>(177)));
            this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
            this->menuStrip1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->profileMStrip, this->opt1MStrip,
                    this->opt2MStrip, this->exitMStrip
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1293, 31);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // profileImg
            // 
            this->profileImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.BackgroundImage")));
            this->profileImg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->profileImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profileImg.Image")));
            this->profileImg->Location = System::Drawing::Point(46, 42);
            this->profileImg->Name = L"profileImg";
            this->profileImg->Size = System::Drawing::Size(270, 270);
            this->profileImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->profileImg->TabIndex = 28;
            this->profileImg->TabStop = false;
            // 
            // pictureBox3
            // 
            this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
            this->pictureBox3->Location = System::Drawing::Point(46, 411);
            this->pictureBox3->Name = L"pictureBox3";
            this->pictureBox3->Size = System::Drawing::Size(25, 25);
            this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox3->TabIndex = 36;
            this->pictureBox3->TabStop = false;
            // 
            // pictureBox2
            // 
            this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
            this->pictureBox2->Location = System::Drawing::Point(46, 443);
            this->pictureBox2->Name = L"pictureBox2";
            this->pictureBox2->Size = System::Drawing::Size(25, 25);
            this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox2->TabIndex = 35;
            this->pictureBox2->TabStop = false;
            // 
            // pictureBox1
            // 
            this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
            this->pictureBox1->Location = System::Drawing::Point(46, 379);
            this->pictureBox1->Name = L"pictureBox1";
            this->pictureBox1->Size = System::Drawing::Size(25, 25);
            this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
            this->pictureBox1->TabIndex = 34;
            this->pictureBox1->TabStop = false;
            // 
            // emailLbl
            // 
            this->emailLbl->AutoEllipsis = true;
            this->emailLbl->AutoSize = true;
            this->emailLbl->BackColor = System::Drawing::Color::Transparent;
            this->emailLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->emailLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->emailLbl->Location = System::Drawing::Point(78, 379);
            this->emailLbl->Name = L"emailLbl";
            this->emailLbl->Size = System::Drawing::Size(238, 26);
            this->emailLbl->TabIndex = 32;
            this->emailLbl->Text = L"sampleemail@rtu.edu.ph";
            // 
            // accTypeLbl
            // 
            this->accTypeLbl->AutoSize = true;
            this->accTypeLbl->BackColor = System::Drawing::Color::Transparent;
            this->accTypeLbl->Cursor = System::Windows::Forms::Cursors::Default;
            this->accTypeLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->accTypeLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->accTypeLbl->Location = System::Drawing::Point(78, 443);
            this->accTypeLbl->Name = L"accTypeLbl";
            this->accTypeLbl->Size = System::Drawing::Size(146, 26);
            this->accTypeLbl->TabIndex = 31;
            this->accTypeLbl->Text = L"STUDENT TYPE";
            this->accTypeLbl->TextAlign = System::Drawing::ContentAlignment::TopRight;
            // 
            // idNumLbl
            // 
            this->idNumLbl->AutoSize = true;
            this->idNumLbl->BackColor = System::Drawing::Color::Transparent;
            this->idNumLbl->Cursor = System::Windows::Forms::Cursors::Default;
            this->idNumLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->idNumLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->idNumLbl->Location = System::Drawing::Point(78, 411);
            this->idNumLbl->Name = L"idNumLbl";
            this->idNumLbl->Size = System::Drawing::Size(131, 26);
            this->idNumLbl->TabIndex = 30;
            this->idNumLbl->Text = L"2023 - 666666";
            // 
            // nameLbl
            // 
            this->nameLbl->AutoEllipsis = true;
            this->nameLbl->AutoSize = true;
            this->nameLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->nameLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->nameLbl->Location = System::Drawing::Point(40, 331);
            this->nameLbl->Name = L"nameLbl";
            this->nameLbl->RightToLeft = System::Windows::Forms::RightToLeft::No;
            this->nameLbl->Size = System::Drawing::Size(219, 36);
            this->nameLbl->TabIndex = 29;
            this->nameLbl->Text = L"Sample, Sample";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::SystemColors::ControlLightLight;
            this->panel1->Controls->Add(this->historyTbl);
            this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->panel1->Location = System::Drawing::Point(365, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(930, 560);
            this->panel1->TabIndex = 37;
            // 
            // historyTbl
            // 
            this->historyTbl->AllowUserToAddRows = false;
            this->historyTbl->AllowUserToDeleteRows = false;
            this->historyTbl->AllowUserToResizeColumns = false;
            this->historyTbl->AllowUserToResizeRows = false;
            this->historyTbl->BackgroundColor = System::Drawing::Color::WhiteSmoke;
            this->historyTbl->BorderStyle = System::Windows::Forms::BorderStyle::None;
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
            this->historyTbl->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->historyTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)),
                static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(177)));
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)),
                static_cast<System::Int32>(static_cast<System::Byte>(124)), static_cast<System::Int32>(static_cast<System::Byte>(119)));
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)),
                static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
            this->historyTbl->DefaultCellStyle = dataGridViewCellStyle2;
            this->historyTbl->Location = System::Drawing::Point(29, 40);
            this->historyTbl->MultiSelect = false;
            this->historyTbl->Name = L"historyTbl";
            this->historyTbl->ReadOnly = true;
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
            this->historyTbl->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
            this->historyTbl->RowHeadersWidth = 51;
            this->historyTbl->RowTemplate->Height = 24;
            this->historyTbl->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->historyTbl->Size = System::Drawing::Size(873, 486);
            this->historyTbl->TabIndex = 4;
            this->historyTbl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Profile::historyTbl_CellContentClick);
            // 
            // editBtn
            // 
            this->editBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(159)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
                static_cast<System::Int32>(static_cast<System::Byte>(119)));
            this->editBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->editBtn->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->editBtn->ForeColor = System::Drawing::SystemColors::Control;
            this->editBtn->Location = System::Drawing::Point(46, 489);
            this->editBtn->Name = L"editBtn";
            this->editBtn->Size = System::Drawing::Size(270, 37);
            this->editBtn->TabIndex = 38;
            this->editBtn->Text = L"EDIT";
            this->editBtn->UseVisualStyleBackColor = false;
            this->editBtn->Click += gcnew System::EventHandler(this, &Profile::editBtn_Click);
            // 
            // Profile
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
                static_cast<System::Int32>(static_cast<System::Byte>(177)));
            this->ClientSize = System::Drawing::Size(1293, 555);
            this->Controls->Add(this->editBtn);
            this->Controls->Add(this->profileImg);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->pictureBox3);
            this->Controls->Add(this->pictureBox2);
            this->Controls->Add(this->pictureBox1);
            this->Controls->Add(this->emailLbl);
            this->Controls->Add(this->accTypeLbl);
            this->Controls->Add(this->idNumLbl);
            this->Controls->Add(this->nameLbl);
            this->Controls->Add(this->menuStrip1);
            this->ForeColor = System::Drawing::SystemColors::ControlText;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"Profile";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"CLASSBOOK";
            this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profileImg))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
            this->panel1->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->historyTbl))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        // END OF AUTO GENERATED CODE

        private: MySqlConnection^ conn;
        private: User^ user = gcnew User();

           /*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS---------------------------------------------------------------------*/

        private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e);

        private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);

        private: System::Void opt1MStrip_Click(System::Object^ sender, System::EventArgs^ e);

        private: System::Void opt2MStrip_Click(System::Object^ sender, System::EventArgs^ e);

        private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

        private: System::Void historyTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
        
        private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e);
               
        /*--------------------------------------------------------------------------------HELPER FUNCTIONS-----------------------------------------------------------------------*/

        private: void fetchUserData();

        private: void displayData();

        private: void deletePassedRoomList(void);

        private: void fillTable();

        /*-----------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


};
}

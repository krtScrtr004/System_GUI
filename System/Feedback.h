#pragma once
#include "Room.h"
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	public ref class Feedback : public System::Windows::Forms::Form
	{
	public:
		Feedback(User^ otherUser, Room^ otherRoom);

	protected:
		~Feedback();

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ feedbackIcon;
	private: System::Windows::Forms::Label^ fdBclLbl;
	private: System::Windows::Forms::TextBox^ fdBackTxtBox;
	private: System::Windows::Forms::TextBox^ outTimeTxtBox;
	private: System::Windows::Forms::TextBox^ inTimeTxtBox;
	private: System::Windows::Forms::TextBox^ dateTxtBox;
	private: System::Windows::Forms::TextBox^ rcodeTxtBox;
	private: System::Windows::Forms::PictureBox^ durationIcon;
	private: System::Windows::Forms::PictureBox^ timeIcon;
	private: System::Windows::Forms::PictureBox^ dateIcon;
	private: System::Windows::Forms::PictureBox^ bldgIcon;
	private: System::Windows::Forms::PictureBox^ rcodeIcon;
	private: System::Windows::Forms::TextBox^ bldgTxtBox;
	private: System::Windows::Forms::PictureBox^ accTypeIcon;
	private: System::Windows::Forms::PictureBox^ emailIcon;
	private: System::Windows::Forms::PictureBox^ idNumIcon;
	private: System::Windows::Forms::PictureBox^ nameIcon;
	private: System::Windows::Forms::Label^ accTypeDataLbl;
	private: System::Windows::Forms::Label^ emailDataLbl;
	private: System::Windows::Forms::Label^ idNumDataLbl;
	private: System::Windows::Forms::Label^ nameDataLbl;
	private: System::Windows::Forms::Label^ reservationInfoLbl;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Feedback::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->feedbackIcon = (gcnew System::Windows::Forms::PictureBox());
			this->fdBclLbl = (gcnew System::Windows::Forms::Label());
			this->fdBackTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->outTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->inTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->durationIcon = (gcnew System::Windows::Forms::PictureBox());
			this->timeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->dateIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgIcon = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->bldgTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->accTypeIcon = (gcnew System::Windows::Forms::PictureBox());
			this->emailIcon = (gcnew System::Windows::Forms::PictureBox());
			this->idNumIcon = (gcnew System::Windows::Forms::PictureBox());
			this->nameIcon = (gcnew System::Windows::Forms::PictureBox());
			this->accTypeDataLbl = (gcnew System::Windows::Forms::Label());
			this->emailDataLbl = (gcnew System::Windows::Forms::Label());
			this->idNumDataLbl = (gcnew System::Windows::Forms::Label());
			this->nameDataLbl = (gcnew System::Windows::Forms::Label());
			this->reservationInfoLbl = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedbackIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emailIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nameIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->feedbackIcon);
			this->panel1->Controls->Add(this->fdBclLbl);
			this->panel1->Controls->Add(this->fdBackTxtBox);
			this->panel1->Location = System::Drawing::Point(328, -1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(522, 486);
			this->panel1->TabIndex = 78;
			// 
			// feedbackIcon
			// 
			this->feedbackIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"feedbackIcon.Image")));
			this->feedbackIcon->Location = System::Drawing::Point(51, 34);
			this->feedbackIcon->Name = L"feedbackIcon";
			this->feedbackIcon->Size = System::Drawing::Size(34, 27);
			this->feedbackIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->feedbackIcon->TabIndex = 65;
			this->feedbackIcon->TabStop = false;
			// 
			// fdBclLbl
			// 
			this->fdBclLbl->AutoSize = true;
			this->fdBclLbl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->fdBclLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdBclLbl->Location = System::Drawing::Point(91, 34);
			this->fdBclLbl->Name = L"fdBclLbl";
			this->fdBclLbl->Size = System::Drawing::Size(110, 26);
			this->fdBclLbl->TabIndex = 11;
			this->fdBclLbl->Text = L"Feedback:";
			// 
			// fdBackTxtBox
			// 
			this->fdBackTxtBox->BackColor = System::Drawing::Color::White;
			this->fdBackTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->fdBackTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdBackTxtBox->Location = System::Drawing::Point(50, 76);
			this->fdBackTxtBox->Multiline = true;
			this->fdBackTxtBox->Name = L"fdBackTxtBox";
			this->fdBackTxtBox->ReadOnly = true;
			this->fdBackTxtBox->Size = System::Drawing::Size(428, 369);
			this->fdBackTxtBox->TabIndex = 12;
			// 
			// outTimeTxtBox
			// 
			this->outTimeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->outTimeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->outTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->outTimeTxtBox->Location = System::Drawing::Point(70, 423);
			this->outTimeTxtBox->Multiline = true;
			this->outTimeTxtBox->Name = L"outTimeTxtBox";
			this->outTimeTxtBox->ReadOnly = true;
			this->outTimeTxtBox->Size = System::Drawing::Size(209, 31);
			this->outTimeTxtBox->TabIndex = 72;
			this->outTimeTxtBox->Text = L"OUT TIME";
			// 
			// inTimeTxtBox
			// 
			this->inTimeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->inTimeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->inTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->inTimeTxtBox->Location = System::Drawing::Point(70, 384);
			this->inTimeTxtBox->Multiline = true;
			this->inTimeTxtBox->Name = L"inTimeTxtBox";
			this->inTimeTxtBox->ReadOnly = true;
			this->inTimeTxtBox->Size = System::Drawing::Size(209, 33);
			this->inTimeTxtBox->TabIndex = 71;
			this->inTimeTxtBox->Text = L"IN TIME";
			// 
			// dateTxtBox
			// 
			this->dateTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->dateTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dateTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->dateTxtBox->Location = System::Drawing::Point(70, 342);
			this->dateTxtBox->Multiline = true;
			this->dateTxtBox->Name = L"dateTxtBox";
			this->dateTxtBox->ReadOnly = true;
			this->dateTxtBox->Size = System::Drawing::Size(209, 36);
			this->dateTxtBox->TabIndex = 70;
			this->dateTxtBox->Text = L"DATE";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->rcodeTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(70, 262);
			this->rcodeTxtBox->Multiline = true;
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->ReadOnly = true;
			this->rcodeTxtBox->Size = System::Drawing::Size(209, 34);
			this->rcodeTxtBox->TabIndex = 68;
			this->rcodeTxtBox->Text = L"ROOM CODE";
			// 
			// durationIcon
			// 
			this->durationIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"durationIcon.Image")));
			this->durationIcon->Location = System::Drawing::Point(35, 420);
			this->durationIcon->Name = L"durationIcon";
			this->durationIcon->Size = System::Drawing::Size(29, 27);
			this->durationIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->durationIcon->TabIndex = 77;
			this->durationIcon->TabStop = false;
			// 
			// timeIcon
			// 
			this->timeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"timeIcon.Image")));
			this->timeIcon->Location = System::Drawing::Point(35, 381);
			this->timeIcon->Name = L"timeIcon";
			this->timeIcon->Size = System::Drawing::Size(29, 27);
			this->timeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->timeIcon->TabIndex = 76;
			this->timeIcon->TabStop = false;
			// 
			// dateIcon
			// 
			this->dateIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"dateIcon.Image")));
			this->dateIcon->Location = System::Drawing::Point(35, 339);
			this->dateIcon->Name = L"dateIcon";
			this->dateIcon->Size = System::Drawing::Size(29, 27);
			this->dateIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->dateIcon->TabIndex = 75;
			this->dateIcon->TabStop = false;
			// 
			// bldgIcon
			// 
			this->bldgIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bldgIcon.Image")));
			this->bldgIcon->Location = System::Drawing::Point(35, 299);
			this->bldgIcon->Name = L"bldgIcon";
			this->bldgIcon->Size = System::Drawing::Size(29, 27);
			this->bldgIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bldgIcon->TabIndex = 74;
			this->bldgIcon->TabStop = false;
			// 
			// rcodeIcon
			// 
			this->rcodeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rcodeIcon.Image")));
			this->rcodeIcon->Location = System::Drawing::Point(35, 259);
			this->rcodeIcon->Name = L"rcodeIcon";
			this->rcodeIcon->Size = System::Drawing::Size(29, 27);
			this->rcodeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rcodeIcon->TabIndex = 73;
			this->rcodeIcon->TabStop = false;
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->bldgTxtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->bldgTxtBox->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgTxtBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bldgTxtBox->Location = System::Drawing::Point(70, 302);
			this->bldgTxtBox->Multiline = true;
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->ReadOnly = true;
			this->bldgTxtBox->Size = System::Drawing::Size(209, 34);
			this->bldgTxtBox->TabIndex = 69;
			this->bldgTxtBox->Text = L"BUILDING";
			// 
			// accTypeIcon
			// 
			this->accTypeIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"accTypeIcon.Image")));
			this->accTypeIcon->Location = System::Drawing::Point(35, 203);
			this->accTypeIcon->Name = L"accTypeIcon";
			this->accTypeIcon->Size = System::Drawing::Size(29, 27);
			this->accTypeIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->accTypeIcon->TabIndex = 73;
			this->accTypeIcon->TabStop = false;
			// 
			// emailIcon
			// 
			this->emailIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"emailIcon.Image")));
			this->emailIcon->Location = System::Drawing::Point(35, 167);
			this->emailIcon->Name = L"emailIcon";
			this->emailIcon->Size = System::Drawing::Size(29, 27);
			this->emailIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->emailIcon->TabIndex = 72;
			this->emailIcon->TabStop = false;
			// 
			// idNumIcon
			// 
			this->idNumIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"idNumIcon.Image")));
			this->idNumIcon->Location = System::Drawing::Point(35, 128);
			this->idNumIcon->Name = L"idNumIcon";
			this->idNumIcon->Size = System::Drawing::Size(29, 27);
			this->idNumIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->idNumIcon->TabIndex = 71;
			this->idNumIcon->TabStop = false;
			// 
			// nameIcon
			// 
			this->nameIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"nameIcon.Image")));
			this->nameIcon->Location = System::Drawing::Point(35, 91);
			this->nameIcon->Name = L"nameIcon";
			this->nameIcon->Size = System::Drawing::Size(29, 27);
			this->nameIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->nameIcon->TabIndex = 70;
			this->nameIcon->TabStop = false;
			// 
			// accTypeDataLbl
			// 
			this->accTypeDataLbl->AutoSize = true;
			this->accTypeDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accTypeDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->accTypeDataLbl->Location = System::Drawing::Point(70, 204);
			this->accTypeDataLbl->Name = L"accTypeDataLbl";
			this->accTypeDataLbl->Size = System::Drawing::Size(156, 26);
			this->accTypeDataLbl->TabIndex = 69;
			this->accTypeDataLbl->Text = L"ACCOUNT TYPE ";
			// 
			// emailDataLbl
			// 
			this->emailDataLbl->AutoEllipsis = true;
			this->emailDataLbl->AutoSize = true;
			this->emailDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->emailDataLbl->Location = System::Drawing::Point(70, 168);
			this->emailDataLbl->Name = L"emailDataLbl";
			this->emailDataLbl->Size = System::Drawing::Size(71, 26);
			this->emailDataLbl->TabIndex = 68;
			this->emailDataLbl->Text = L"EMAIL ";
			// 
			// idNumDataLbl
			// 
			this->idNumDataLbl->AutoSize = true;
			this->idNumDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->idNumDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->idNumDataLbl->Location = System::Drawing::Point(70, 129);
			this->idNumDataLbl->Name = L"idNumDataLbl";
			this->idNumDataLbl->Size = System::Drawing::Size(117, 26);
			this->idNumDataLbl->TabIndex = 67;
			this->idNumDataLbl->Text = L"ID NUMBER ";
			// 
			// nameDataLbl
			// 
			this->nameDataLbl->AutoEllipsis = true;
			this->nameDataLbl->AutoSize = true;
			this->nameDataLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameDataLbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(9)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->nameDataLbl->Location = System::Drawing::Point(70, 92);
			this->nameDataLbl->Name = L"nameDataLbl";
			this->nameDataLbl->Size = System::Drawing::Size(69, 26);
			this->nameDataLbl->TabIndex = 66;
			this->nameDataLbl->Text = L"NAME ";
			// 
			// reservationInfoLbl
			// 
			this->reservationInfoLbl->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reservationInfoLbl->Location = System::Drawing::Point(30, 33);
			this->reservationInfoLbl->Name = L"reservationInfoLbl";
			this->reservationInfoLbl->Size = System::Drawing::Size(258, 30);
			this->reservationInfoLbl->TabIndex = 79;
			this->reservationInfoLbl->Text = L"RESERVATION:";
			// 
			// Feedback
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(177)));
			this->ClientSize = System::Drawing::Size(842, 478);
			this->Controls->Add(this->reservationInfoLbl);
			this->Controls->Add(this->accTypeIcon);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->emailIcon);
			this->Controls->Add(this->outTimeTxtBox);
			this->Controls->Add(this->idNumIcon);
			this->Controls->Add(this->inTimeTxtBox);
			this->Controls->Add(this->nameIcon);
			this->Controls->Add(this->dateTxtBox);
			this->Controls->Add(this->accTypeDataLbl);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->emailDataLbl);
			this->Controls->Add(this->durationIcon);
			this->Controls->Add(this->idNumDataLbl);
			this->Controls->Add(this->timeIcon);
			this->Controls->Add(this->nameDataLbl);
			this->Controls->Add(this->dateIcon);
			this->Controls->Add(this->bldgIcon);
			this->Controls->Add(this->rcodeIcon);
			this->Controls->Add(this->bldgTxtBox);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Feedback";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CLASSBOOK";
			this->Load += gcnew System::EventHandler(this, &Feedback::Feedback_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->feedbackIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->durationIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dateIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bldgIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rcodeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->accTypeIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->emailIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->idNumIcon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nameIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// END OF AUTO GENERATED CODE

	private: MySqlConnection^ conn = gcnew MySqlConnection();
	private: User^ user = gcnew User();
	private: Room^ room = gcnew Room();

	/*----------------------------------------------------------------------------EVENT HANDLER FUNCTIONS-----------------------------------------------------------------------*/

	private: System::Void Feedback_Load(System::Object^ sender, System::EventArgs^ e);

	/*--------------------------------------------------------------------------------HELPER FUNCTIONS--------------------------------------------------------------------------*/

	private: void fecthUserData(void);

	private: void fetchRoomData(void);

	private: void fetchResrvationData(void);

	private: void fetchFeedbackData(void);

	/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
};
}

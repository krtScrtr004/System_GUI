#pragma once
#include "User.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Receipt
	/// </summary>
	public ref class Receipt : public System::Windows::Forms::Form
	{
	public:
		Receipt(User^ other);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Receipt();

	private: System::Windows::Forms::PictureBox^ roomImg;
	protected:
	private: System::Windows::Forms::Label^ rcodeLbl;

	private: System::Windows::Forms::Label^ fateLbl;
	private: System::Windows::Forms::Label^ inTimeLbl;
	private: System::Windows::Forms::Label^ outTimeLbl;
	private: System::Windows::Forms::TextBox^ rcodeTxtBox;

	private: System::Windows::Forms::TextBox^ dateTxtBox;

	private: System::Windows::Forms::TextBox^ inTimeTxtBox;
	private: System::Windows::Forms::TextBox^ outTimeTxtBox;
	private: System::Windows::Forms::Label^ fdbckTxtBox;
	private: System::Windows::Forms::TextBox^ fdBackTxtBox;
	private: System::Windows::Forms::Button^ submitBtn;
	private: System::Windows::Forms::TextBox^ bldgTxtBox;
	private: System::Windows::Forms::Label^ bldgLbl;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Receipt::typeid));
			this->roomImg = (gcnew System::Windows::Forms::PictureBox());
			this->rcodeLbl = (gcnew System::Windows::Forms::Label());
			this->fateLbl = (gcnew System::Windows::Forms::Label());
			this->inTimeLbl = (gcnew System::Windows::Forms::Label());
			this->outTimeLbl = (gcnew System::Windows::Forms::Label());
			this->rcodeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->dateTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->inTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->outTimeTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->fdbckTxtBox = (gcnew System::Windows::Forms::Label());
			this->fdBackTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->submitBtn = (gcnew System::Windows::Forms::Button());
			this->bldgTxtBox = (gcnew System::Windows::Forms::TextBox());
			this->bldgLbl = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->BeginInit();
			this->SuspendLayout();
			// 
			// roomImg
			// 
			this->roomImg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.BackgroundImage")));
			this->roomImg->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roomImg.InitialImage")));
			this->roomImg->Location = System::Drawing::Point(37, 37);
			this->roomImg->Name = L"roomImg";
			this->roomImg->Size = System::Drawing::Size(212, 189);
			this->roomImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->roomImg->TabIndex = 0;
			this->roomImg->TabStop = false;
			// 
			// rcodeLbl
			// 
			this->rcodeLbl->AutoSize = true;
			this->rcodeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeLbl->Location = System::Drawing::Point(281, 37);
			this->rcodeLbl->Name = L"rcodeLbl";
			this->rcodeLbl->Size = System::Drawing::Size(124, 22);
			this->rcodeLbl->TabIndex = 1;
			this->rcodeLbl->Text = L"ROOM CODE:";
			// 
			// fateLbl
			// 
			this->fateLbl->AutoSize = true;
			this->fateLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fateLbl->Location = System::Drawing::Point(281, 115);
			this->fateLbl->Name = L"fateLbl";
			this->fateLbl->Size = System::Drawing::Size(59, 22);
			this->fateLbl->TabIndex = 3;
			this->fateLbl->Text = L"DATE:";
			// 
			// inTimeLbl
			// 
			this->inTimeLbl->AutoSize = true;
			this->inTimeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeLbl->Location = System::Drawing::Point(281, 155);
			this->inTimeLbl->Name = L"inTimeLbl";
			this->inTimeLbl->Size = System::Drawing::Size(80, 22);
			this->inTimeLbl->TabIndex = 4;
			this->inTimeLbl->Text = L"IN TIME:";
			// 
			// outTimeLbl
			// 
			this->outTimeLbl->AutoSize = true;
			this->outTimeLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeLbl->Location = System::Drawing::Point(281, 198);
			this->outTimeLbl->Name = L"outTimeLbl";
			this->outTimeLbl->Size = System::Drawing::Size(98, 22);
			this->outTimeLbl->TabIndex = 5;
			this->outTimeLbl->Text = L"OUT TIME:";
			// 
			// rcodeTxtBox
			// 
			this->rcodeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcodeTxtBox->Location = System::Drawing::Point(434, 34);
			this->rcodeTxtBox->Name = L"rcodeTxtBox";
			this->rcodeTxtBox->ReadOnly = true;
			this->rcodeTxtBox->Size = System::Drawing::Size(244, 31);
			this->rcodeTxtBox->TabIndex = 6;
			this->rcodeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dateTxtBox
			// 
			this->dateTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTxtBox->Location = System::Drawing::Point(434, 112);
			this->dateTxtBox->Name = L"dateTxtBox";
			this->dateTxtBox->ReadOnly = true;
			this->dateTxtBox->Size = System::Drawing::Size(244, 31);
			this->dateTxtBox->TabIndex = 8;
			this->dateTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// inTimeTxtBox
			// 
			this->inTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inTimeTxtBox->Location = System::Drawing::Point(434, 152);
			this->inTimeTxtBox->Name = L"inTimeTxtBox";
			this->inTimeTxtBox->ReadOnly = true;
			this->inTimeTxtBox->Size = System::Drawing::Size(244, 31);
			this->inTimeTxtBox->TabIndex = 9;
			this->inTimeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outTimeTxtBox
			// 
			this->outTimeTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outTimeTxtBox->Location = System::Drawing::Point(434, 195);
			this->outTimeTxtBox->Name = L"outTimeTxtBox";
			this->outTimeTxtBox->ReadOnly = true;
			this->outTimeTxtBox->Size = System::Drawing::Size(244, 31);
			this->outTimeTxtBox->TabIndex = 10;
			this->outTimeTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fdbckTxtBox
			// 
			this->fdbckTxtBox->AutoSize = true;
			this->fdbckTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdbckTxtBox->Location = System::Drawing::Point(34, 243);
			this->fdbckTxtBox->Name = L"fdbckTxtBox";
			this->fdbckTxtBox->Size = System::Drawing::Size(75, 19);
			this->fdbckTxtBox->TabIndex = 11;
			this->fdbckTxtBox->Text = L"Feedback:";
			// 
			// fdBackTxtBox
			// 
			this->fdBackTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fdBackTxtBox->Location = System::Drawing::Point(38, 265);
			this->fdBackTxtBox->Multiline = true;
			this->fdBackTxtBox->Name = L"fdBackTxtBox";
			this->fdBackTxtBox->Size = System::Drawing::Size(641, 186);
			this->fdBackTxtBox->TabIndex = 12;
			this->fdBackTxtBox->TextChanged += gcnew System::EventHandler(this, &Receipt::fdBackTxtBox_TextChanged);
			// 
			// submitBtn
			// 
			this->submitBtn->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitBtn->Location = System::Drawing::Point(38, 458);
			this->submitBtn->Name = L"submitBtn";
			this->submitBtn->Size = System::Drawing::Size(641, 36);
			this->submitBtn->TabIndex = 13;
			this->submitBtn->Text = L"SUBMIT";
			this->submitBtn->UseVisualStyleBackColor = true;
			this->submitBtn->Click += gcnew System::EventHandler(this, &Receipt::submitBtn_Click);
			// 
			// bldgTxtBox
			// 
			this->bldgTxtBox->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgTxtBox->Location = System::Drawing::Point(434, 71);
			this->bldgTxtBox->Name = L"bldgTxtBox";
			this->bldgTxtBox->ReadOnly = true;
			this->bldgTxtBox->Size = System::Drawing::Size(244, 31);
			this->bldgTxtBox->TabIndex = 7;
			this->bldgTxtBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bldgLbl
			// 
			this->bldgLbl->AutoSize = true;
			this->bldgLbl->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bldgLbl->Location = System::Drawing::Point(281, 74);
			this->bldgLbl->Name = L"bldgLbl";
			this->bldgLbl->Size = System::Drawing::Size(97, 22);
			this->bldgLbl->TabIndex = 2;
			this->bldgLbl->Text = L"BUILDING:";
			// 
			// Receipt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 523);
			this->Controls->Add(this->submitBtn);
			this->Controls->Add(this->fdBackTxtBox);
			this->Controls->Add(this->fdbckTxtBox);
			this->Controls->Add(this->outTimeTxtBox);
			this->Controls->Add(this->inTimeTxtBox);
			this->Controls->Add(this->dateTxtBox);
			this->Controls->Add(this->bldgTxtBox);
			this->Controls->Add(this->rcodeTxtBox);
			this->Controls->Add(this->outTimeLbl);
			this->Controls->Add(this->inTimeLbl);
			this->Controls->Add(this->fateLbl);
			this->Controls->Add(this->bldgLbl);
			this->Controls->Add(this->rcodeLbl);
			this->Controls->Add(this->roomImg);
			this->Name = L"Receipt";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Receipt";
			this->Load += gcnew System::EventHandler(this, &Receipt::Receipt_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomImg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		MySqlConnection^ conn = gcnew MySqlConnection();
		User^ user = gcnew User();

		String^ tempFeedback;
	
	private: System::Void Receipt_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void fdBackTxtBox_TextChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void submitBtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}

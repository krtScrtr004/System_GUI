#pragma once
#include "Utils.h"

namespace System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Reservation
	/// </summary>
	public ref class Reservation : public System::Windows::Forms::Form
	{
	public:
		Reservation(User^ other);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Reservation();
		
	private: System::Windows::Forms::Label^ roomReserveLbl;
	protected:
	private: System::Windows::Forms::RadioButton^ clRBtn;
	private: System::Windows::Forms::RadioButton^ labRBtn;
	private: System::Windows::Forms::DataGridView^ roomsTbl;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ profileMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ reserveMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ receiptMSrip;

	private: System::Windows::Forms::ToolStripMenuItem^ aboutMStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ exitMStrip;

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
			this->roomReserveLbl = (gcnew System::Windows::Forms::Label());
			this->clRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->labRBtn = (gcnew System::Windows::Forms::RadioButton());
			this->roomsTbl = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->profileMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reserveMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->receiptMSrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitMStrip = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// roomReserveLbl
			// 
			this->roomReserveLbl->AutoSize = true;
			this->roomReserveLbl->Font = (gcnew System::Drawing::Font(L"Impact", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomReserveLbl->Location = System::Drawing::Point(35, 44);
			this->roomReserveLbl->Name = L"roomReserveLbl";
			this->roomReserveLbl->Size = System::Drawing::Size(198, 35);
			this->roomReserveLbl->TabIndex = 0;
			this->roomReserveLbl->Text = L"RESERVE A ROOM";
			// 
			// clRBtn
			// 
			this->clRBtn->AutoSize = true;
			this->clRBtn->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clRBtn->Location = System::Drawing::Point(240, 57);
			this->clRBtn->Name = L"clRBtn";
			this->clRBtn->Size = System::Drawing::Size(109, 24);
			this->clRBtn->TabIndex = 1;
			this->clRBtn->TabStop = true;
			this->clRBtn->Text = L"Classroom";
			this->clRBtn->UseVisualStyleBackColor = true;
			this->clRBtn->CheckedChanged += gcnew System::EventHandler(this, &Reservation::clRBtn_CheckedChanged);
			// 
			// labRBtn
			// 
			this->labRBtn->AutoSize = true;
			this->labRBtn->Font = (gcnew System::Drawing::Font(L"Gadugi", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labRBtn->Location = System::Drawing::Point(355, 57);
			this->labRBtn->Name = L"labRBtn";
			this->labRBtn->Size = System::Drawing::Size(112, 24);
			this->labRBtn->TabIndex = 2;
			this->labRBtn->TabStop = true;
			this->labRBtn->Text = L"Laboratory";
			this->labRBtn->UseVisualStyleBackColor = true;
			this->labRBtn->CheckedChanged += gcnew System::EventHandler(this, &Reservation::labRBtn_CheckedChanged);
			// 
			// roomsTbl
			// 
			this->roomsTbl->AllowUserToAddRows = false;
			this->roomsTbl->AllowUserToDeleteRows = false;
			this->roomsTbl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->roomsTbl->Location = System::Drawing::Point(41, 95);
			this->roomsTbl->MultiSelect = false;
			this->roomsTbl->Name = L"roomsTbl";
			this->roomsTbl->ReadOnly = true;
			this->roomsTbl->RowHeadersWidth = 51;
			this->roomsTbl->RowTemplate->Height = 24;
			this->roomsTbl->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->roomsTbl->Size = System::Drawing::Size(426, 617);
			this->roomsTbl->TabIndex = 3;
			this->roomsTbl->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Reservation::roomsTbl_CellContentClick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->profileMStrip, this->reserveMStrip,
					this->receiptMSrip, this->aboutMStrip, this->exitMStrip
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 2, 0, 2);
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(510, 30);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// profileMStrip
			// 
			this->profileMStrip->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->profileMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->profileMStrip->Name = L"profileMStrip";
			this->profileMStrip->Size = System::Drawing::Size(67, 26);
			this->profileMStrip->Text = L"Profile";
			this->profileMStrip->Click += gcnew System::EventHandler(this, &Reservation::profileMStrip_Click);
			// 
			// reserveMStrip
			// 
			this->reserveMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reserveMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->reserveMStrip->Name = L"reserveMStrip";
			this->reserveMStrip->Size = System::Drawing::Size(74, 26);
			this->reserveMStrip->Text = L"Reserve";
			this->reserveMStrip->Click += gcnew System::EventHandler(this, &Reservation::reserveMStrip_Click);
			// 
			// receiptMSrip
			// 
			this->receiptMSrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->receiptMSrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->receiptMSrip->Name = L"receiptMSrip";
			this->receiptMSrip->Size = System::Drawing::Size(73, 26);
			this->receiptMSrip->Text = L"Receipt";
			this->receiptMSrip->Click += gcnew System::EventHandler(this, &Reservation::receiptMSrip_Click);
			// 
			// aboutMStrip
			// 
			this->aboutMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->aboutMStrip->Name = L"aboutMStrip";
			this->aboutMStrip->Size = System::Drawing::Size(64, 26);
			this->aboutMStrip->Text = L"About";
			// 
			// exitMStrip
			// 
			this->exitMStrip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitMStrip->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->exitMStrip->Name = L"exitMStrip";
			this->exitMStrip->Size = System::Drawing::Size(47, 26);
			this->exitMStrip->Text = L"Exit";
			this->exitMStrip->Click += gcnew System::EventHandler(this, &Reservation::exitMStrip_Click);
			// 
			// Reservation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(510, 756);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->roomsTbl);
			this->Controls->Add(this->labRBtn);
			this->Controls->Add(this->clRBtn);
			this->Controls->Add(this->roomReserveLbl);
			this->Name = L"Reservation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reservation";
			this->Load += gcnew System::EventHandler(this, &Reservation::Reservation_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roomsTbl))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: 
		MySqlConnection^ conn = nullptr;
		User^ user = nullptr;
	
	private: System::Void Reservation_Load(System::Object^ sender, System::EventArgs^ e);
	
	private: void fillTable(void);

	private: System::Void profileMStrip_Click(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void reserveMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void receiptMSrip_Click(System::Object^ sender, System::EventArgs^ e);
		   
	//private: System::Void aboutMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void exitMStrip_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void clRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);

	private: System::Void labRBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
	
	private: System::Void roomsTbl_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
};
}

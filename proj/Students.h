#pragma once

namespace proj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Students
	/// </summary>
	public ref class Students : public System::Windows::Forms::Form
	{
	public:
		Students(void)
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
		~Students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnProceedStudent;
	private: System::Windows::Forms::RichTextBox^ rtbConcern;
	private: System::Windows::Forms::TextBox^ tbStudID;
	private: System::Windows::Forms::TextBox^ tbMidIni;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkBTDStud;



	protected:


	protected:





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Students::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnProceedStudent = (gcnew System::Windows::Forms::Button());
			this->rtbConcern = (gcnew System::Windows::Forms::RichTextBox());
			this->tbStudID = (gcnew System::Windows::Forms::TextBox());
			this->tbMidIni = (gcnew System::Windows::Forms::TextBox());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkBTDStud = (gcnew System::Windows::Forms::LinkLabel());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(1, 26);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(602, 72);
			this->panel2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(158, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(424, 45);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Concern Form for Students";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(112, 494);
			this->panel1->TabIndex = 4;
			// 
			// btnProceedStudent
			// 
			this->btnProceedStudent->BackColor = System::Drawing::Color::Maroon;
			this->btnProceedStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceedStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceedStudent->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProceedStudent->Location = System::Drawing::Point(432, 411);
			this->btnProceedStudent->Name = L"btnProceedStudent";
			this->btnProceedStudent->Size = System::Drawing::Size(149, 41);
			this->btnProceedStudent->TabIndex = 24;
			this->btnProceedStudent->Text = L"Proceed";
			this->btnProceedStudent->UseVisualStyleBackColor = false;
			// 
			// rtbConcern
			// 
			this->rtbConcern->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rtbConcern->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbConcern->Location = System::Drawing::Point(136, 302);
			this->rtbConcern->Name = L"rtbConcern";
			this->rtbConcern->Size = System::Drawing::Size(445, 96);
			this->rtbConcern->TabIndex = 23;
			this->rtbConcern->Text = L"";
			// 
			// tbStudID
			// 
			this->tbStudID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbStudID->Location = System::Drawing::Point(269, 223);
			this->tbStudID->Name = L"tbStudID";
			this->tbStudID->Size = System::Drawing::Size(312, 29);
			this->tbStudID->TabIndex = 22;
			// 
			// tbMidIni
			// 
			this->tbMidIni->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMidIni->Location = System::Drawing::Point(269, 188);
			this->tbMidIni->Name = L"tbMidIni";
			this->tbMidIni->Size = System::Drawing::Size(312, 29);
			this->tbMidIni->TabIndex = 21;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(245, 152);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(336, 29);
			this->tbFirstName->TabIndex = 20;
			// 
			// tbLastName
			// 
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(245, 117);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(336, 29);
			this->tbLastName->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(132, 274);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 25);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Your concern:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(132, 227);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 25);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Student ID:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(132, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 25);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Middle Initial:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(132, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 25);
			this->label3->TabIndex = 15;
			this->label3->Text = L"First name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(132, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Last name:";
			// 
			// linkBTDStud
			// 
			this->linkBTDStud->AutoSize = true;
			this->linkBTDStud->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkBTDStud->LinkColor = System::Drawing::Color::Maroon;
			this->linkBTDStud->Location = System::Drawing::Point(133, 431);
			this->linkBTDStud->MaximumSize = System::Drawing::Size(134, 21);
			this->linkBTDStud->MinimumSize = System::Drawing::Size(134, 21);
			this->linkBTDStud->Name = L"linkBTDStud";
			this->linkBTDStud->Size = System::Drawing::Size(134, 21);
			this->linkBTDStud->TabIndex = 25;
			this->linkBTDStud->TabStop = true;
			this->linkBTDStud->Text = L"Back to selection";
			this->linkBTDStud->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Students::linkBTDStud_LinkClicked);
			// 
			// Students
			// 
			this->AcceptButton = this->btnProceedStudent;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->linkBTDStud;
			this->ClientSize = System::Drawing::Size(595, 460);
			this->Controls->Add(this->linkBTDStud);
			this->Controls->Add(this->btnProceedStudent);
			this->Controls->Add(this->rtbConcern);
			this->Controls->Add(this->tbStudID);
			this->Controls->Add(this->tbMidIni);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(611, 499);
			this->MinimumSize = System::Drawing::Size(611, 499);
			this->Name = L"Students";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Students";
			this->Load += gcnew System::EventHandler(this, &Students::Students_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Students_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void linkBTDStud_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}
};
}

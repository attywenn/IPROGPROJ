#pragma once
namespace proj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Applicant
	/// </summary>
	public ref class Applicant : public System::Windows::Forms::Form
	{
	public:
		Applicant(void)
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
		~Applicant()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::TextBox^ tbFirstName;
	private: System::Windows::Forms::TextBox^ tbMidIni;
	private: System::Windows::Forms::TextBox^ tbAppID;
	private: System::Windows::Forms::RichTextBox^ rtbConcern;
	private: System::Windows::Forms::Button^ btnProceedApplicant;
	private: System::Windows::Forms::Button^ btnBTD;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Applicant::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->tbMidIni = (gcnew System::Windows::Forms::TextBox());
			this->tbAppID = (gcnew System::Windows::Forms::TextBox());
			this->rtbConcern = (gcnew System::Windows::Forms::RichTextBox());
			this->btnProceedApplicant = (gcnew System::Windows::Forms::Button());
			this->btnBTD = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(112, 494);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(1, 25);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(602, 76);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(130, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(452, 45);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Concern Form for Applicants\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(134, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Last name:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(134, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"First name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(134, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Middle Initial:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(134, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Applicant ID:";
			this->label5->Click += gcnew System::EventHandler(this, &Applicant::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(134, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Your concern:";
			// 
			// tbLastName
			// 
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbLastName->Location = System::Drawing::Point(247, 113);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(336, 29);
			this->tbLastName->TabIndex = 8;
			// 
			// tbFirstName
			// 
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbFirstName->Location = System::Drawing::Point(247, 148);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(336, 29);
			this->tbFirstName->TabIndex = 9;
			// 
			// tbMidIni
			// 
			this->tbMidIni->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMidIni->Location = System::Drawing::Point(271, 184);
			this->tbMidIni->Name = L"tbMidIni";
			this->tbMidIni->Size = System::Drawing::Size(312, 29);
			this->tbMidIni->TabIndex = 10;
			// 
			// tbAppID
			// 
			this->tbAppID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAppID->Location = System::Drawing::Point(271, 219);
			this->tbAppID->Name = L"tbAppID";
			this->tbAppID->Size = System::Drawing::Size(312, 29);
			this->tbAppID->TabIndex = 11;
			// 
			// rtbConcern
			// 
			this->rtbConcern->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rtbConcern->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtbConcern->Location = System::Drawing::Point(138, 298);
			this->rtbConcern->Name = L"rtbConcern";
			this->rtbConcern->Size = System::Drawing::Size(445, 96);
			this->rtbConcern->TabIndex = 12;
			this->rtbConcern->Text = L"";
			// 
			// btnProceedApplicant
			// 
			this->btnProceedApplicant->BackColor = System::Drawing::Color::Maroon;
			this->btnProceedApplicant->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceedApplicant->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceedApplicant->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProceedApplicant->Location = System::Drawing::Point(434, 407);
			this->btnProceedApplicant->Name = L"btnProceedApplicant";
			this->btnProceedApplicant->Size = System::Drawing::Size(149, 41);
			this->btnProceedApplicant->TabIndex = 13;
			this->btnProceedApplicant->Text = L"Proceed";
			this->btnProceedApplicant->UseVisualStyleBackColor = false;
			// 
			// btnBTD
			// 
			this->btnBTD->BackColor = System::Drawing::Color::LightGray;
			this->btnBTD->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBTD->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBTD->Location = System::Drawing::Point(138, 418);
			this->btnBTD->Name = L"btnBTD";
			this->btnBTD->Size = System::Drawing::Size(151, 30);
			this->btnBTD->TabIndex = 35;
			this->btnBTD->Text = L"Back to Dashboard";
			this->btnBTD->UseVisualStyleBackColor = false;
			this->btnBTD->Click += gcnew System::EventHandler(this, &Applicant::btnBTD_Click);
			// 
			// Applicant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 460);
			this->Controls->Add(this->btnBTD);
			this->Controls->Add(this->btnProceedApplicant);
			this->Controls->Add(this->rtbConcern);
			this->Controls->Add(this->tbAppID);
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
			this->Name = L"Applicant";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Applicant";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnBTD_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}

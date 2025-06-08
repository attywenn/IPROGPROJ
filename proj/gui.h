#pragma once
#include "Applicant.h"
#include "Students.h"
#include "Administrator.h"
namespace proj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for gui
	/// </summary>
	public ref class gui : public System::Windows::Forms::Form
	{
	public:
		gui(void)
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
		~gui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ cbRole;
	private: System::Windows::Forms::Button^ btnProceed;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gui::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbRole = (gcnew System::Windows::Forms::ComboBox());
			this->btnProceed = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(-4, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(112, 374);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-7, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(379, 118);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(19, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 90);
			this->label1->TabIndex = 0;
			this->label1->Text = L"MIS Digital Logbook \r\nSystem";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(132, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(180, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"You are entering as:";
			// 
			// cbRole
			// 
			this->cbRole->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::SuggestAppend;
			this->cbRole->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->cbRole->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbRole->FormattingEnabled = true;
			this->cbRole->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Applicant", L"Student", L"Admin" });
			this->cbRole->Location = System::Drawing::Point(137, 186);
			this->cbRole->Name = L"cbRole";
			this->cbRole->Size = System::Drawing::Size(175, 33);
			this->cbRole->TabIndex = 3;
			// 
			// btnProceed
			// 
			this->btnProceed->BackColor = System::Drawing::Color::Maroon;
			this->btnProceed->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceed->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProceed->Location = System::Drawing::Point(137, 247);
			this->btnProceed->Name = L"btnProceed";
			this->btnProceed->Size = System::Drawing::Size(175, 41);
			this->btnProceed->TabIndex = 4;
			this->btnProceed->Text = L"Proceed";
			this->btnProceed->UseVisualStyleBackColor = false;
			this->btnProceed->Click += gcnew System::EventHandler(this, &gui::btnProceed_Click);
			// 
			// gui
			// 
			this->AcceptButton = this->btnProceed;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(362, 300);
			this->Controls->Add(this->btnProceed);
			this->Controls->Add(this->cbRole);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"gui";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MIS Digital Logbook System";
			this->Load += gcnew System::EventHandler(this, &gui::gui_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	String^ connString = "server=localhost;port=3306;database=dpshop;uid=root;password=Wency7425#";
	MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void gui_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	
	private: System::Void btnProceed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cbRole->Text == "Applicant") {
			this->Hide();
			Applicant^ adminForm = gcnew Applicant();
			adminForm->ShowDialog();
			this->Show();
		}
		if (cbRole->Text == "Student") {
			this->Hide();
			Students^ adminForm = gcnew Students();
			adminForm->ShowDialog();
			this->Show();
		}
		if (cbRole->Text == "Admin") {
			this->Hide();
			Administrator^ adminForm = gcnew Administrator();
			adminForm->ShowDialog();
			this->Show();
		}

	}
};
}

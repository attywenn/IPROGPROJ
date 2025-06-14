#pragma once
#include "AdminDashboard.h"

namespace proj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace proj;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Administrator
	/// </summary>
	public ref class Administrator : public System::Windows::Forms::Form
	{
	public:
		Administrator(void)
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
		~Administrator()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Button^ btnProceedStudent;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::LinkLabel^ linkBTDAdmin;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrator::typeid));
			this->btnProceedStudent = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->linkBTDAdmin = (gcnew System::Windows::Forms::LinkLabel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnProceedStudent
			// 
			this->btnProceedStudent->BackColor = System::Drawing::Color::Maroon;
			this->btnProceedStudent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProceedStudent->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProceedStudent->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnProceedStudent->Location = System::Drawing::Point(340, 211);
			this->btnProceedStudent->Name = L"btnProceedStudent";
			this->btnProceedStudent->Size = System::Drawing::Size(149, 41);
			this->btnProceedStudent->TabIndex = 33;
			this->btnProceedStudent->Text = L"Proceed";
			this->btnProceedStudent->UseVisualStyleBackColor = false;
			this->btnProceedStudent->Click += gcnew System::EventHandler(this, &Administrator::btnProceedStudent_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(139, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 25);
			this->label3->TabIndex = 31;
			this->label3->Text = L"Password:";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(248, 150);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(241, 29);
			this->tbPassword->TabIndex = 32;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(139, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 25);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Username:";
			// 
			// tbUsername
			// 
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(248, 115);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(241, 29);
			this->tbUsername->TabIndex = 30;
			this->tbUsername->TextChanged += gcnew System::EventHandler(this, &Administrator::tbUsername_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 21);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(513, 74);
			this->panel1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(259, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(230, 45);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Administrator";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(133, 322);
			this->panel2->TabIndex = 28;
			// 
			// linkBTDAdmin
			// 
			this->linkBTDAdmin->AutoSize = true;
			this->linkBTDAdmin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkBTDAdmin->LinkColor = System::Drawing::Color::Maroon;
			this->linkBTDAdmin->Location = System::Drawing::Point(140, 231);
			this->linkBTDAdmin->Name = L"linkBTDAdmin";
			this->linkBTDAdmin->Size = System::Drawing::Size(134, 21);
			this->linkBTDAdmin->TabIndex = 34;
			this->linkBTDAdmin->TabStop = true;
			this->linkBTDAdmin->Text = L"Back to selection";
			this->linkBTDAdmin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Administrator::linkBTDAdmin_LinkClicked);
			// 
			// Administrator
			// 
			this->AcceptButton = this->btnProceedStudent;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->linkBTDAdmin;
			this->ClientSize = System::Drawing::Size(500, 258);
			this->Controls->Add(this->linkBTDAdmin);
			this->Controls->Add(this->btnProceedStudent);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(516, 297);
			this->MinimumSize = System::Drawing::Size(516, 297);
			this->Name = L"Administrator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrator";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		


private: System::Void linkBTDAdmin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->Close();
}
private: System::Void btnProceedStudent_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbUsername->Text == "admin" && tbPassword->Text == "4dm1n") {
		MessageBox::Show("Correct!");
		this->Hide();
		AdminDashboard^ adminDash = gcnew AdminDashboard();
		adminDash->ShowDialog();
		// Clear password and text inputs
		tbUsername->Text = "";
		tbPassword->Text = "";
		this->Show();
		// Clear password and text inputs
	}
	else {
		MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void tbUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

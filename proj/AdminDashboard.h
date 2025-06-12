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
	/// Summary for AdminDashboard
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::ListBox^ lbListOfConcerns;
	private: System::Windows::Forms::PictureBox^ pbHome;
	private: System::Windows::Forms::PictureBox^ pbSettings;


	private: System::Windows::Forms::PictureBox^ pbAccount;

	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::Windows::Forms::Label^ lblList;
	private: System::Windows::Forms::Label^ lblSelect;
	private: System::Windows::Forms::Label^ lblInfoCon;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pbSettings = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->pbAccount = (gcnew System::Windows::Forms::PictureBox());
			this->pbHome = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbListOfConcerns = (gcnew System::Windows::Forms::ListBox());
			this->lblWelcome = (gcnew System::Windows::Forms::Label());
			this->lblList = (gcnew System::Windows::Forms::Label());
			this->lblSelect = (gcnew System::Windows::Forms::Label());
			this->lblInfoCon = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSettings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAccount))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHome))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->pbSettings);
			this->panel2->Controls->Add(this->linkLabel3);
			this->panel2->Controls->Add(this->pbAccount);
			this->panel2->Controls->Add(this->pbHome);
			this->panel2->Location = System::Drawing::Point(1, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(136, 571);
			this->panel2->TabIndex = 29;
			// 
			// pbSettings
			// 
			this->pbSettings->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSettings.BackgroundImage")));
			this->pbSettings->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbSettings->Location = System::Drawing::Point(3, 393);
			this->pbSettings->Name = L"pbSettings";
			this->pbSettings->Size = System::Drawing::Size(125, 106);
			this->pbSettings->TabIndex = 3;
			this->pbSettings->TabStop = false;
			this->pbSettings->Click += gcnew System::EventHandler(this, &AdminDashboard::pictureBox3_Click);
			// 
			// linkLabel3
			// 
			this->linkLabel3->AutoSize = true;
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(31, 523);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(67, 21);
			this->linkLabel3->TabIndex = 2;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Log out";
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminDashboard::linkLabel3_LinkClicked);
			// 
			// pbAccount
			// 
			this->pbAccount->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAccount.BackgroundImage")));
			this->pbAccount->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbAccount->Location = System::Drawing::Point(3, 264);
			this->pbAccount->Name = L"pbAccount";
			this->pbAccount->Size = System::Drawing::Size(125, 106);
			this->pbAccount->TabIndex = 2;
			this->pbAccount->TabStop = false;
			this->pbAccount->Click += gcnew System::EventHandler(this, &AdminDashboard::pictureBox2_Click);
			// 
			// pbHome
			// 
			this->pbHome->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHome.BackgroundImage")));
			this->pbHome->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbHome->Location = System::Drawing::Point(3, 137);
			this->pbHome->Name = L"pbHome";
			this->pbHome->Size = System::Drawing::Size(125, 106);
			this->pbHome->TabIndex = 1;
			this->pbHome->TabStop = false;
			this->pbHome->Click += gcnew System::EventHandler(this, &AdminDashboard::pictureBox1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(1, 25);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(937, 106);
			this->panel1->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(323, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(603, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Administrator Dashboard";
			// 
			// lbListOfConcerns
			// 
			this->lbListOfConcerns->BackColor = System::Drawing::Color::White;
			this->lbListOfConcerns->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbListOfConcerns->FormattingEnabled = true;
			this->lbListOfConcerns->ItemHeight = 21;
			this->lbListOfConcerns->Location = System::Drawing::Point(168, 317);
			this->lbListOfConcerns->Name = L"lbListOfConcerns";
			this->lbListOfConcerns->Size = System::Drawing::Size(317, 235);
			this->lbListOfConcerns->TabIndex = 31;
			// 
			// lblWelcome
			// 
			this->lblWelcome->AutoSize = true;
			this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblWelcome->Location = System::Drawing::Point(159, 159);
			this->lblWelcome->Name = L"lblWelcome";
			this->lblWelcome->Size = System::Drawing::Size(326, 50);
			this->lblWelcome->TabIndex = 32;
			this->lblWelcome->Text = L"Welcome, admin!";
			// 
			// lblList
			// 
			this->lblList->AutoSize = true;
			this->lblList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblList->Location = System::Drawing::Point(163, 209);
			this->lblList->Name = L"lblList";
			this->lblList->Size = System::Drawing::Size(165, 30);
			this->lblList->TabIndex = 33;
			this->lblList->Text = L"List of Concerns";
			// 
			// lblSelect
			// 
			this->lblSelect->AutoSize = true;
			this->lblSelect->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblSelect->Location = System::Drawing::Point(163, 284);
			this->lblSelect->Name = L"lblSelect";
			this->lblSelect->Size = System::Drawing::Size(96, 30);
			this->lblSelect->TabIndex = 34;
			this->lblSelect->Text = L"Select ID";
			// 
			// lblInfoCon
			// 
			this->lblInfoCon->AutoSize = true;
			this->lblInfoCon->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblInfoCon->Location = System::Drawing::Point(557, 159);
			this->lblInfoCon->Name = L"lblInfoCon";
			this->lblInfoCon->Size = System::Drawing::Size(251, 30);
			this->lblInfoCon->TabIndex = 35;
			this->lblInfoCon->Text = L"Information and concern";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel3->Location = System::Drawing::Point(135, 257);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(401, 15);
			this->panel3->TabIndex = 36;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel4->Location = System::Drawing::Point(522, 137);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(14, 422);
			this->panel4->TabIndex = 37;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 564);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->lblSelect);
			this->Controls->Add(this->lblInfoCon);
			this->Controls->Add(this->lblList);
			this->Controls->Add(this->lblWelcome);
			this->Controls->Add(this->lbListOfConcerns);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(955, 603);
			this->MinimumSize = System::Drawing::Size(955, 603);
			this->Name = L"AdminDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrator Dashboard";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSettings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAccount))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHome))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ connString = "server=localhost;port=3306;database=dpshop;uid=root;password=Wency7425#";
		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Close();
	}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	lbListOfConcerns->Visible = false;
	lblWelcome->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
	lblInfoCon->Visible = false;
	lblList->Visible = false;
	lblSelect->Visible = false;
	
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	lbListOfConcerns->Visible = false;
	lblWelcome->Visible = false;
	panel3->Visible = false;
	panel4->Visible = false;
	lblInfoCon->Visible = false;
	lblList->Visible = false;
	lblSelect->Visible = false;
}


private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	lblWelcome->Visible = true;
	lbListOfConcerns->Visible = true;
	panel3->Visible = true;
	panel4->Visible = true;
	lblInfoCon->Visible = true;
	lblList->Visible = true;
	lblSelect->Visible = true;
}
};
}

#pragma once

namespace LM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_title_bar;
	protected:

	private: System::Windows::Forms::Panel^ pn_st_bar;
	protected:

	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ pn_con;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ btn_home;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_st;
	private: System::Windows::Forms::Button^ btn_books;
	private: System::Windows::Forms::Button^ btn_cat;
	private: System::Windows::Forms::Button^ btn_sell;
	private: System::Windows::Forms::Button^ btn_borrow;










	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ pn_home;
	private: System::Windows::Forms::Panel^ pn_borrow;
	private: System::Windows::Forms::Panel^ pn_sell;
	private: System::Windows::Forms::Panel^ pn_cat;
	private: System::Windows::Forms::Panel^ pn_books;
	private: System::Windows::Forms::Panel^ pn_student;
	private: System::Windows::Forms::Label^ label11;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button6;












	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::Panel^ panel10;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Panel^ pn_info;

private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::PictureBox^ pictureBox5;











	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pn_title_bar = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_st_bar = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_home = (gcnew System::Windows::Forms::Button());
			this->btn_st = (gcnew System::Windows::Forms::Button());
			this->btn_books = (gcnew System::Windows::Forms::Button());
			this->btn_cat = (gcnew System::Windows::Forms::Button());
			this->btn_sell = (gcnew System::Windows::Forms::Button());
			this->btn_borrow = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pn_info = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_con = (gcnew System::Windows::Forms::Panel());
			this->pn_home = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pn_borrow = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pn_sell = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pn_cat = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pn_books = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pn_student = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pn_title_bar->SuspendLayout();
			this->pn_st_bar->SuspendLayout();
			this->pn_nav_bar->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pn_info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->pn_con->SuspendLayout();
			this->pn_home->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->pn_borrow->SuspendLayout();
			this->pn_sell->SuspendLayout();
			this->pn_cat->SuspendLayout();
			this->pn_books->SuspendLayout();
			this->pn_student->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_title_bar
			// 
			this->pn_title_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_title_bar->Controls->Add(this->button3);
			this->pn_title_bar->Controls->Add(this->button2);
			this->pn_title_bar->Controls->Add(this->label1);
			this->pn_title_bar->Controls->Add(this->button5);
			this->pn_title_bar->Controls->Add(this->button4);
			this->pn_title_bar->Controls->Add(this->button1);
			this->pn_title_bar->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_title_bar->Location = System::Drawing::Point(0, 0);
			this->pn_title_bar->Name = L"pn_title_bar";
			this->pn_title_bar->Size = System::Drawing::Size(872, 40);
			this->pn_title_bar->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(107, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 38);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(50, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 34);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(362, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Library Manager";
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(807, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 30);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(748, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 30);
			this->button4->TabIndex = 0;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 30);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pn_st_bar
			// 
			this->pn_st_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_st_bar->Controls->Add(this->label8);
			this->pn_st_bar->Controls->Add(this->label9);
			this->pn_st_bar->Controls->Add(this->label7);
			this->pn_st_bar->Controls->Add(this->label6);
			this->pn_st_bar->Controls->Add(this->label5);
			this->pn_st_bar->Controls->Add(this->label4);
			this->pn_st_bar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_st_bar->Location = System::Drawing::Point(0, 543);
			this->pn_st_bar->Name = L"pn_st_bar";
			this->pn_st_bar->Size = System::Drawing::Size(872, 37);
			this->pn_st_bar->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(193, 8);
			this->label8->Name = L"label8";
			this->label8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label8->Size = System::Drawing::Size(88, 20);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Notification";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Lime;
			this->label9->Location = System::Drawing::Point(9, 11);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label9->Size = System::Drawing::Size(44, 15);
			this->label9->TabIndex = 1;
			this->label9->Text = L"V 1.0.0";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(493, 8);
			this->label7->Name = L"label7";
			this->label7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label7->Size = System::Drawing::Size(54, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Admin";
			// 
			// label6
			// 
			this->label6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(424, 8);
			this->label6->Name = L"label6";
			this->label6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Validity:";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(757, 8);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(98, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Mustermann";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(664, 8);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(87, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Username:";
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_nav_bar->Controls->Add(this->flowLayoutPanel1);
			this->pn_nav_bar->Controls->Add(this->panel1);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Right;
			this->pn_nav_bar->Location = System::Drawing::Point(665, 40);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(207, 503);
			this->pn_nav_bar->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->btn_home);
			this->flowLayoutPanel1->Controls->Add(this->btn_st);
			this->flowLayoutPanel1->Controls->Add(this->btn_books);
			this->flowLayoutPanel1->Controls->Add(this->btn_cat);
			this->flowLayoutPanel1->Controls->Add(this->btn_sell);
			this->flowLayoutPanel1->Controls->Add(this->btn_borrow);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 112);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(207, 391);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// btn_home
			// 
			this->btn_home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_home->FlatAppearance->BorderSize = 0;
			this->btn_home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_home->ForeColor = System::Drawing::Color::Silver;
			this->btn_home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_home.Image")));
			this->btn_home->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_home->Location = System::Drawing::Point(3, 10);
			this->btn_home->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_home->Name = L"btn_home";
			this->btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_home->Size = System::Drawing::Size(201, 39);
			this->btn_home->TabIndex = 0;
			this->btn_home->Text = L"Home";
			this->btn_home->UseVisualStyleBackColor = false;
			this->btn_home->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btn_st
			// 
			this->btn_st->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_st->FlatAppearance->BorderSize = 0;
			this->btn_st->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_st->ForeColor = System::Drawing::Color::Silver;
			this->btn_st->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_st.Image")));
			this->btn_st->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_st->Location = System::Drawing::Point(3, 62);
			this->btn_st->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_st->Name = L"btn_st";
			this->btn_st->Size = System::Drawing::Size(201, 39);
			this->btn_st->TabIndex = 1;
			this->btn_st->Text = L"Students";
			this->btn_st->UseVisualStyleBackColor = false;
			this->btn_st->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// btn_books
			// 
			this->btn_books->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_books->FlatAppearance->BorderSize = 0;
			this->btn_books->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_books->ForeColor = System::Drawing::Color::Silver;
			this->btn_books->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_books.Image")));
			this->btn_books->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_books->Location = System::Drawing::Point(3, 114);
			this->btn_books->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_books->Name = L"btn_books";
			this->btn_books->Size = System::Drawing::Size(201, 39);
			this->btn_books->TabIndex = 2;
			this->btn_books->Text = L"Books";
			this->btn_books->UseVisualStyleBackColor = false;
			this->btn_books->Click += gcnew System::EventHandler(this, &MyForm::btn_books_Click);
			// 
			// btn_cat
			// 
			this->btn_cat->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_cat->FlatAppearance->BorderSize = 0;
			this->btn_cat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cat->ForeColor = System::Drawing::Color::Silver;
			this->btn_cat->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_cat.Image")));
			this->btn_cat->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_cat->Location = System::Drawing::Point(3, 166);
			this->btn_cat->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_cat->Name = L"btn_cat";
			this->btn_cat->Size = System::Drawing::Size(201, 39);
			this->btn_cat->TabIndex = 3;
			this->btn_cat->Text = L"Categories";
			this->btn_cat->UseVisualStyleBackColor = false;
			this->btn_cat->Click += gcnew System::EventHandler(this, &MyForm::btn_cat_Click);
			// 
			// btn_sell
			// 
			this->btn_sell->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_sell->FlatAppearance->BorderSize = 0;
			this->btn_sell->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sell->ForeColor = System::Drawing::Color::Silver;
			this->btn_sell->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_sell.Image")));
			this->btn_sell->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_sell->Location = System::Drawing::Point(3, 218);
			this->btn_sell->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_sell->Name = L"btn_sell";
			this->btn_sell->Size = System::Drawing::Size(201, 39);
			this->btn_sell->TabIndex = 4;
			this->btn_sell->Text = L"Sell";
			this->btn_sell->UseVisualStyleBackColor = false;
			this->btn_sell->Click += gcnew System::EventHandler(this, &MyForm::btn_sell_Click);
			// 
			// btn_borrow
			// 
			this->btn_borrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn_borrow->FlatAppearance->BorderSize = 0;
			this->btn_borrow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_borrow->ForeColor = System::Drawing::Color::Silver;
			this->btn_borrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_borrow.Image")));
			this->btn_borrow->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btn_borrow->Location = System::Drawing::Point(3, 270);
			this->btn_borrow->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->btn_borrow->Name = L"btn_borrow";
			this->btn_borrow->Size = System::Drawing::Size(201, 39);
			this->btn_borrow->TabIndex = 5;
			this->btn_borrow->Text = L"Borrow";
			this->btn_borrow->UseVisualStyleBackColor = false;
			this->btn_borrow->Click += gcnew System::EventHandler(this, &MyForm::btn_borrow_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pn_info);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(207, 112);
			this->panel1->TabIndex = 0;
			// 
			// pn_info
			// 
			this->pn_info->Controls->Add(this->label31);
			this->pn_info->Controls->Add(this->label3);
			this->pn_info->Controls->Add(this->pictureBox5);
			this->pn_info->Location = System::Drawing::Point(66, 3);
			this->pn_info->Name = L"pn_info";
			this->pn_info->Size = System::Drawing::Size(138, 106);
			this->pn_info->TabIndex = 3;
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(21, 64);
			this->label31->Name = L"label31";
			this->label31->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label31->Size = System::Drawing::Size(86, 17);
			this->label31->TabIndex = 2;
			this->label31->Text = L"Mustermann";
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Green;
			this->label3->Location = System::Drawing::Point(27, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Manger";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(11, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(94, 59);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Location = System::Drawing::Point(0, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(59, 34);
			this->button11->TabIndex = 2;
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(140, -1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(94, 52);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pn_con
			// 
			this->pn_con->Controls->Add(this->pn_home);
			this->pn_con->Controls->Add(this->pn_borrow);
			this->pn_con->Controls->Add(this->pn_sell);
			this->pn_con->Controls->Add(this->pn_cat);
			this->pn_con->Controls->Add(this->pn_books);
			this->pn_con->Controls->Add(this->pn_student);
			this->pn_con->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_con->Location = System::Drawing::Point(0, 40);
			this->pn_con->Name = L"pn_con";
			this->pn_con->Size = System::Drawing::Size(665, 503);
			this->pn_con->TabIndex = 2;
			// 
			// pn_home
			// 
			this->pn_home->Controls->Add(this->panel2);
			this->pn_home->Controls->Add(this->flowLayoutPanel2);
			this->pn_home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_home->Location = System::Drawing::Point(0, 0);
			this->pn_home->Name = L"pn_home";
			this->pn_home->Size = System::Drawing::Size(665, 503);
			this->pn_home->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 409);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(665, 94);
			this->panel2->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->ForeColor = System::Drawing::Color::Silver;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button10->Location = System::Drawing::Point(33, 10);
			this->button10->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 75);
			this->button10->TabIndex = 1;
			this->button10->Text = L"Add";
			this->button10->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::Silver;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button9->Location = System::Drawing::Point(160, 10);
			this->button9->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 75);
			this->button9->TabIndex = 1;
			this->button9->Text = L"Add";
			this->button9->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::Silver;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button8->Location = System::Drawing::Point(287, 10);
			this->button8->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(90, 75);
			this->button8->TabIndex = 1;
			this->button8->Text = L"Add";
			this->button8->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Silver;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(414, 10);
			this->button7->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 75);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Add";
			this->button7->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::Silver;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(541, 10);
			this->button6->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 75);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Add";
			this->button6->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::btn_st_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->panel3);
			this->flowLayoutPanel2->Controls->Add(this->panel4);
			this->flowLayoutPanel2->Controls->Add(this->panel5);
			this->flowLayoutPanel2->Controls->Add(this->panel6);
			this->flowLayoutPanel2->Controls->Add(this->panel7);
			this->flowLayoutPanel2->Controls->Add(this->panel8);
			this->flowLayoutPanel2->Controls->Add(this->panel9);
			this->flowLayoutPanel2->Controls->Add(this->panel10);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(665, 409);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->label16);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Location = System::Drawing::Point(10, 10);
			this->panel3->Margin = System::Windows::Forms::Padding(10);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(235, 132);
			this->panel3->TabIndex = 0;
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Lime;
			this->label16->Location = System::Drawing::Point(2, 2);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(40, 24);
			this->label16->TabIndex = 1;
			this->label16->Text = L"100";
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(23, 71);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(174, 24);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Number of students";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Location = System::Drawing::Point(265, 10);
			this->panel4->Margin = System::Windows::Forms::Padding(10);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(235, 132);
			this->panel4->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label17->AutoSize = true;
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(2, 2);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 24);
			this->label17->TabIndex = 1;
			this->label17->Text = L"100";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label18->AutoSize = true;
			this->label18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label18->Location = System::Drawing::Point(23, 71);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(174, 24);
			this->label18->TabIndex = 1;
			this->label18->Text = L"Number of students";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(140, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(94, 52);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->pictureBox3);
			this->panel5->Location = System::Drawing::Point(10, 162);
			this->panel5->Margin = System::Windows::Forms::Padding(10);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(235, 132);
			this->panel5->TabIndex = 2;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->AutoSize = true;
			this->label19->ForeColor = System::Drawing::Color::Lime;
			this->label19->Location = System::Drawing::Point(2, 2);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(40, 24);
			this->label19->TabIndex = 1;
			this->label19->Text = L"100";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(23, 71);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(174, 24);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Number of students";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(140, -1);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(94, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label21);
			this->panel6->Controls->Add(this->label22);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Location = System::Drawing::Point(265, 162);
			this->panel6->Margin = System::Windows::Forms::Padding(10);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(235, 132);
			this->panel6->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Lime;
			this->label21->Location = System::Drawing::Point(2, 2);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(40, 24);
			this->label21->TabIndex = 1;
			this->label21->Text = L"100";
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(23, 71);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(174, 24);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Number of students";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(140, -1);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(94, 52);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label23);
			this->panel7->Controls->Add(this->label24);
			this->panel7->Controls->Add(this->pictureBox6);
			this->panel7->Location = System::Drawing::Point(10, 314);
			this->panel7->Margin = System::Windows::Forms::Padding(10);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(235, 132);
			this->panel7->TabIndex = 4;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Lime;
			this->label23->Location = System::Drawing::Point(2, 2);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(40, 24);
			this->label23->TabIndex = 1;
			this->label23->Text = L"100";
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(23, 71);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(174, 24);
			this->label24->TabIndex = 1;
			this->label24->Text = L"Number of students";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(140, -1);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(94, 52);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->label25);
			this->panel8->Controls->Add(this->label26);
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Location = System::Drawing::Point(265, 314);
			this->panel8->Margin = System::Windows::Forms::Padding(10);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(235, 132);
			this->panel8->TabIndex = 5;
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->AutoSize = true;
			this->label25->ForeColor = System::Drawing::Color::Lime;
			this->label25->Location = System::Drawing::Point(2, 2);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(40, 24);
			this->label25->TabIndex = 1;
			this->label25->Text = L"100";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label26->AutoSize = true;
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(23, 71);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(174, 24);
			this->label26->TabIndex = 1;
			this->label26->Text = L"Number of students";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(140, -1);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(94, 52);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->label28);
			this->panel9->Controls->Add(this->pictureBox8);
			this->panel9->Location = System::Drawing::Point(10, 466);
			this->panel9->Margin = System::Windows::Forms::Padding(10);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(235, 132);
			this->panel9->TabIndex = 6;
			// 
			// label27
			// 
			this->label27->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::Lime;
			this->label27->Location = System::Drawing::Point(2, 2);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 24);
			this->label27->TabIndex = 1;
			this->label27->Text = L"100";
			// 
			// label28
			// 
			this->label28->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label28->AutoSize = true;
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(23, 71);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(174, 24);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Number of students";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(140, -1);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(94, 52);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label29);
			this->panel10->Controls->Add(this->label30);
			this->panel10->Controls->Add(this->pictureBox9);
			this->panel10->Location = System::Drawing::Point(265, 466);
			this->panel10->Margin = System::Windows::Forms::Padding(10);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(235, 132);
			this->panel10->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::Lime;
			this->label29->Location = System::Drawing::Point(2, 2);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(40, 24);
			this->label29->TabIndex = 1;
			this->label29->Text = L"100";
			// 
			// label30
			// 
			this->label30->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label30->AutoSize = true;
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(23, 71);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(174, 24);
			this->label30->TabIndex = 1;
			this->label30->Text = L"Number of students";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(140, -1);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(94, 52);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// pn_borrow
			// 
			this->pn_borrow->Controls->Add(this->label11);
			this->pn_borrow->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_borrow->Location = System::Drawing::Point(0, 0);
			this->pn_borrow->Name = L"pn_borrow";
			this->pn_borrow->Size = System::Drawing::Size(665, 503);
			this->pn_borrow->TabIndex = 5;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(301, 239);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 24);
			this->label11->TabIndex = 2;
			this->label11->Text = L"borrow";
			// 
			// pn_sell
			// 
			this->pn_sell->Controls->Add(this->label12);
			this->pn_sell->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_sell->Location = System::Drawing::Point(0, 0);
			this->pn_sell->Name = L"pn_sell";
			this->pn_sell->Size = System::Drawing::Size(665, 503);
			this->pn_sell->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(301, 239);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 24);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Sell";
			// 
			// pn_cat
			// 
			this->pn_cat->Controls->Add(this->label13);
			this->pn_cat->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_cat->Location = System::Drawing::Point(0, 0);
			this->pn_cat->Name = L"pn_cat";
			this->pn_cat->Size = System::Drawing::Size(665, 503);
			this->pn_cat->TabIndex = 3;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(301, 239);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(100, 24);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Categories";
			// 
			// pn_books
			// 
			this->pn_books->Controls->Add(this->label14);
			this->pn_books->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_books->Location = System::Drawing::Point(0, 0);
			this->pn_books->Name = L"pn_books";
			this->pn_books->Size = System::Drawing::Size(665, 503);
			this->pn_books->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(301, 239);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(62, 24);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Books";
			// 
			// pn_student
			// 
			this->pn_student->Controls->Add(this->label15);
			this->pn_student->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_student->Location = System::Drawing::Point(0, 0);
			this->pn_student->Name = L"pn_student";
			this->pn_student->Size = System::Drawing::Size(665, 503);
			this->pn_student->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label15->Location = System::Drawing::Point(301, 239);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 24);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Students";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(872, 580);
			this->Controls->Add(this->pn_con);
			this->Controls->Add(this->pn_nav_bar);
			this->Controls->Add(this->pn_st_bar);
			this->Controls->Add(this->pn_title_bar);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LM";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->pn_title_bar->ResumeLayout(false);
			this->pn_title_bar->PerformLayout();
			this->pn_st_bar->ResumeLayout(false);
			this->pn_st_bar->PerformLayout();
			this->pn_nav_bar->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->pn_info->ResumeLayout(false);
			this->pn_info->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->pn_con->ResumeLayout(false);
			this->pn_home->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->pn_borrow->ResumeLayout(false);
			this->pn_borrow->PerformLayout();
			this->pn_sell->ResumeLayout(false);
			this->pn_sell->PerformLayout();
			this->pn_cat->ResumeLayout(false);
			this->pn_cat->PerformLayout();
			this->pn_books->ResumeLayout(false);
			this->pn_books->PerformLayout();
			this->pn_student->ResumeLayout(false);
			this->pn_student->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
	}
private: System::Void btn_st_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_student->BringToFront();
}
private: System::Void btn_books_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_books->BringToFront();
}
private: System::Void btn_cat_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_cat->BringToFront();
}
private: System::Void btn_sell_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_sell->BringToFront();
}
private: System::Void btn_borrow_Click(System::Object^ sender, System::EventArgs^ e) {
	pn_borrow->BringToFront();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->WindowState==FormWindowState::Maximized) {
		this->WindowState = FormWindowState::Normal;
		
	}
	else
	{
		this->WindowState = FormWindowState::Maximized;
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->WindowState = FormWindowState::Minimized;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pn_nav_bar->Width == 207) {
		pn_nav_bar->Width = 55;
		btn_home->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_st->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_books->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_cat->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_sell->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		pn_info->Visible = false;
	}
	else {
		pn_nav_bar->Width = 207;
		btn_home->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_st->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_books->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_cat->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_sell->RightToLeft = System::Windows::Forms::RightToLeft::No;
		btn_borrow->RightToLeft = System::Windows::Forms::RightToLeft::No;
		pn_info->Visible = true;
	}
}
};
}

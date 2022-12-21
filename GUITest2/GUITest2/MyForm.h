#pragma once
#include "File.h"
#include <msclr\marshal_cppstd.h>


namespace GUITest2 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Show;
	//protected:
	private: System::Windows::Forms::Panel^ pn_tb;
	private: System::Windows::Forms::Panel^ pn_mb;
	private: System::Windows::Forms::Panel^ pn_sb;
	private: System::Windows::Forms::Panel^ pn_cn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_minimize;
	private: System::Windows::Forms::Button^ btn_maximize;
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btn_Insights;
	private: System::Windows::Forms::Button^ btn_Compression;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ btn_Consistent;
	private: System::Windows::Forms::Button^ btn_Home;
	private: System::Windows::Forms::Label^ c_Status;
	private: System::Windows::Forms::Label^ Status_lb;
	private: System::Windows::Forms::Panel^ pn_Home;
	private: System::Windows::Forms::Panel^ pn_Insights;
	private: System::Windows::Forms::Panel^ pn_compression;
	private: System::Windows::Forms::Panel^ pn_Formatting;
	private: System::Windows::Forms::Panel^ pn_consistency;
	private: System::Windows::Forms::Button^ btn_Format;
	//protected:
	//protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Panel^ panel2;


	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Button^ collapse_btn;
	private: System::Windows::Forms::PictureBox^ big_Logo;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private: System::Windows::Forms::Button^ btn_prettify;
	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Button^ btn_validate;
	private: System::Windows::Forms::Button^ btn_Fix;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tb_XML_viewer;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ Welcome_lbl;
	private: System::Windows::Forms::Button^ btn_Browse;
	private: System::Windows::Forms::Label^ lbl_FileName;
	private: File* file;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Show = (gcnew System::Windows::Forms::Button());
			this->pn_tb = (gcnew System::Windows::Forms::Panel());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_minimize = (gcnew System::Windows::Forms::Button());
			this->btn_maximize = (gcnew System::Windows::Forms::Button());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->pn_mb = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->collapse_btn = (gcnew System::Windows::Forms::Button());
			this->big_Logo = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Format = (gcnew System::Windows::Forms::Button());
			this->btn_Home = (gcnew System::Windows::Forms::Button());
			this->btn_Consistent = (gcnew System::Windows::Forms::Button());
			this->btn_Compression = (gcnew System::Windows::Forms::Button());
			this->btn_Insights = (gcnew System::Windows::Forms::Button());
			this->pn_sb = (gcnew System::Windows::Forms::Panel());
			this->c_Status = (gcnew System::Windows::Forms::Label());
			this->Status_lb = (gcnew System::Windows::Forms::Label());
			this->pn_cn = (gcnew System::Windows::Forms::Panel());
			this->pn_Home = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Welcome_lbl = (gcnew System::Windows::Forms::Label());
			this->btn_Browse = (gcnew System::Windows::Forms::Button());
			this->lbl_FileName = (gcnew System::Windows::Forms::Label());
			this->pn_Formatting = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tb_XML_viewer = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->btn_validate = (gcnew System::Windows::Forms::Button());
			this->btn_prettify = (gcnew System::Windows::Forms::Button());
			this->btn_Fix = (gcnew System::Windows::Forms::Button());
			this->pn_Insights = (gcnew System::Windows::Forms::Panel());
			this->pn_compression = (gcnew System::Windows::Forms::Panel());
			this->pn_consistency = (gcnew System::Windows::Forms::Panel());
			this->pn_tb->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->pn_mb->SuspendLayout();
			this->flowLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->big_Logo))->BeginInit();
			this->pn_sb->SuspendLayout();
			this->pn_cn->SuspendLayout();
			this->pn_Home->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->pn_Formatting->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Show
			// 
			this->Show->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Show->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->Show->FlatAppearance->BorderSize = 0;
			this->Show->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Show->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show->ForeColor = System::Drawing::SystemColors::Control;
			this->Show->Location = System::Drawing::Point(0, 60);
			this->Show->Margin = System::Windows::Forms::Padding(0, 60, 0, 0);
			this->Show->Name = L"Show";
			this->Show->Size = System::Drawing::Size(93, 38);
			this->Show->TabIndex = 0;
			this->Show->Text = L"Show";
			this->Show->UseVisualStyleBackColor = false;
			this->Show->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pn_tb
			// 
			this->pn_tb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pn_tb->Controls->Add(this->logo);
			this->pn_tb->Controls->Add(this->label2);
			this->pn_tb->Controls->Add(this->label1);
			this->pn_tb->Controls->Add(this->btn_minimize);
			this->pn_tb->Controls->Add(this->btn_maximize);
			this->pn_tb->Controls->Add(this->btn_close);
			this->pn_tb->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_tb->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->pn_tb->Location = System::Drawing::Point(0, 0);
			this->pn_tb->Name = L"pn_tb";
			this->pn_tb->Size = System::Drawing::Size(1507, 61);
			this->pn_tb->TabIndex = 2;
			// 
			// logo
			// 
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logo->Location = System::Drawing::Point(12, 9);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(48, 43);
			this->logo->TabIndex = 4;
			this->logo->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(166, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"EDITOR";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(80, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"XML ";
			// 
			// btn_minimize
			// 
			this->btn_minimize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_minimize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_minimize.BackgroundImage")));
			this->btn_minimize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_minimize->FlatAppearance->BorderSize = 0;
			this->btn_minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minimize->Location = System::Drawing::Point(1379, 20);
			this->btn_minimize->Name = L"btn_minimize";
			this->btn_minimize->Size = System::Drawing::Size(32, 24);
			this->btn_minimize->TabIndex = 4;
			this->btn_minimize->UseVisualStyleBackColor = true;
			this->btn_minimize->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btn_maximize
			// 
			this->btn_maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_maximize.BackgroundImage")));
			this->btn_maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_maximize->FlatAppearance->BorderSize = 0;
			this->btn_maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_maximize->Location = System::Drawing::Point(1422, 16);
			this->btn_maximize->Name = L"btn_maximize";
			this->btn_maximize->Size = System::Drawing::Size(32, 28);
			this->btn_maximize->TabIndex = 3;
			this->btn_maximize->UseVisualStyleBackColor = true;
			this->btn_maximize->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// btn_close
			// 
			this->btn_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(1465, 17);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(30, 27);
			this->btn_close->TabIndex = 2;
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &MyForm::close_Click);
			// 
			// pn_mb
			// 
			this->pn_mb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pn_mb->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pn_mb->Controls->Add(this->flowLayoutPanel3);
			this->pn_mb->Controls->Add(this->btn_Format);
			this->pn_mb->Controls->Add(this->btn_Home);
			this->pn_mb->Controls->Add(this->btn_Consistent);
			this->pn_mb->Controls->Add(this->btn_Compression);
			this->pn_mb->Controls->Add(this->btn_Insights);
			this->pn_mb->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_mb->Location = System::Drawing::Point(0, 61);
			this->pn_mb->Name = L"pn_mb";
			this->pn_mb->Size = System::Drawing::Size(200, 606);
			this->pn_mb->TabIndex = 3;
			// 
			// flowLayoutPanel3
			// 
			this->flowLayoutPanel3->Controls->Add(this->collapse_btn);
			this->flowLayoutPanel3->Controls->Add(this->big_Logo);
			this->flowLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel3->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel3->Name = L"flowLayoutPanel3";
			this->flowLayoutPanel3->Size = System::Drawing::Size(200, 186);
			this->flowLayoutPanel3->TabIndex = 9;
			// 
			// collapse_btn
			// 
			this->collapse_btn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->collapse_btn->BackColor = System::Drawing::Color::Transparent;
			this->collapse_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"collapse_btn.BackgroundImage")));
			this->collapse_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->collapse_btn->FlatAppearance->BorderSize = 0;
			this->collapse_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapse_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->collapse_btn->ForeColor = System::Drawing::SystemColors::Control;
			this->collapse_btn->Location = System::Drawing::Point(164, 3);
			this->collapse_btn->Name = L"collapse_btn";
			this->collapse_btn->Size = System::Drawing::Size(33, 28);
			this->collapse_btn->TabIndex = 4;
			this->collapse_btn->UseVisualStyleBackColor = false;
			this->collapse_btn->Click += gcnew System::EventHandler(this, &MyForm::collapse_btn_Click);
			// 
			// big_Logo
			// 
			this->big_Logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"big_Logo.BackgroundImage")));
			this->big_Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->big_Logo->Location = System::Drawing::Point(0, 37);
			this->big_Logo->Name = L"big_Logo";
			this->big_Logo->Size = System::Drawing::Size(197, 86);
			this->big_Logo->TabIndex = 5;
			this->big_Logo->TabStop = false;
			// 
			// btn_Format
			// 
			this->btn_Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Format->FlatAppearance->BorderSize = 0;
			this->btn_Format->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Format->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Format->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Format->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Format.Image")));
			this->btn_Format->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Format->Location = System::Drawing::Point(0, 302);
			this->btn_Format->Name = L"btn_Format";
			this->btn_Format->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btn_Format->Size = System::Drawing::Size(200, 49);
			this->btn_Format->TabIndex = 8;
			this->btn_Format->Text = L"Format";
			this->btn_Format->UseVisualStyleBackColor = false;
			this->btn_Format->Click += gcnew System::EventHandler(this, &MyForm::btn_Format_Click_1);
			// 
			// btn_Home
			// 
			this->btn_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Home->FlatAppearance->BorderSize = 0;
			this->btn_Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Home->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Home.Image")));
			this->btn_Home->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Home->Location = System::Drawing::Point(0, 192);
			this->btn_Home->Name = L"btn_Home";
			this->btn_Home->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btn_Home->Size = System::Drawing::Size(200, 49);
			this->btn_Home->TabIndex = 7;
			this->btn_Home->Text = L"Home";
			this->btn_Home->UseVisualStyleBackColor = false;
			this->btn_Home->Click += gcnew System::EventHandler(this, &MyForm::btn_Home_Click);
			// 
			// btn_Consistent
			// 
			this->btn_Consistent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Consistent->FlatAppearance->BorderSize = 0;
			this->btn_Consistent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Consistent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Consistent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Consistent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Consistent.Image")));
			this->btn_Consistent->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Consistent->Location = System::Drawing::Point(0, 247);
			this->btn_Consistent->Name = L"btn_Consistent";
			this->btn_Consistent->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btn_Consistent->Size = System::Drawing::Size(200, 49);
			this->btn_Consistent->TabIndex = 5;
			this->btn_Consistent->Text = L"Consistency";
			this->btn_Consistent->UseVisualStyleBackColor = false;
			this->btn_Consistent->Click += gcnew System::EventHandler(this, &MyForm::btn_Consistent_Click);
			// 
			// btn_Compression
			// 
			this->btn_Compression->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Compression->FlatAppearance->BorderSize = 0;
			this->btn_Compression->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Compression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Compression->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Compression->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Compression.Image")));
			this->btn_Compression->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Compression->Location = System::Drawing::Point(0, 357);
			this->btn_Compression->Name = L"btn_Compression";
			this->btn_Compression->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btn_Compression->Size = System::Drawing::Size(200, 49);
			this->btn_Compression->TabIndex = 3;
			this->btn_Compression->Text = L"Compress";
			this->btn_Compression->UseVisualStyleBackColor = false;
			this->btn_Compression->Click += gcnew System::EventHandler(this, &MyForm::btn_Compression_Click);
			// 
			// btn_Insights
			// 
			this->btn_Insights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Insights->FlatAppearance->BorderSize = 0;
			this->btn_Insights->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Insights->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Insights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Insights->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Insights.Image")));
			this->btn_Insights->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Insights->Location = System::Drawing::Point(0, 412);
			this->btn_Insights->Name = L"btn_Insights";
			this->btn_Insights->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btn_Insights->Size = System::Drawing::Size(200, 49);
			this->btn_Insights->TabIndex = 2;
			this->btn_Insights->Text = L"Insights";
			this->btn_Insights->UseVisualStyleBackColor = false;
			this->btn_Insights->Click += gcnew System::EventHandler(this, &MyForm::btn_Insights_Click);
			// 
			// pn_sb
			// 
			this->pn_sb->BackColor = System::Drawing::Color::Transparent;
			this->pn_sb->Controls->Add(this->c_Status);
			this->pn_sb->Controls->Add(this->Status_lb);
			this->pn_sb->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pn_sb->Location = System::Drawing::Point(200, 592);
			this->pn_sb->Name = L"pn_sb";
			this->pn_sb->Size = System::Drawing::Size(1307, 75);
			this->pn_sb->TabIndex = 4;
			// 
			// c_Status
			// 
			this->c_Status->AutoSize = true;
			this->c_Status->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c_Status->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->c_Status->Location = System::Drawing::Point(136, 32);
			this->c_Status->Name = L"c_Status";
			this->c_Status->Size = System::Drawing::Size(25, 23);
			this->c_Status->TabIndex = 1;
			this->c_Status->Text = L"...";
			// 
			// Status_lb
			// 
			this->Status_lb->AutoSize = true;
			this->Status_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Status_lb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->Status_lb->Location = System::Drawing::Point(58, 32);
			this->Status_lb->Name = L"Status_lb";
			this->Status_lb->Size = System::Drawing::Size(72, 24);
			this->Status_lb->TabIndex = 0;
			this->Status_lb->Text = L"Status:";
			// 
			// pn_cn
			// 
			this->pn_cn->BackColor = System::Drawing::Color::Transparent;
			this->pn_cn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pn_cn->Controls->Add(this->pn_Home);
			this->pn_cn->Controls->Add(this->pn_Formatting);
			this->pn_cn->Controls->Add(this->pn_Insights);
			this->pn_cn->Controls->Add(this->pn_compression);
			this->pn_cn->Controls->Add(this->pn_consistency);
			this->pn_cn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_cn->Location = System::Drawing::Point(200, 61);
			this->pn_cn->Name = L"pn_cn";
			this->pn_cn->Size = System::Drawing::Size(1307, 531);
			this->pn_cn->TabIndex = 5;
			// 
			// pn_Home
			// 
			this->pn_Home->Controls->Add(this->flowLayoutPanel2);
			this->pn_Home->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_Home->Location = System::Drawing::Point(0, 0);
			this->pn_Home->Name = L"pn_Home";
			this->pn_Home->Size = System::Drawing::Size(1307, 531);
			this->pn_Home->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->Welcome_lbl);
			this->flowLayoutPanel2->Controls->Add(this->btn_Browse);
			this->flowLayoutPanel2->Controls->Add(this->lbl_FileName);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(1307, 531);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// Welcome_lbl
			// 
			this->Welcome_lbl->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Welcome_lbl->AutoSize = true;
			this->Welcome_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Welcome_lbl->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->Welcome_lbl->Location = System::Drawing::Point(350, 100);
			this->Welcome_lbl->Margin = System::Windows::Forms::Padding(350, 100, 350, 100);
			this->Welcome_lbl->Name = L"Welcome_lbl";
			this->Welcome_lbl->Size = System::Drawing::Size(451, 108);
			this->Welcome_lbl->TabIndex = 7;
			this->Welcome_lbl->Text = L"Welcome";
			this->Welcome_lbl->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_Browse
			// 
			this->btn_Browse->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->btn_Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Browse->FlatAppearance->BorderSize = 0;
			this->btn_Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Browse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Browse->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_Browse->Location = System::Drawing::Point(491, 311);
			this->btn_Browse->Name = L"btn_Browse";
			this->btn_Browse->Size = System::Drawing::Size(168, 52);
			this->btn_Browse->TabIndex = 8;
			this->btn_Browse->Text = L"Browse";
			this->btn_Browse->UseVisualStyleBackColor = false;
			this->btn_Browse->Click += gcnew System::EventHandler(this, &MyForm::btn_Browse_Click);
			// 
			// lbl_FileName
			// 
			this->lbl_FileName->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->lbl_FileName->AutoSize = true;
			this->lbl_FileName->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_FileName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->lbl_FileName->Location = System::Drawing::Point(495, 386);
			this->lbl_FileName->Margin = System::Windows::Forms::Padding(3, 20, 3, 0);
			this->lbl_FileName->Name = L"lbl_FileName";
			this->lbl_FileName->Size = System::Drawing::Size(160, 26);
			this->lbl_FileName->TabIndex = 9;
			this->lbl_FileName->Text = L"No File is Selected";
			this->lbl_FileName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_Formatting
			// 
			this->pn_Formatting->Controls->Add(this->panel2);
			this->pn_Formatting->Controls->Add(this->flowLayoutPanel1);
			this->pn_Formatting->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_Formatting->Location = System::Drawing::Point(0, 0);
			this->pn_Formatting->Name = L"pn_Formatting";
			this->pn_Formatting->Size = System::Drawing::Size(1307, 531);
			this->pn_Formatting->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->tb_XML_viewer);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1167, 531);
			this->panel2->TabIndex = 3;
			// 
			// tb_XML_viewer
			// 
			this->tb_XML_viewer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tb_XML_viewer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->tb_XML_viewer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tb_XML_viewer->Font = (gcnew System::Drawing::Font(L"Corbel Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_XML_viewer->ForeColor = System::Drawing::SystemColors::Window;
			this->tb_XML_viewer->Location = System::Drawing::Point(53, 54);
			this->tb_XML_viewer->Margin = System::Windows::Forms::Padding(50);
			this->tb_XML_viewer->Multiline = true;
			this->tb_XML_viewer->Name = L"tb_XML_viewer";
			this->tb_XML_viewer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tb_XML_viewer->Size = System::Drawing::Size(1067, 360);
			this->tb_XML_viewer->TabIndex = 4;
			this->tb_XML_viewer->TabStop = false;
			this->tb_XML_viewer->Text = L"Select an operation";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btn_save);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 467);
			this->panel1->Name = L"panel1";
			this->panel1->Padding = System::Windows::Forms::Padding(50);
			this->panel1->Size = System::Drawing::Size(1167, 64);
			this->panel1->TabIndex = 3;
			// 
			// btn_save
			// 
			this->btn_save->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btn_save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_save->FlatAppearance->BorderSize = 0;
			this->btn_save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_save->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_save->Location = System::Drawing::Point(516, 12);
			this->btn_save->Margin = System::Windows::Forms::Padding(20, 20, 20, 0);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(91, 38);
			this->btn_save->TabIndex = 2;
			this->btn_save->Text = L"Save";
			this->btn_save->UseVisualStyleBackColor = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->Show);
			this->flowLayoutPanel1->Controls->Add(this->btn_validate);
			this->flowLayoutPanel1->Controls->Add(this->btn_prettify);
			this->flowLayoutPanel1->Controls->Add(this->btn_Fix);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(1167, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(140, 531);
			this->flowLayoutPanel1->TabIndex = 2;
			// 
			// btn_validate
			// 
			this->btn_validate->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btn_validate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_validate->FlatAppearance->BorderSize = 0;
			this->btn_validate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_validate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_validate->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_validate->Location = System::Drawing::Point(0, 108);
			this->btn_validate->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->btn_validate->Name = L"btn_validate";
			this->btn_validate->Size = System::Drawing::Size(93, 38);
			this->btn_validate->TabIndex = 2;
			this->btn_validate->Text = L"Validate";
			this->btn_validate->UseVisualStyleBackColor = false;
			// 
			// btn_prettify
			// 
			this->btn_prettify->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btn_prettify->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_prettify->FlatAppearance->BorderSize = 0;
			this->btn_prettify->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_prettify->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_prettify->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_prettify->Location = System::Drawing::Point(0, 156);
			this->btn_prettify->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->btn_prettify->Name = L"btn_prettify";
			this->btn_prettify->Size = System::Drawing::Size(93, 38);
			this->btn_prettify->TabIndex = 1;
			this->btn_prettify->Text = L"Prettify";
			this->btn_prettify->UseVisualStyleBackColor = false;
			// 
			// btn_Fix
			// 
			this->btn_Fix->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btn_Fix->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Fix->FlatAppearance->BorderSize = 0;
			this->btn_Fix->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Fix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Fix->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_Fix->Location = System::Drawing::Point(0, 204);
			this->btn_Fix->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->btn_Fix->Name = L"btn_Fix";
			this->btn_Fix->Size = System::Drawing::Size(93, 38);
			this->btn_Fix->TabIndex = 3;
			this->btn_Fix->Text = L"Fix";
			this->btn_Fix->UseVisualStyleBackColor = false;
			// 
			// pn_Insights
			// 
			this->pn_Insights->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_Insights->Location = System::Drawing::Point(0, 0);
			this->pn_Insights->Name = L"pn_Insights";
			this->pn_Insights->Size = System::Drawing::Size(1307, 531);
			this->pn_Insights->TabIndex = 4;
			// 
			// pn_compression
			// 
			this->pn_compression->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_compression->Location = System::Drawing::Point(0, 0);
			this->pn_compression->Name = L"pn_compression";
			this->pn_compression->Size = System::Drawing::Size(1307, 531);
			this->pn_compression->TabIndex = 3;
			// 
			// pn_consistency
			// 
			this->pn_consistency->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_consistency->Location = System::Drawing::Point(0, 0);
			this->pn_consistency->Name = L"pn_consistency";
			this->pn_consistency->Size = System::Drawing::Size(1307, 531);
			this->pn_consistency->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1507, 667);
			this->Controls->Add(this->pn_cn);
			this->Controls->Add(this->pn_sb);
			this->Controls->Add(this->pn_mb);
			this->Controls->Add(this->pn_tb);
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::Color::Coral;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::WindowsDefaultBounds;
			this->Text = L"Data Structures";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::MyForm_Click);
			this->pn_tb->ResumeLayout(false);
			this->pn_tb->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->pn_mb->ResumeLayout(false);
			this->flowLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->big_Logo))->EndInit();
			this->pn_sb->ResumeLayout(false);
			this->pn_sb->PerformLayout();
			this->pn_cn->ResumeLayout(false);
			this->pn_Home->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->pn_Formatting->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (file == nullptr) {
			tb_XML_viewer->Text = "Error: no file is selected\nSelect a file first to proceed";
			c_Status->Text = "loading Unuccessful";
		}
		else{
			file->toArray();
			vector<string> elements = file->getElements();
			
			String^ text;
			tb_XML_viewer->Text = "";
			
			for (int i = 0; i < elements.size(); i++){
				text = gcnew String(elements.back().c_str());
				elements.pop_back();
				tb_XML_viewer->Text += text+="\n";
			}

			c_Status->Text = "loading Successful";
			delete text;
		}
	}


	//
	//panel switch functions
	//
	private: System::Void btn_Home_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_Home->BringToFront();
		activateBTN(0);
	}
	private: System::Void btn_Consistent_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_consistency->BringToFront();
		activateBTN(1);
	}
	private: System::Void btn_Compression_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_compression->BringToFront();
		activateBTN(2);
	}
	private: System::Void btn_Insights_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_Insights->BringToFront();
		activateBTN(3);
	}

	private: System::Void btn_Format_Click_1(System::Object^ sender, System::EventArgs^ e) {
		pn_Formatting->BringToFront();
		activateBTN(4);
	}

	//activate button
	private: System::Void activateBTN(int button) {
		//deactivate
		//Home
		this->btn_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
			static_cast<System::Int32>(static_cast<System::Byte>(29)));
		this->btn_Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
			static_cast<System::Int32>(static_cast<System::Byte>(69)));

		//Consistency
		this->btn_Consistent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
			static_cast<System::Int32>(static_cast<System::Byte>(29)));
		this->btn_Consistent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
			static_cast<System::Int32>(static_cast<System::Byte>(69)));
		//compression
		this->btn_Compression->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
			static_cast<System::Int32>(static_cast<System::Byte>(29)));
		this->btn_Compression->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
			static_cast<System::Int32>(static_cast<System::Byte>(69)));
		//insights
		this->btn_Insights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
			static_cast<System::Int32>(static_cast<System::Byte>(29)));
		this->btn_Insights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
			static_cast<System::Int32>(static_cast<System::Byte>(69)));
		this->btn_Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
			static_cast<System::Int32>(static_cast<System::Byte>(29)));
		this->btn_Format->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
			static_cast<System::Int32>(static_cast<System::Byte>(69)));



		//activate
		switch (button) {
		case 0:
			this->btn_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			break;
		case 1:
			this->btn_Consistent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Consistent->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			break;
		case 2:
			this->btn_Compression->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Compression->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			break;
		case 3:
			this->btn_Insights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Insights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			break;
		case 4:
			this->btn_Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Format->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			break;

		}


	}
	
	//
	// toolbar button functions
	//
	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		Environment::Exit(0);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		if (this->WindowState == FormWindowState::Maximized) 
			this->WindowState = FormWindowState::Normal;
		else 
			this->WindowState = FormWindowState::Maximized;
	}

	//Collapse button function
	private: System::Void collapse_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pn_mb->Width == 50) {
			pn_mb->Width = 200;
		}
		else {
			pn_mb->Width = 50;
		}
	}


	//
	//Home browse button
	//
	private: System::Void btn_Browse_Click(System::Object^ sender, System::EventArgs^ e) {
		IO::Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
	
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((myStream = openFileDialog1->OpenFile()) != nullptr)
			{
				// Insert code to read the stream here.
				c_Status->Text = "File found";
				System::String^ managed = openFileDialog1->FileName;
				if(managed->Substring(managed->IndexOf(".")) == ".txt"){
					lbl_FileName->Text = managed;
					std::string unmanaged = msclr::interop::marshal_as<std::string>(managed);
	
					this->file = new File(unmanaged);
					myStream->Close();
				}
				else {
					c_Status->Text = "File is not txt";
				}
			}
		}
	}
};
}

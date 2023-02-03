#pragma once
#include "File.h"
#include "createFileForm.h"
#include <msclr\marshal_cppstd.h>
#include "Adapter.h"
#include "MyForm1.h"
#include "operations.h"
#include "XmlToTree.h"
#include "User.h"
#include "algorithm"


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

	private: System::Windows::Forms::Button^ btn_Home;

	private: System::Windows::Forms::Label^ Status_lb;
	private: System::Windows::Forms::Panel^ pn_Home;
	private: System::Windows::Forms::Panel^ pn_Insights;
	private: System::Windows::Forms::Panel^ pn_compression;
	private: System::Windows::Forms::Panel^ pn_Formatting;
	private: System::Windows::Forms::Panel^ pn_Search;

	private: System::Windows::Forms::Button^ btn_Format;
		   //protected:
		   //protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
		bool mov;
		int movx;
		int movy;
		bool unsavedChanges = false;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel3;
	private: System::Windows::Forms::Button^ collapse_btn;
	private: System::Windows::Forms::PictureBox^ big_Logo;







	private: System::Windows::Forms::TextBox^ tb_XML_viewer;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ Welcome_lbl;
	private: System::Windows::Forms::Button^ btn_Browse;
	private: System::Windows::Forms::Label^ lbl_FileName;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::SplitContainer^ cn_FileMenu;
	private: System::Windows::Forms::Button^ btn_selectFile;
	private: System::Windows::Forms::Button^ btn_newFile;
	private: System::Windows::Forms::ToolStrip^ Format_toolStrip;



	private: System::Windows::Forms::ToolStripButton^ Validator;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ Prettifier;
	private: System::Windows::Forms::ToolStripButton^ Corrector;
	private: System::Windows::Forms::ToolStripButton^ btn_restore;
	private: System::Windows::Forms::ToolStripDropDownButton^ Dbtn_Save;

	private: System::Windows::Forms::ToolStripMenuItem^ saveNewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToThisFileToolStripMenuItem;
	private: System::Windows::Forms::Button^ compress_btn;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ minify_btn;
	private: System::Windows::Forms::Button^ btn_decompress;
	private: System::Windows::Forms::Button^ btn_stCollapse;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RichTextBox^ tb_search;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel4;

private: System::Windows::Forms::RichTextBox^ c_Status;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ lbl_influential;

private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ lbl_active;














	private: static File* file;
		   vector <string>* elements;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel6;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label6;

private: System::Windows::Forms::Label^ lbl_suggested;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel7;
private: System::Windows::Forms::NumericUpDown^ nm_suggested;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ btn_searchTab;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel8;
private: System::Windows::Forms::Label^ lbl_userName;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::ListBox^ usersList;
private: System::Windows::Forms::FlowLayoutPanel^ tb_mutual;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel10;
private: System::Windows::Forms::NumericUpDown^ nm_mutual;

private: System::Windows::Forms::Button^ btn_mutual;
private: System::Windows::Forms::Label^ lbl_mutual_user;
private: System::Windows::Forms::Label^ lbl_mutual;
private: System::Windows::Forms::Label^ label9;



	   Graph* users;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->pn_tb = (gcnew System::Windows::Forms::Panel());
			   this->logo = (gcnew System::Windows::Forms::PictureBox());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->btn_minimize = (gcnew System::Windows::Forms::Button());
			   this->btn_maximize = (gcnew System::Windows::Forms::Button());
			   this->btn_close = (gcnew System::Windows::Forms::Button());
			   this->pn_mb = (gcnew System::Windows::Forms::Panel());
			   this->btn_searchTab = (gcnew System::Windows::Forms::Button());
			   this->flowLayoutPanel3 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->collapse_btn = (gcnew System::Windows::Forms::Button());
			   this->big_Logo = (gcnew System::Windows::Forms::PictureBox());
			   this->btn_Format = (gcnew System::Windows::Forms::Button());
			   this->btn_Home = (gcnew System::Windows::Forms::Button());
			   this->btn_Compression = (gcnew System::Windows::Forms::Button());
			   this->btn_Insights = (gcnew System::Windows::Forms::Button());
			   this->pn_sb = (gcnew System::Windows::Forms::Panel());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->c_Status = (gcnew System::Windows::Forms::RichTextBox());
			   this->Status_lb = (gcnew System::Windows::Forms::Label());
			   this->btn_stCollapse = (gcnew System::Windows::Forms::Button());
			   this->pn_cn = (gcnew System::Windows::Forms::Panel());
			   this->pn_Home = (gcnew System::Windows::Forms::Panel());
			   this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->Welcome_lbl = (gcnew System::Windows::Forms::Label());
			   this->cn_FileMenu = (gcnew System::Windows::Forms::SplitContainer());
			   this->btn_selectFile = (gcnew System::Windows::Forms::Button());
			   this->btn_newFile = (gcnew System::Windows::Forms::Button());
			   this->btn_Browse = (gcnew System::Windows::Forms::Button());
			   this->lbl_FileName = (gcnew System::Windows::Forms::Label());
			   this->pn_Insights = (gcnew System::Windows::Forms::Panel());
			   this->flowLayoutPanel8 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->flowLayoutPanel6 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->flowLayoutPanel7 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->nm_suggested = (gcnew System::Windows::Forms::NumericUpDown());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->lbl_userName = (gcnew System::Windows::Forms::Label());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->lbl_suggested = (gcnew System::Windows::Forms::Label());
			   this->tb_mutual = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->flowLayoutPanel10 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->nm_mutual = (gcnew System::Windows::Forms::NumericUpDown());
			   this->btn_mutual = (gcnew System::Windows::Forms::Button());
			   this->lbl_mutual_user = (gcnew System::Windows::Forms::Label());
			   this->lbl_mutual = (gcnew System::Windows::Forms::Label());
			   this->flowLayoutPanel4 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->lbl_influential = (gcnew System::Windows::Forms::Label());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->lbl_active = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->usersList = (gcnew System::Windows::Forms::ListBox());
			   this->pn_Search = (gcnew System::Windows::Forms::Panel());
			   this->flowLayoutPanel5 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->tb_search = (gcnew System::Windows::Forms::RichTextBox());
			   this->pn_Formatting = (gcnew System::Windows::Forms::Panel());
			   this->panel2 = (gcnew System::Windows::Forms::Panel());
			   this->Format_toolStrip = (gcnew System::Windows::Forms::ToolStrip());
			   this->Dbtn_Save = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			   this->saveNewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveToThisFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			   this->Validator = (gcnew System::Windows::Forms::ToolStripButton());
			   this->Prettifier = (gcnew System::Windows::Forms::ToolStripButton());
			   this->Corrector = (gcnew System::Windows::Forms::ToolStripButton());
			   this->btn_restore = (gcnew System::Windows::Forms::ToolStripButton());
			   this->tb_XML_viewer = (gcnew System::Windows::Forms::TextBox());
			   this->pn_compression = (gcnew System::Windows::Forms::Panel());
			   this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->minify_btn = (gcnew System::Windows::Forms::Button());
			   this->compress_btn = (gcnew System::Windows::Forms::Button());
			   this->btn_decompress = (gcnew System::Windows::Forms::Button());
			   this->pn_tb->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			   this->pn_mb->SuspendLayout();
			   this->flowLayoutPanel3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->big_Logo))->BeginInit();
			   this->pn_sb->SuspendLayout();
			   this->pn_cn->SuspendLayout();
			   this->pn_Home->SuspendLayout();
			   this->flowLayoutPanel2->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cn_FileMenu))->BeginInit();
			   this->cn_FileMenu->Panel1->SuspendLayout();
			   this->cn_FileMenu->Panel2->SuspendLayout();
			   this->cn_FileMenu->SuspendLayout();
			   this->pn_Insights->SuspendLayout();
			   this->flowLayoutPanel8->SuspendLayout();
			   this->flowLayoutPanel6->SuspendLayout();
			   this->flowLayoutPanel7->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nm_suggested))->BeginInit();
			   this->tb_mutual->SuspendLayout();
			   this->flowLayoutPanel10->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nm_mutual))->BeginInit();
			   this->flowLayoutPanel4->SuspendLayout();
			   this->pn_Search->SuspendLayout();
			   this->flowLayoutPanel5->SuspendLayout();
			   this->pn_Formatting->SuspendLayout();
			   this->panel2->SuspendLayout();
			   this->Format_toolStrip->SuspendLayout();
			   this->pn_compression->SuspendLayout();
			   this->flowLayoutPanel1->SuspendLayout();
			   this->SuspendLayout();
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
			   this->pn_tb->Size = System::Drawing::Size(1500, 61);
			   this->pn_tb->TabIndex = 2;
			   this->pn_tb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pn_tb_MouseDown);
			   this->pn_tb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pn_tb_MouseMove);
			   this->pn_tb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::pn_tb_MouseUp);
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
			   this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
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
			   this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
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
			   this->btn_minimize->Location = System::Drawing::Point(1372, 20);
			   this->btn_minimize->Name = L"btn_minimize";
			   this->btn_minimize->Size = System::Drawing::Size(32, 24);
			   this->btn_minimize->TabIndex = 4;
			   this->btn_minimize->UseVisualStyleBackColor = true;
			   this->btn_minimize->Click += gcnew System::EventHandler(this, &MyForm::minimize_Click);
			   // 
			   // btn_maximize
			   // 
			   this->btn_maximize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btn_maximize->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_maximize.BackgroundImage")));
			   this->btn_maximize->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->btn_maximize->FlatAppearance->BorderSize = 0;
			   this->btn_maximize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_maximize->Location = System::Drawing::Point(1415, 16);
			   this->btn_maximize->Name = L"btn_maximize";
			   this->btn_maximize->Size = System::Drawing::Size(32, 28);
			   this->btn_maximize->TabIndex = 3;
			   this->btn_maximize->UseVisualStyleBackColor = true;
			   this->btn_maximize->Click += gcnew System::EventHandler(this, &MyForm::maximise_Click);
			   // 
			   // btn_close
			   // 
			   this->btn_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			   this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->btn_close->FlatAppearance->BorderSize = 0;
			   this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_close->Location = System::Drawing::Point(1458, 17);
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
			   this->pn_mb->Controls->Add(this->btn_searchTab);
			   this->pn_mb->Controls->Add(this->flowLayoutPanel3);
			   this->pn_mb->Controls->Add(this->btn_Format);
			   this->pn_mb->Controls->Add(this->btn_Home);
			   this->pn_mb->Controls->Add(this->btn_Compression);
			   this->pn_mb->Controls->Add(this->btn_Insights);
			   this->pn_mb->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pn_mb->Location = System::Drawing::Point(0, 61);
			   this->pn_mb->Name = L"pn_mb";
			   this->pn_mb->Size = System::Drawing::Size(200, 688);
			   this->pn_mb->TabIndex = 3;
			   // 
			   // btn_searchTab
			   // 
			   this->btn_searchTab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->btn_searchTab->FlatAppearance->BorderSize = 0;
			   this->btn_searchTab->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_searchTab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_searchTab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->btn_searchTab->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_searchTab.Image")));
			   this->btn_searchTab->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_searchTab->Location = System::Drawing::Point(0, 412);
			   this->btn_searchTab->Name = L"btn_searchTab";
			   this->btn_searchTab->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			   this->btn_searchTab->Size = System::Drawing::Size(200, 49);
			   this->btn_searchTab->TabIndex = 10;
			   this->btn_searchTab->Text = L"Search";
			   this->btn_searchTab->UseVisualStyleBackColor = false;
			   this->btn_searchTab->Click += gcnew System::EventHandler(this, &MyForm::btn_searchTab_Click);
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
			   this->collapse_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->collapse_btn->FlatAppearance->BorderSize = 0;
			   this->collapse_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->collapse_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->collapse_btn->ForeColor = System::Drawing::SystemColors::Control;
			   this->collapse_btn->Location = System::Drawing::Point(180, 3);
			   this->collapse_btn->Name = L"collapse_btn";
			   this->collapse_btn->Size = System::Drawing::Size(17, 40);
			   this->collapse_btn->TabIndex = 4;
			   this->collapse_btn->UseVisualStyleBackColor = false;
			   this->collapse_btn->Click += gcnew System::EventHandler(this, &MyForm::collapse_btn_Click);
			   // 
			   // big_Logo
			   // 
			   this->big_Logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"big_Logo.BackgroundImage")));
			   this->big_Logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->big_Logo->Location = System::Drawing::Point(0, 46);
			   this->big_Logo->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
			   this->big_Logo->Name = L"big_Logo";
			   this->big_Logo->Size = System::Drawing::Size(197, 86);
			   this->big_Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
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
			   this->btn_Format->Location = System::Drawing::Point(0, 247);
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
			   this->btn_Compression->Location = System::Drawing::Point(0, 302);
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
			   this->btn_Insights->Location = System::Drawing::Point(0, 357);
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
			   this->pn_sb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->pn_sb->Controls->Add(this->button1);
			   this->pn_sb->Controls->Add(this->c_Status);
			   this->pn_sb->Controls->Add(this->Status_lb);
			   this->pn_sb->Controls->Add(this->btn_stCollapse);
			   this->pn_sb->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->pn_sb->Location = System::Drawing::Point(200, 647);
			   this->pn_sb->Name = L"pn_sb";
			   this->pn_sb->Size = System::Drawing::Size(1300, 102);
			   this->pn_sb->TabIndex = 4;
			   // 
			   // button1
			   // 
			   this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->button1->FlatAppearance->BorderSize = 0;
			   this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->button1->ForeColor = System::Drawing::SystemColors::Control;
			   this->button1->Location = System::Drawing::Point(490, 475);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(168, 52);
			   this->button1->TabIndex = 9;
			   this->button1->Text = L"Browse";
			   this->button1->UseVisualStyleBackColor = false;
			   // 
			   // c_Status
			   // 
			   this->c_Status->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->c_Status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->c_Status->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->c_Status->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F));
			   this->c_Status->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->c_Status->Location = System::Drawing::Point(131, 32);
			   this->c_Status->Margin = System::Windows::Forms::Padding(20);
			   this->c_Status->Name = L"c_Status";
			   this->c_Status->ReadOnly = true;
			   this->c_Status->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			   this->c_Status->Size = System::Drawing::Size(1097, 48);
			   this->c_Status->TabIndex = 4;
			   this->c_Status->Text = L"...";
			   // 
			   // Status_lb
			   // 
			   this->Status_lb->AutoSize = true;
			   this->Status_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Status_lb->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->Status_lb->Location = System::Drawing::Point(39, 32);
			   this->Status_lb->Name = L"Status_lb";
			   this->Status_lb->Size = System::Drawing::Size(72, 24);
			   this->Status_lb->TabIndex = 0;
			   this->Status_lb->Text = L"Status:";
			   // 
			   // btn_stCollapse
			   // 
			   this->btn_stCollapse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			   this->btn_stCollapse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->btn_stCollapse->FlatAppearance->BorderSize = 0;
			   this->btn_stCollapse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_stCollapse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_stCollapse->ForeColor = System::Drawing::SystemColors::Control;
			   this->btn_stCollapse->Location = System::Drawing::Point(1258, 0);
			   this->btn_stCollapse->Name = L"btn_stCollapse";
			   this->btn_stCollapse->Size = System::Drawing::Size(40, 17);
			   this->btn_stCollapse->TabIndex = 6;
			   this->btn_stCollapse->UseVisualStyleBackColor = false;
			   this->btn_stCollapse->Click += gcnew System::EventHandler(this, &MyForm::btn_stCollapse_Click);
			   // 
			   // pn_cn
			   // 
			   this->pn_cn->BackColor = System::Drawing::Color::Transparent;
			   this->pn_cn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->pn_cn->Controls->Add(this->pn_Home);
			   this->pn_cn->Controls->Add(this->pn_Insights);
			   this->pn_cn->Controls->Add(this->pn_Search);
			   this->pn_cn->Controls->Add(this->pn_Formatting);
			   this->pn_cn->Controls->Add(this->pn_compression);
			   this->pn_cn->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_cn->Location = System::Drawing::Point(200, 61);
			   this->pn_cn->Name = L"pn_cn";
			   this->pn_cn->Size = System::Drawing::Size(1300, 586);
			   this->pn_cn->TabIndex = 5;
			   // 
			   // pn_Home
			   // 
			   this->pn_Home->Controls->Add(this->flowLayoutPanel2);
			   this->pn_Home->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_Home->Location = System::Drawing::Point(0, 0);
			   this->pn_Home->Name = L"pn_Home";
			   this->pn_Home->Size = System::Drawing::Size(1300, 586);
			   this->pn_Home->TabIndex = 0;
			   // 
			   // flowLayoutPanel2
			   // 
			   this->flowLayoutPanel2->Controls->Add(this->Welcome_lbl);
			   this->flowLayoutPanel2->Controls->Add(this->cn_FileMenu);
			   this->flowLayoutPanel2->Controls->Add(this->lbl_FileName);
			   this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			   this->flowLayoutPanel2->Size = System::Drawing::Size(1300, 586);
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
			   // cn_FileMenu
			   // 
			   this->cn_FileMenu->Anchor = System::Windows::Forms::AnchorStyles::Top;
			   this->cn_FileMenu->Location = System::Drawing::Point(500, 311);
			   this->cn_FileMenu->Name = L"cn_FileMenu";
			   this->cn_FileMenu->Orientation = System::Windows::Forms::Orientation::Horizontal;
			   // 
			   // cn_FileMenu.Panel1
			   // 
			   this->cn_FileMenu->Panel1->Controls->Add(this->btn_selectFile);
			   // 
			   // cn_FileMenu.Panel2
			   // 
			   this->cn_FileMenu->Panel2->BackColor = System::Drawing::Color::Transparent;
			   this->cn_FileMenu->Panel2->Controls->Add(this->btn_newFile);
			   this->cn_FileMenu->Panel2->Controls->Add(this->btn_Browse);
			   this->cn_FileMenu->Panel2Collapsed = true;
			   this->cn_FileMenu->Size = System::Drawing::Size(150, 60);
			   this->cn_FileMenu->SplitterDistance = 31;
			   this->cn_FileMenu->TabIndex = 10;
			   this->cn_FileMenu->Leave += gcnew System::EventHandler(this, &MyForm::cn_FileMenu_Leave);
			   // 
			   // btn_selectFile
			   // 
			   this->btn_selectFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->btn_selectFile->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->btn_selectFile->FlatAppearance->BorderSize = 0;
			   this->btn_selectFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_selectFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_selectFile->ForeColor = System::Drawing::SystemColors::Control;
			   this->btn_selectFile->Location = System::Drawing::Point(0, 0);
			   this->btn_selectFile->Margin = System::Windows::Forms::Padding(0);
			   this->btn_selectFile->Name = L"btn_selectFile";
			   this->btn_selectFile->RightToLeft = System::Windows::Forms::RightToLeft::No;
			   this->btn_selectFile->Size = System::Drawing::Size(150, 60);
			   this->btn_selectFile->TabIndex = 9;
			   this->btn_selectFile->Text = L"File";
			   this->btn_selectFile->UseVisualStyleBackColor = false;
			   this->btn_selectFile->Click += gcnew System::EventHandler(this, &MyForm::btn_selectFile_Click);
			   // 
			   // btn_newFile
			   // 
			   this->btn_newFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->btn_newFile->Dock = System::Windows::Forms::DockStyle::Bottom;
			   this->btn_newFile->FlatAppearance->BorderSize = 0;
			   this->btn_newFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_newFile->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_newFile->ForeColor = System::Drawing::SystemColors::Control;
			   this->btn_newFile->Location = System::Drawing::Point(0, -4);
			   this->btn_newFile->Margin = System::Windows::Forms::Padding(0);
			   this->btn_newFile->Name = L"btn_newFile";
			   this->btn_newFile->Padding = System::Windows::Forms::Padding(5);
			   this->btn_newFile->Size = System::Drawing::Size(150, 50);
			   this->btn_newFile->TabIndex = 9;
			   this->btn_newFile->Text = L"New";
			   this->btn_newFile->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->btn_newFile->UseVisualStyleBackColor = false;
			   this->btn_newFile->Click += gcnew System::EventHandler(this, &MyForm::btn_newFile_Click);
			   // 
			   // btn_Browse
			   // 
			   this->btn_Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->btn_Browse->Dock = System::Windows::Forms::DockStyle::Top;
			   this->btn_Browse->FlatAppearance->BorderSize = 0;
			   this->btn_Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_Browse->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btn_Browse->ForeColor = System::Drawing::SystemColors::Control;
			   this->btn_Browse->Location = System::Drawing::Point(0, 0);
			   this->btn_Browse->Name = L"btn_Browse";
			   this->btn_Browse->Padding = System::Windows::Forms::Padding(5);
			   this->btn_Browse->Size = System::Drawing::Size(150, 50);
			   this->btn_Browse->TabIndex = 8;
			   this->btn_Browse->Text = L"Open ";
			   this->btn_Browse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			   this->lbl_FileName->Location = System::Drawing::Point(495, 394);
			   this->lbl_FileName->Margin = System::Windows::Forms::Padding(3, 20, 3, 0);
			   this->lbl_FileName->Name = L"lbl_FileName";
			   this->lbl_FileName->Size = System::Drawing::Size(160, 26);
			   this->lbl_FileName->TabIndex = 9;
			   this->lbl_FileName->Text = L"No File is Selected";
			   this->lbl_FileName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pn_Insights
			   // 
			   this->pn_Insights->Controls->Add(this->flowLayoutPanel8);
			   this->pn_Insights->Controls->Add(this->flowLayoutPanel4);
			   this->pn_Insights->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_Insights->Location = System::Drawing::Point(0, 0);
			   this->pn_Insights->Name = L"pn_Insights";
			   this->pn_Insights->Size = System::Drawing::Size(1300, 586);
			   this->pn_Insights->TabIndex = 4;
			   // 
			   // flowLayoutPanel8
			   // 
			   this->flowLayoutPanel8->Controls->Add(this->flowLayoutPanel6);
			   this->flowLayoutPanel8->Controls->Add(this->flowLayoutPanel7);
			   this->flowLayoutPanel8->Controls->Add(this->label8);
			   this->flowLayoutPanel8->Controls->Add(this->lbl_suggested);
			   this->flowLayoutPanel8->Controls->Add(this->tb_mutual);
			   this->flowLayoutPanel8->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->flowLayoutPanel8->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel8->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel8->Name = L"flowLayoutPanel8";
			   this->flowLayoutPanel8->Padding = System::Windows::Forms::Padding(20);
			   this->flowLayoutPanel8->Size = System::Drawing::Size(859, 586);
			   this->flowLayoutPanel8->TabIndex = 1;
			   // 
			   // flowLayoutPanel6
			   // 
			   this->flowLayoutPanel6->Controls->Add(this->label4);
			   this->flowLayoutPanel6->Controls->Add(this->label6);
			   this->flowLayoutPanel6->Location = System::Drawing::Point(40, 40);
			   this->flowLayoutPanel6->Margin = System::Windows::Forms::Padding(20);
			   this->flowLayoutPanel6->Name = L"flowLayoutPanel6";
			   this->flowLayoutPanel6->Size = System::Drawing::Size(341, 43);
			   this->flowLayoutPanel6->TabIndex = 15;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->label4->Location = System::Drawing::Point(0, 0);
			   this->label4->Margin = System::Windows::Forms::Padding(0);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(88, 37);
			   this->label4->TabIndex = 14;
			   this->label4->Text = L"User";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->label6->Location = System::Drawing::Point(88, 10);
			   this->label6->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(82, 26);
			   this->label6->TabIndex = 16;
			   this->label6->Text = L"insert ID";
			   // 
			   // flowLayoutPanel7
			   // 
			   this->flowLayoutPanel7->Controls->Add(this->nm_suggested);
			   this->flowLayoutPanel7->Controls->Add(this->button2);
			   this->flowLayoutPanel7->Controls->Add(this->lbl_userName);
			   this->flowLayoutPanel7->Location = System::Drawing::Point(60, 103);
			   this->flowLayoutPanel7->Margin = System::Windows::Forms::Padding(40, 0, 20, 0);
			   this->flowLayoutPanel7->Name = L"flowLayoutPanel7";
			   this->flowLayoutPanel7->Size = System::Drawing::Size(409, 48);
			   this->flowLayoutPanel7->TabIndex = 18;
			   // 
			   // nm_suggested
			   // 
			   this->nm_suggested->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->nm_suggested->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->nm_suggested->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->nm_suggested->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->nm_suggested->Location = System::Drawing::Point(5, 5);
			   this->nm_suggested->Margin = System::Windows::Forms::Padding(5);
			   this->nm_suggested->Name = L"nm_suggested";
			   this->nm_suggested->Size = System::Drawing::Size(120, 27);
			   this->nm_suggested->TabIndex = 17;
			   this->nm_suggested->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			   this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->button2->FlatAppearance->BorderSize = 0;
			   this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button2->Location = System::Drawing::Point(150, 3);
			   this->button2->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(24, 24);
			   this->button2->TabIndex = 18;
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // lbl_userName
			   // 
			   this->lbl_userName->AutoSize = true;
			   this->lbl_userName->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_userName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_userName->Location = System::Drawing::Point(217, 0);
			   this->lbl_userName->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_userName->Name = L"lbl_userName";
			   this->lbl_userName->Size = System::Drawing::Size(27, 26);
			   this->lbl_userName->TabIndex = 20;
			   this->lbl_userName->Text = L"...";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->label8->Location = System::Drawing::Point(60, 171);
			   this->label8->Margin = System::Windows::Forms::Padding(40, 20, 20, 20);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(199, 24);
			   this->label8->TabIndex = 19;
			   this->label8->Text = L"Suggested followers";
			   // 
			   // lbl_suggested
			   // 
			   this->lbl_suggested->AutoSize = true;
			   this->lbl_suggested->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_suggested->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_suggested->Location = System::Drawing::Point(60, 215);
			   this->lbl_suggested->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_suggested->Name = L"lbl_suggested";
			   this->lbl_suggested->Size = System::Drawing::Size(27, 26);
			   this->lbl_suggested->TabIndex = 16;
			   this->lbl_suggested->Text = L"...";
			   // 
			   // tb_mutual
			   // 
			   this->tb_mutual->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->tb_mutual->Controls->Add(this->label10);
			   this->tb_mutual->Controls->Add(this->flowLayoutPanel10);
			   this->tb_mutual->Controls->Add(this->lbl_mutual);
			   this->tb_mutual->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->tb_mutual->Location = System::Drawing::Point(40, 281);
			   this->tb_mutual->Margin = System::Windows::Forms::Padding(20);
			   this->tb_mutual->Name = L"tb_mutual";
			   this->tb_mutual->Size = System::Drawing::Size(761, 252);
			   this->tb_mutual->TabIndex = 20;
			   this->tb_mutual->Visible = false;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			   this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->label10->Location = System::Drawing::Point(40, 20);
			   this->label10->Margin = System::Windows::Forms::Padding(40, 20, 20, 20);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(183, 20);
			   this->label10->TabIndex = 24;
			   this->label10->Text = L"Mutual followed users";
			   // 
			   // flowLayoutPanel10
			   // 
			   this->flowLayoutPanel10->Controls->Add(this->nm_mutual);
			   this->flowLayoutPanel10->Controls->Add(this->btn_mutual);
			   this->flowLayoutPanel10->Controls->Add(this->lbl_mutual_user);
			   this->flowLayoutPanel10->Location = System::Drawing::Point(40, 60);
			   this->flowLayoutPanel10->Margin = System::Windows::Forms::Padding(40, 0, 20, 0);
			   this->flowLayoutPanel10->Name = L"flowLayoutPanel10";
			   this->flowLayoutPanel10->Size = System::Drawing::Size(409, 48);
			   this->flowLayoutPanel10->TabIndex = 23;
			   // 
			   // nm_mutual
			   // 
			   this->nm_mutual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->nm_mutual->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->nm_mutual->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->nm_mutual->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->nm_mutual->Location = System::Drawing::Point(5, 5);
			   this->nm_mutual->Margin = System::Windows::Forms::Padding(5);
			   this->nm_mutual->Name = L"nm_mutual";
			   this->nm_mutual->Size = System::Drawing::Size(120, 27);
			   this->nm_mutual->TabIndex = 17;
			   this->nm_mutual->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   // 
			   // btn_mutual
			   // 
			   this->btn_mutual->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->btn_mutual->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_mutual.BackgroundImage")));
			   this->btn_mutual->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->btn_mutual->FlatAppearance->BorderSize = 0;
			   this->btn_mutual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_mutual->Location = System::Drawing::Point(150, 3);
			   this->btn_mutual->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->btn_mutual->Name = L"btn_mutual";
			   this->btn_mutual->Size = System::Drawing::Size(24, 24);
			   this->btn_mutual->TabIndex = 18;
			   this->btn_mutual->UseVisualStyleBackColor = false;
			   this->btn_mutual->Click += gcnew System::EventHandler(this, &MyForm::btn_mutual_Click);
			   // 
			   // lbl_mutual_user
			   // 
			   this->lbl_mutual_user->AutoSize = true;
			   this->lbl_mutual_user->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_mutual_user->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_mutual_user->Location = System::Drawing::Point(217, 0);
			   this->lbl_mutual_user->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_mutual_user->Name = L"lbl_mutual_user";
			   this->lbl_mutual_user->Size = System::Drawing::Size(27, 26);
			   this->lbl_mutual_user->TabIndex = 20;
			   this->lbl_mutual_user->Text = L"...";
			   // 
			   // lbl_mutual
			   // 
			   this->lbl_mutual->AutoSize = true;
			   this->lbl_mutual->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_mutual->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_mutual->Location = System::Drawing::Point(40, 108);
			   this->lbl_mutual->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_mutual->Name = L"lbl_mutual";
			   this->lbl_mutual->Size = System::Drawing::Size(27, 26);
			   this->lbl_mutual->TabIndex = 25;
			   this->lbl_mutual->Text = L"...";
			   // 
			   // flowLayoutPanel4
			   // 
			   this->flowLayoutPanel4->Controls->Add(this->label3);
			   this->flowLayoutPanel4->Controls->Add(this->lbl_influential);
			   this->flowLayoutPanel4->Controls->Add(this->label5);
			   this->flowLayoutPanel4->Controls->Add(this->lbl_active);
			   this->flowLayoutPanel4->Controls->Add(this->label9);
			   this->flowLayoutPanel4->Controls->Add(this->usersList);
			   this->flowLayoutPanel4->Dock = System::Windows::Forms::DockStyle::Right;
			   this->flowLayoutPanel4->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			   this->flowLayoutPanel4->Location = System::Drawing::Point(859, 0);
			   this->flowLayoutPanel4->Name = L"flowLayoutPanel4";
			   this->flowLayoutPanel4->Padding = System::Windows::Forms::Padding(20);
			   this->flowLayoutPanel4->Size = System::Drawing::Size(441, 586);
			   this->flowLayoutPanel4->TabIndex = 0;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->label3->Location = System::Drawing::Point(40, 40);
			   this->label3->Margin = System::Windows::Forms::Padding(20);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(196, 24);
			   this->label3->TabIndex = 10;
			   this->label3->Text = L"Most influential user";
			   // 
			   // lbl_influential
			   // 
			   this->lbl_influential->AutoSize = true;
			   this->lbl_influential->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_influential->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_influential->Location = System::Drawing::Point(60, 84);
			   this->lbl_influential->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_influential->Name = L"lbl_influential";
			   this->lbl_influential->Size = System::Drawing::Size(27, 26);
			   this->lbl_influential->TabIndex = 7;
			   this->lbl_influential->Text = L"...";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->label5->Location = System::Drawing::Point(40, 150);
			   this->label5->Margin = System::Windows::Forms::Padding(20);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(161, 24);
			   this->label5->TabIndex = 11;
			   this->label5->Text = L"Most active user";
			   // 
			   // lbl_active
			   // 
			   this->lbl_active->AutoSize = true;
			   this->lbl_active->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbl_active->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->lbl_active->Location = System::Drawing::Point(60, 194);
			   this->lbl_active->Margin = System::Windows::Forms::Padding(40, 0, 20, 20);
			   this->lbl_active->Name = L"lbl_active";
			   this->lbl_active->Size = System::Drawing::Size(27, 26);
			   this->lbl_active->TabIndex = 12;
			   this->lbl_active->Text = L"...";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->label9->Location = System::Drawing::Point(40, 260);
			   this->label9->Margin = System::Windows::Forms::Padding(20);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(94, 24);
			   this->label9->TabIndex = 21;
			   this->label9->Text = L"Users list";
			   // 
			   // usersList
			   // 
			   this->usersList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->usersList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->usersList->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12));
			   this->usersList->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->usersList->FormattingEnabled = true;
			   this->usersList->ItemHeight = 19;
			   this->usersList->Location = System::Drawing::Point(40, 324);
			   this->usersList->Margin = System::Windows::Forms::Padding(20);
			   this->usersList->Name = L"usersList";
			   this->usersList->Size = System::Drawing::Size(354, 135);
			   this->usersList->TabIndex = 20;
			   this->usersList->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::usersList_SelectedIndexChanged);
			   // 
			   // pn_Search
			   // 
			   this->pn_Search->Controls->Add(this->flowLayoutPanel5);
			   this->pn_Search->Controls->Add(this->tb_search);
			   this->pn_Search->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_Search->Location = System::Drawing::Point(0, 0);
			   this->pn_Search->Name = L"pn_Search";
			   this->pn_Search->Size = System::Drawing::Size(1300, 586);
			   this->pn_Search->TabIndex = 1;
			   // 
			   // flowLayoutPanel5
			   // 
			   this->flowLayoutPanel5->Controls->Add(this->textBox1);
			   this->flowLayoutPanel5->Controls->Add(this->button3);
			   this->flowLayoutPanel5->Controls->Add(this->label7);
			   this->flowLayoutPanel5->Dock = System::Windows::Forms::DockStyle::Top;
			   this->flowLayoutPanel5->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel5->Name = L"flowLayoutPanel5";
			   this->flowLayoutPanel5->Padding = System::Windows::Forms::Padding(40, 40, 0, 40);
			   this->flowLayoutPanel5->Size = System::Drawing::Size(1300, 127);
			   this->flowLayoutPanel5->TabIndex = 1;
			   // 
			   // textBox1
			   // 
			   this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			   this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->textBox1->Location = System::Drawing::Point(50, 50);
			   this->textBox1->Margin = System::Windows::Forms::Padding(10);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(254, 24);
			   this->textBox1->TabIndex = 2;
			   this->textBox1->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::textBox1_KeyUp);
			   // 
			   // button3
			   // 
			   this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			   this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->button3->Location = System::Drawing::Point(317, 43);
			   this->button3->Name = L"button3";
			   this->button3->Padding = System::Windows::Forms::Padding(5);
			   this->button3->Size = System::Drawing::Size(40, 40);
			   this->button3->TabIndex = 4;
			   this->button3->UseVisualStyleBackColor = false;
			   this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->label7->Location = System::Drawing::Point(380, 50);
			   this->label7->Margin = System::Windows::Forms::Padding(20, 10, 20, 0);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(131, 24);
			   this->label7->TabIndex = 11;
			   this->label7->Text = L"Search posts";
			   // 
			   // tb_search
			   // 
			   this->tb_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tb_search->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(53)));
			   this->tb_search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->tb_search->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F));
			   this->tb_search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->tb_search->Location = System::Drawing::Point(53, 151);
			   this->tb_search->Margin = System::Windows::Forms::Padding(0, 32, 0, 0);
			   this->tb_search->Name = L"tb_search";
			   this->tb_search->ReadOnly = true;
			   this->tb_search->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			   this->tb_search->Size = System::Drawing::Size(1027, 397);
			   this->tb_search->TabIndex = 3;
			   this->tb_search->Text = L"";
			   // 
			   // pn_Formatting
			   // 
			   this->pn_Formatting->Controls->Add(this->panel2);
			   this->pn_Formatting->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_Formatting->Location = System::Drawing::Point(0, 0);
			   this->pn_Formatting->Name = L"pn_Formatting";
			   this->pn_Formatting->Size = System::Drawing::Size(1300, 586);
			   this->pn_Formatting->TabIndex = 2;
			   // 
			   // panel2
			   // 
			   this->panel2->Controls->Add(this->Format_toolStrip);
			   this->panel2->Controls->Add(this->tb_XML_viewer);
			   this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->panel2->Location = System::Drawing::Point(0, 0);
			   this->panel2->Margin = System::Windows::Forms::Padding(50);
			   this->panel2->Name = L"panel2";
			   this->panel2->Size = System::Drawing::Size(1300, 586);
			   this->panel2->TabIndex = 3;
			   // 
			   // Format_toolStrip
			   // 
			   this->Format_toolStrip->BackColor = System::Drawing::Color::Transparent;
			   this->Format_toolStrip->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			   this->Format_toolStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				   this->Dbtn_Save,
					   this->toolStripSeparator1, this->Validator, this->Prettifier, this->Corrector, this->btn_restore
			   });
			   this->Format_toolStrip->Location = System::Drawing::Point(0, 0);
			   this->Format_toolStrip->Name = L"Format_toolStrip";
			   this->Format_toolStrip->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			   this->Format_toolStrip->Size = System::Drawing::Size(1300, 53);
			   this->Format_toolStrip->TabIndex = 5;
			   this->Format_toolStrip->Text = L"toolStrip1";
			   // 
			   // Dbtn_Save
			   // 
			   this->Dbtn_Save->AutoSize = false;
			   this->Dbtn_Save->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Dbtn_Save->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				   this->saveNewToolStripMenuItem,
					   this->saveToThisFileToolStripMenuItem
			   });
			   this->Dbtn_Save->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Dbtn_Save.Image")));
			   this->Dbtn_Save->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Dbtn_Save->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Dbtn_Save->Name = L"Dbtn_Save";
			   this->Dbtn_Save->Size = System::Drawing::Size(60, 50);
			   this->Dbtn_Save->Text = L"Save";
			   // 
			   // saveNewToolStripMenuItem
			   // 
			   this->saveNewToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				   static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->saveNewToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->saveNewToolStripMenuItem->Name = L"saveNewToolStripMenuItem";
			   this->saveNewToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				   | System::Windows::Forms::Keys::S));
			   this->saveNewToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			   this->saveNewToolStripMenuItem->Text = L"Save new";
			   this->saveNewToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveNewToolStripMenuItem_Click);
			   // 
			   // saveToThisFileToolStripMenuItem
			   // 
			   this->saveToThisFileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)),
				   static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->saveToThisFileToolStripMenuItem->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->saveToThisFileToolStripMenuItem->Name = L"saveToThisFileToolStripMenuItem";
			   this->saveToThisFileToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			   this->saveToThisFileToolStripMenuItem->Size = System::Drawing::Size(195, 22);
			   this->saveToThisFileToolStripMenuItem->Text = L"save to this file";
			   this->saveToThisFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToThisFileToolStripMenuItem_Click);
			   // 
			   // toolStripSeparator1
			   // 
			   this->toolStripSeparator1->AutoSize = false;
			   this->toolStripSeparator1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)),
				   static_cast<System::Int32>(static_cast<System::Byte>(217)), static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->toolStripSeparator1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			   this->toolStripSeparator1->Name = L"toolStripSeparator1";
			   this->toolStripSeparator1->Size = System::Drawing::Size(2, 35);
			   // 
			   // Validator
			   // 
			   this->Validator->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Validator->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Validator.Image")));
			   this->Validator->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Validator->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Validator->Margin = System::Windows::Forms::Padding(5, 1, 5, 2);
			   this->Validator->Name = L"Validator";
			   this->Validator->Size = System::Drawing::Size(35, 50);
			   this->Validator->Text = L"consistency";
			   this->Validator->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			   this->Validator->Click += gcnew System::EventHandler(this, &MyForm::Validator_Click);
			   // 
			   // Prettifier
			   // 
			   this->Prettifier->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Prettifier->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->Prettifier->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Prettifier.Image")));
			   this->Prettifier->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Prettifier->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Prettifier->Margin = System::Windows::Forms::Padding(5, 1, 5, 2);
			   this->Prettifier->Name = L"Prettifier";
			   this->Prettifier->Size = System::Drawing::Size(34, 50);
			   this->Prettifier->Text = L"format";
			   this->Prettifier->Click += gcnew System::EventHandler(this, &MyForm::Prettifier_Click);
			   // 
			   // Corrector
			   // 
			   this->Corrector->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->Corrector->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Corrector.Image")));
			   this->Corrector->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->Corrector->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->Corrector->Margin = System::Windows::Forms::Padding(5, 1, 5, 2);
			   this->Corrector->Name = L"Corrector";
			   this->Corrector->Size = System::Drawing::Size(35, 50);
			   this->Corrector->Text = L"Fix";
			   this->Corrector->Click += gcnew System::EventHandler(this, &MyForm::Corrector_Click);
			   // 
			   // btn_restore
			   // 
			   this->btn_restore->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			   this->btn_restore->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_restore.Image")));
			   this->btn_restore->ImageScaling = System::Windows::Forms::ToolStripItemImageScaling::None;
			   this->btn_restore->ImageTransparentColor = System::Drawing::Color::Magenta;
			   this->btn_restore->Margin = System::Windows::Forms::Padding(5, 1, 5, 2);
			   this->btn_restore->Name = L"btn_restore";
			   this->btn_restore->Size = System::Drawing::Size(35, 50);
			   this->btn_restore->Text = L"Restore";
			   this->btn_restore->Click += gcnew System::EventHandler(this, &MyForm::btn_restore_Click);
			   // 
			   // tb_XML_viewer
			   // 
			   this->tb_XML_viewer->AcceptsTab = true;
			   this->tb_XML_viewer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tb_XML_viewer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				   static_cast<System::Int32>(static_cast<System::Byte>(29)));
			   this->tb_XML_viewer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->tb_XML_viewer->Font = (gcnew System::Drawing::Font(L"Corbel Light", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->tb_XML_viewer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->tb_XML_viewer->Location = System::Drawing::Point(53, 103);
			   this->tb_XML_viewer->Margin = System::Windows::Forms::Padding(50);
			   this->tb_XML_viewer->Multiline = true;
			   this->tb_XML_viewer->Name = L"tb_XML_viewer";
			   this->tb_XML_viewer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			   this->tb_XML_viewer->Size = System::Drawing::Size(1200, 430);
			   this->tb_XML_viewer->TabIndex = 4;
			   this->tb_XML_viewer->Text = L"Select an operation";
			   this->tb_XML_viewer->TextChanged += gcnew System::EventHandler(this, &MyForm::tb_XML_viewer_TextChanged);
			   // 
			   // pn_compression
			   // 
			   this->pn_compression->Controls->Add(this->flowLayoutPanel1);
			   this->pn_compression->Dock = System::Windows::Forms::DockStyle::Fill;
			   this->pn_compression->Location = System::Drawing::Point(0, 0);
			   this->pn_compression->Name = L"pn_compression";
			   this->pn_compression->Size = System::Drawing::Size(1300, 586);
			   this->pn_compression->TabIndex = 3;
			   // 
			   // flowLayoutPanel1
			   // 
			   this->flowLayoutPanel1->Controls->Add(this->minify_btn);
			   this->flowLayoutPanel1->Controls->Add(this->compress_btn);
			   this->flowLayoutPanel1->Controls->Add(this->btn_decompress);
			   this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			   this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			   this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			   this->flowLayoutPanel1->Size = System::Drawing::Size(1300, 586);
			   this->flowLayoutPanel1->TabIndex = 1;
			   // 
			   // minify_btn
			   // 
			   this->minify_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(53)));
			   this->minify_btn->FlatAppearance->BorderSize = 0;
			   this->minify_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->minify_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			   this->minify_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->minify_btn->Location = System::Drawing::Point(3, 3);
			   this->minify_btn->Name = L"minify_btn";
			   this->minify_btn->Size = System::Drawing::Size(122, 49);
			   this->minify_btn->TabIndex = 1;
			   this->minify_btn->Text = L"minify";
			   this->minify_btn->UseVisualStyleBackColor = false;
			   this->minify_btn->Click += gcnew System::EventHandler(this, &MyForm::minify_btn_Click);
			   // 
			   // compress_btn
			   // 
			   this->compress_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(53)));
			   this->compress_btn->FlatAppearance->BorderSize = 0;
			   this->compress_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->compress_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			   this->compress_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->compress_btn->Location = System::Drawing::Point(131, 3);
			   this->compress_btn->Name = L"compress_btn";
			   this->compress_btn->Size = System::Drawing::Size(122, 49);
			   this->compress_btn->TabIndex = 0;
			   this->compress_btn->Text = L"compress";
			   this->compress_btn->UseVisualStyleBackColor = false;
			   // 
			   // btn_decompress
			   // 
			   this->btn_decompress->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				   static_cast<System::Int32>(static_cast<System::Byte>(53)));
			   this->btn_decompress->FlatAppearance->BorderSize = 0;
			   this->btn_decompress->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btn_decompress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			   this->btn_decompress->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(69)));
			   this->btn_decompress->Location = System::Drawing::Point(259, 3);
			   this->btn_decompress->Name = L"btn_decompress";
			   this->btn_decompress->Size = System::Drawing::Size(122, 49);
			   this->btn_decompress->TabIndex = 2;
			   this->btn_decompress->Text = L"decompress";
			   this->btn_decompress->UseVisualStyleBackColor = false;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				   static_cast<System::Int32>(static_cast<System::Byte>(33)));
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1500, 749);
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
			   this->cn_FileMenu->Panel1->ResumeLayout(false);
			   this->cn_FileMenu->Panel2->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cn_FileMenu))->EndInit();
			   this->cn_FileMenu->ResumeLayout(false);
			   this->pn_Insights->ResumeLayout(false);
			   this->flowLayoutPanel8->ResumeLayout(false);
			   this->flowLayoutPanel8->PerformLayout();
			   this->flowLayoutPanel6->ResumeLayout(false);
			   this->flowLayoutPanel6->PerformLayout();
			   this->flowLayoutPanel7->ResumeLayout(false);
			   this->flowLayoutPanel7->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nm_suggested))->EndInit();
			   this->tb_mutual->ResumeLayout(false);
			   this->tb_mutual->PerformLayout();
			   this->flowLayoutPanel10->ResumeLayout(false);
			   this->flowLayoutPanel10->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nm_mutual))->EndInit();
			   this->flowLayoutPanel4->ResumeLayout(false);
			   this->flowLayoutPanel4->PerformLayout();
			   this->pn_Search->ResumeLayout(false);
			   this->flowLayoutPanel5->ResumeLayout(false);
			   this->flowLayoutPanel5->PerformLayout();
			   this->pn_Formatting->ResumeLayout(false);
			   this->panel2->ResumeLayout(false);
			   this->panel2->PerformLayout();
			   this->Format_toolStrip->ResumeLayout(false);
			   this->Format_toolStrip->PerformLayout();
			   this->pn_compression->ResumeLayout(false);
			   this->flowLayoutPanel1->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   

//------------------------------------
//	||							||
//	||		ToolBar panel		||
//	||							||
//------------------------------------


	private: System::Void close_Click(System::Object^ sender, System::EventArgs^ e) {
		if (unsavedChanges) {
			MyForm1^ saveWarning = gcnew MyForm1();
			System::Windows::Forms::DialogResult dr = saveWarning->ShowDialog(this);
			if (dr == System::Windows::Forms::DialogResult::No)
			{
				saveWarning->Close();
				Environment::Exit(0);
			}
			else if (dr == System::Windows::Forms::DialogResult::Yes)
			{
				saveWarning->Close();
				if (file == nullptr) {
					createNewFile();
				}
				file->saveFile(Adapter::to_unmanaged(tb_XML_viewer->Text));
				c_Status->Text = "Save complete";
				Environment::Exit(0);
			}

		}
		else
			Environment::Exit(0);

	}
	private: System::Void maximise_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->WindowState == FormWindowState::Maximized)
			this->WindowState = FormWindowState::Normal;
		else
			this->WindowState = FormWindowState::Maximized;
	}
	private: System::Void minimize_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void pn_tb_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mov = true;
		movx = e->X;
		movy = e->Y;
	}
	private: System::Void pn_tb_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mov = false;
	}
	private: System::Void pn_tb_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (mov) {
			this->SetDesktopLocation(MousePosition.X - movx, MousePosition.Y - movy);
		}
	}


//------------------------------------
//	||							||
//	||		SideBar panels		||
//	||							||
//------------------------------------
			//------------------------
			// panel switch functions
			//------------------------

	private: System::Void btn_Home_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_Home->BringToFront();
		activateBTN(0);
	}
	private: System::Void btn_searchTab_Click(System::Object^ sender, System::EventArgs^ e) {
		pn_Search->BringToFront();
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
		   
			//------------------------
			//Collapse button function
			//------------------------

	private: System::Void collapse_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pn_mb->Width == 50) {
			pn_mb->Width = 200;
		}
		else {
			pn_mb->Width = 50;
		}
	}


//------------------------------------
//	||							||
//	||		Container panels	||
//	||							||
//------------------------------------
			//------------------------
			//	Home window
			//------------------------

	//collapse File Menu
	private: System::Void btn_selectFile_Click(System::Object^ sender, System::EventArgs^ e) {
		if (cn_FileMenu->Height == 60) {
			cn_FileMenu->Height = 160;
			cn_FileMenu->SplitterDistance = 60;
			cn_FileMenu->Panel2Collapsed = false;
		}
		else {
			cn_FileMenu->Height = 60;
			cn_FileMenu->Panel2Collapsed = true;
		}
	}
	private: System::Void cn_FileMenu_Leave(System::Object^ sender, System::EventArgs^ e) {
		cn_FileMenu->Height = 60;
		cn_FileMenu->Panel2Collapsed = true;
	}
	//open a file
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
				c_Status->Text = "File found";
				System::String^ managed = openFileDialog1->FileName;
				if (managed->Substring(managed->IndexOf(".")) == ".txt") {
					myStream->Close();
					setFile(managed);
					ViewFileXml();
					pn_Formatting->BringToFront();
					activateBTN(4);
				}
				else {
					c_Status->Text = "File is not txt";
				}
			}

		}
	}
	//Create a new File
	private: System::Void btn_newFile_Click(System::Object^ sender, System::EventArgs^ e) {
		if (createNewFile()) {
			tb_XML_viewer->Text = "//Type here:";
			pn_Formatting->BringToFront();
			activateBTN(4);
		}
	}

			//------------------------
			//	Format window
			//------------------------

	//save to existing
	private: System::Void saveToThisFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (file == nullptr) {
			createNewFile();
		}
		save(Adapter::to_unmanaged(tb_XML_viewer->Text));
		/*
		file->saveFile(Adapter::to_unmanaged(tb_XML_viewer->Text));
		c_Status->Text = "Save complete";
		unsavedChanges = false;
		*/
	}
	//New save
	private: System::Void saveNewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		createFileForm^ extraComp = gcnew createFileForm();
		System::Windows::Forms::DialogResult dr = extraComp->ShowDialog(this);
		if (dr == System::Windows::Forms::DialogResult::Cancel)
		{
			extraComp->Close();
		}
		else if (dr == System::Windows::Forms::DialogResult::OK)
		{
			String^ path = extraComp->getfilePath();
			setFile(path);
			extraComp->Close();
		}

		save(Adapter::to_unmanaged(tb_XML_viewer->Text));

		/*
		file->saveFile(Adapter::to_unmanaged(tb_XML_viewer->Text));
		c_Status->Text = "Save complete";
		unsavedChanges = false;
		*/

	}
	//if there are changes alert when attempting to exit app
	private: System::Void tb_XML_viewer_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		unsavedChanges = true;
	}
	private: System::Void btn_restore_Click(System::Object^ sender, System::EventArgs^ e) {
		if (unsavedChanges) {
			MyForm1^ saveWarning = gcnew MyForm1("Are you sure you want to restore changes", "Restore");
			System::Windows::Forms::DialogResult dr = saveWarning->ShowDialog(this);
			if (dr == System::Windows::Forms::DialogResult::No)
			{
				saveWarning->Close();
				ViewFileXml();
			}
			else if (dr == System::Windows::Forms::DialogResult::Yes)
			{
				saveWarning->Close();
				if (file == nullptr) {
					createNewFile();
				}
				save(Adapter::to_unmanaged(tb_XML_viewer->Text));
				/*
				file->saveFile(Adapter::to_unmanaged(tb_XML_viewer->Text));
				c_Status->Text = "Save complete";
				ViewFileXml();
				*/
			}

		}
		else
			ViewFileXml();
	}
	//prettify
	private: System::Void Prettifier_Click(System::Object^ sender, System::EventArgs^ e) {

		//string minified = XmlOp::minify(Adapter::to_unmanaged(tb_XML_viewer->Text));
		string prettified = XmlOp::format_xml(Adapter::to_unmanaged(tb_XML_viewer->Text));
		tb_XML_viewer->Text = Adapter::to_managed(prettified);

	}
	private: System::Void Corrector_Click(System::Object^ sender, System::EventArgs^ e) {
		vector <pair<string, int>> errors = XmlOp::Consistency(Adapter::to_unmanaged(tb_XML_viewer->Text));
		tb_XML_viewer->Text = Adapter::to_managed(XmlOp::correct(errors, Adapter::to_unmanaged(tb_XML_viewer->Text)));
	}
	private: System::Void Validator_Click(System::Object^ sender, System::EventArgs^ e) {
		string errors = XmlOp::printErrors(Adapter::to_unmanaged(tb_XML_viewer->Text));
		pn_sb->Height = 200;
		c_Status->Height = 140;
		c_Status->Text = Adapter::to_managed(errors);
		string prettified = XmlOp::format_xml(Adapter::to_unmanaged(tb_XML_viewer->Text));
		tb_XML_viewer->Text = Adapter::to_managed(prettified);

	}

			//------------------------
			//	compress window
			//------------------------

	private: System::Void minify_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		vector <string> elements = file->getElements();
		string text = XmlOp::minify(elements);
		save(Adapter::to_unmanaged(Adapter::to_managed(text)));

		/*
		file->saveFile(Adapter::to_unmanaged(Adapter::to_managed(text)));
		c_Status->Text = "minifying complete";
		unsavedChanges = false;
		*/
	}

			//------------------------
			//	search window
			//------------------------

	private: System::Void textBox1_KeyUp(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			search();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		search();
	}

			//------------------------
			//	insights window
			//------------------------

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (file == nullptr) {

			c_Status->Text = "Error: no file is selected. Select a file first to proceed";
		}
		else {
			if (users->users[Adapter::to_Int(nm_suggested->Value)] == NULL) {
				lbl_userName->Text = "User doesn't exist";
				lbl_suggested->Text = "...";
				tb_mutual->Visible = false;
				lbl_mutual->Text = "";
			}
			else {
				tb_mutual->Visible = true;

				User* user = users->users[Adapter::to_Int(nm_suggested->Value)];
				lbl_userName->Text = Adapter::to_managed(user->name);
				lbl_suggested->Text = "";
				for (auto it : user->followers) {
					for (auto suggested : users->users.at(it)->followers) {
						if (suggested == Adapter::to_Int(nm_suggested->Value))
							continue;
						User* suser = users->users[suggested];
						lbl_suggested->Text += Adapter::to_managed(suser->name) + " (" + Adapter::to_managed(to_string(suser->id)) + "), ";
					}
				}

				if (lbl_suggested->Text == "")
					lbl_suggested->Text = "no suggestions";
			}

		}
	}
	private: System::Void usersList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		User* user = users->users[usersList->SelectedIndex + 1];
		lbl_userName->Text = Adapter::to_managed(user->name);
		lbl_suggested->Text = "";
		for (auto it : user->followers) {
			for (auto suggested : users->users.at(it)->followers) {
				if (suggested == Adapter::to_Int(nm_suggested->Value))
					continue;
				User* suser = users->users[suggested];
				lbl_suggested->Text += Adapter::to_managed(suser->name) + " (" + Adapter::to_managed(to_string(suser->id)) + "), ";
			}


		}
		nm_suggested->Value = usersList->SelectedIndex + 1;

		if (lbl_suggested->Text == "")
			lbl_suggested->Text = "no suggestions";
	}
	private: System::Void btn_mutual_Click(System::Object^ sender, System::EventArgs^ e) {
		if (users->users[Adapter::to_Int(nm_mutual->Value)] == NULL) {
			lbl_mutual_user->Text = "User doesn't exist";
		}
		else {
			lbl_mutual_user->Text = Adapter::to_managed(users->users[Adapter::to_Int(nm_mutual->Value)]->name);
			vector<int> mutualF;

			for (auto it : users->users[Adapter::to_Int(nm_suggested->Value)]->followers) {
				if (users->users[Adapter::to_Int(nm_mutual->Value)]->exists(it))
					mutualF.push_back(it);
			}


			if (mutualF.size() == 0)
				lbl_mutual->Text = "no mutual followed users";
			else {
				lbl_mutual->Text = "";
				for (int i = 0; i < mutualF.size(); i++) {
					User* user = users->users[mutualF[i]];
					lbl_mutual->Text += Adapter::to_managed(user->name + " (" + to_string(user->id) + ")");
				}
			}
		}
	
	}


//------------------------------------
//	||							||
//	||		Status bar			||
//	||							||
//------------------------------------


	private: System::Void btn_stCollapse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pn_sb->Height == 102) {
			pn_sb->Height = 200;
			c_Status->Height = 140;
		}
		else {
			pn_sb->Height = 102;
			c_Status->Height = 48;
		}
	}


//------------------------------------
//	||							||
//	||	other useful functions	||
//	||							||
//------------------------------------

			//create file
			bool createNewFile() {
				createFileForm^ extraComp = gcnew createFileForm();
				System::Windows::Forms::DialogResult dr = extraComp->ShowDialog(this);
				if (dr == System::Windows::Forms::DialogResult::Cancel)
				{
					extraComp->Close();
					return 0;
				}
				else if (dr == System::Windows::Forms::DialogResult::OK)
				{
					setFile(extraComp->getfilePath());
					extraComp->Close();
					return 1;
				}
			}
			//show original XML File
			void ViewFileXml() {
				if (file == nullptr) {
					c_Status->Text = "Error: no file is selected. Select a file first to proceed";
				}
				else {
					tb_XML_viewer->Text = Adapter::to_managed(file->exportFile())->Replace("\n", Environment::NewLine);
					unsavedChanges = false;
					c_Status->Text = "loading Successful";
				}
			}
			//assign file name
			public: Void setFile(String^ fileName) {
				this->file = new File(Adapter::to_unmanaged(fileName));
				lbl_FileName->Text = fileName;
				if (file->getElements().size()!=0 && file->getElements()[0] == "<users>") {

					btn_Insights->Enabled = true;
					btn_searchTab->Enabled = true;

					users = new Graph(file->getElements());
					User* user = users->getInfluential();
					lbl_influential->Text = Adapter::to_managed(user->name) + " (" + Adapter::to_managed(to_string(user->id)) + ")";
					user = users->getActive();
					lbl_active->Text = Adapter::to_managed(user->name) + " (" + Adapter::to_managed(to_string(user->id)) + ")";
					for (auto it : users->users)
						usersList->Items->Add(Adapter::to_managed(it.second->name + " (" + to_string(it.first) + ")"));
				}
				else {
					btn_Insights->Enabled = false;
					btn_searchTab->Enabled = false;
				}
			}
			//search for a certain post by topic or word
			void search() {
				if (file == nullptr) {

					c_Status->Text = "Error: no file is selected. Select a file first to proceed, or save";
				}
				else {
				  vector <string> elements = file->getElements() ;
					if(elements.size() !=0 && elements[0] == "<users>") {
						Node* trial = new Node(elements[0]);
						trial->buildTree(elements);
						vector<string> posts = trial->search(trial, Adapter::to_unmanaged(textBox1->Text));
						tb_search->Text = "";
						if (posts.size() == 0)
							tb_search->Text = "No results found";
						else {
						   for (int i = 0; i < posts.size(); i++) {
							   tb_search->Text += "post[" + i.ToString() + "]: " + Adapter::to_managed(posts[i]) + "\r\n";
						   }
						}
						delete trial;
					}
				}

			}
			//saves content to current file
			void save(string text) {
				file->saveFile(Adapter::to_unmanaged(tb_XML_viewer->Text));
				c_Status->Text = "Save complete";
				unsavedChanges = false;
				file->toArray();
			}
			//activate button
			private: System::Void activateBTN(int button) {
				//deactivate
				//Home
				this->btn_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
					static_cast<System::Int32>(static_cast<System::Byte>(29)));
				this->btn_Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
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
				//format
				this->btn_Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
					static_cast<System::Int32>(static_cast<System::Byte>(29)));
				this->btn_Format->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
					static_cast<System::Int32>(static_cast<System::Byte>(69)));
				//Search
				this->btn_searchTab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
					static_cast<System::Int32>(static_cast<System::Byte>(29)));
				this->btn_searchTab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
					static_cast<System::Int32>(static_cast<System::Byte>(69)));




				//activate
				switch (button) {
				case 0:
					this->btn_Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
						static_cast<System::Int32>(static_cast<System::Byte>(69)));
					this->btn_Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(29)));
					pn_sb->Height = 102;
					break;
				case 1:
					this->btn_searchTab->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
						static_cast<System::Int32>(static_cast<System::Byte>(69)));
					this->btn_searchTab->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(29)));
					pn_sb->Height = 102;
					break;
				case 2:
					this->btn_Compression->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
						static_cast<System::Int32>(static_cast<System::Byte>(69)));
					this->btn_Compression->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(29)));
					pn_sb->Height = 400;
					break;
				case 3:
					this->btn_Insights->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
						static_cast<System::Int32>(static_cast<System::Byte>(69)));
					this->btn_Insights->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(29)));
					pn_sb->Height = 102;
					break;
				case 4:
					this->btn_Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
						static_cast<System::Int32>(static_cast<System::Byte>(69)));
					this->btn_Format->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
						static_cast<System::Int32>(static_cast<System::Byte>(29)));
					pn_sb->Height = 102;
					break;

			}


	}

};
}

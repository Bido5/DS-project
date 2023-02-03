#pragma once


namespace GUITest2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for createFileForm
	/// </summary>
	public ref class createFileForm : public System::Windows::Forms::Form
	{
	public:
		createFileForm(void)
		{
			InitializeComponent();
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~createFileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_tb;
	private: System::Windows::Forms::Label^ lbl_CreateFile;
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txt_fileName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txt_fileLocation;
	private: System::Windows::Forms::Button^ btn_Browse;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ btn_createFile;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

		bool nameValid = false;
		bool locationValid = false;
		bool mov;
		int movx;
		int movy;
		String^ path;
		ErrorProvider error;



		   

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(createFileForm::typeid));
			this->pn_tb = (gcnew System::Windows::Forms::Panel());
			this->lbl_CreateFile = (gcnew System::Windows::Forms::Label());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->txt_fileName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_fileLocation = (gcnew System::Windows::Forms::TextBox());
			this->btn_Browse = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btn_createFile = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pn_tb->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_tb
			// 
			this->pn_tb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pn_tb->CausesValidation = false;
			this->pn_tb->Controls->Add(this->lbl_CreateFile);
			this->pn_tb->Controls->Add(this->btn_close);
			this->pn_tb->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_tb->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->pn_tb->Location = System::Drawing::Point(0, 0);
			this->pn_tb->Name = L"pn_tb";
			this->pn_tb->Size = System::Drawing::Size(381, 61);
			this->pn_tb->TabIndex = 3;
			this->pn_tb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &createFileForm::pn_tb_MouseDown);
			this->pn_tb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &createFileForm::pn_tb_MouseMove);
			this->pn_tb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &createFileForm::pn_tb_MouseUp);
			// 
			// lbl_CreateFile
			// 
			this->lbl_CreateFile->AutoSize = true;
			this->lbl_CreateFile->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_CreateFile->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->lbl_CreateFile->Location = System::Drawing::Point(16, 20);
			this->lbl_CreateFile->Name = L"lbl_CreateFile";
			this->lbl_CreateFile->Size = System::Drawing::Size(118, 26);
			this->lbl_CreateFile->TabIndex = 6;
			this->lbl_CreateFile->Text = L"Create a File ";
			// 
			// btn_close
			// 
			this->btn_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_close->CausesValidation = false;
			this->btn_close->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(339, 17);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(30, 27);
			this->btn_close->TabIndex = 2;
			this->btn_close->UseVisualStyleBackColor = true;
			this->btn_close->Click += gcnew System::EventHandler(this, &createFileForm::btn_close_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->txt_fileName);
			this->flowLayoutPanel1->Controls->Add(this->label3);
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 64);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Padding = System::Windows::Forms::Padding(20, 10, 10, 10);
			this->flowLayoutPanel1->Size = System::Drawing::Size(381, 58);
			this->flowLayoutPanel1->TabIndex = 4;
			// 
			// txt_fileName
			// 
			this->txt_fileName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->txt_fileName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_fileName->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fileName->ForeColor = System::Drawing::Color::White;
			this->txt_fileName->Location = System::Drawing::Point(23, 13);
			this->txt_fileName->Name = L"txt_fileName";
			this->txt_fileName->Size = System::Drawing::Size(255, 27);
			this->txt_fileName->TabIndex = 6;
			this->txt_fileName->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &createFileForm::txt_fileName_Validating);
			this->txt_fileName->Validated += gcnew System::EventHandler(this, &createFileForm::txt_fileName_Validated);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(284, 13);
			this->label3->Margin = System::Windows::Forms::Padding(3);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 23);
			this->label3->TabIndex = 10;
			this->label3->Text = L".txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(21, 23);
			this->label1->Margin = System::Windows::Forms::Padding(3, 0, 100, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 23);
			this->label1->TabIndex = 7;
			this->label1->Text = L"File Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel Light", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(22, 23);
			this->label2->Margin = System::Windows::Forms::Padding(3, 0, 3, 15);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"File location";
			// 
			// txt_fileLocation
			// 
			this->txt_fileLocation->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->txt_fileLocation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txt_fileLocation->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_fileLocation->ForeColor = System::Drawing::Color::White;
			this->txt_fileLocation->Location = System::Drawing::Point(23, 13);
			this->txt_fileLocation->Name = L"txt_fileLocation";
			this->txt_fileLocation->Size = System::Drawing::Size(252, 27);
			this->txt_fileLocation->TabIndex = 8;
			this->txt_fileLocation->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &createFileForm::txt_fileLocation_Validating);
			this->txt_fileLocation->Validated += gcnew System::EventHandler(this, &createFileForm::txt_fileLocation_Validated);
			// 
			// btn_Browse
			// 
			this->btn_Browse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Browse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->btn_Browse->CausesValidation = false;
			this->btn_Browse->FlatAppearance->BorderSize = 0;
			this->btn_Browse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Browse->Font = (gcnew System::Drawing::Font(L"Corbel Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Browse->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_Browse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Browse.Image")));
			this->btn_Browse->Location = System::Drawing::Point(288, 13);
			this->btn_Browse->Margin = System::Windows::Forms::Padding(10, 3, 3, 3);
			this->btn_Browse->Name = L"btn_Browse";
			this->btn_Browse->Padding = System::Windows::Forms::Padding(5);
			this->btn_Browse->Size = System::Drawing::Size(29, 27);
			this->btn_Browse->TabIndex = 9;
			this->btn_Browse->TabStop = false;
			this->btn_Browse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Browse->UseVisualStyleBackColor = false;
			this->btn_Browse->Click += gcnew System::EventHandler(this, &createFileForm::btn_Browse_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->flowLayoutPanel1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 61);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(381, 125);
			this->panel1->TabIndex = 11;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btn_createFile);
			this->panel2->Controls->Add(this->flowLayoutPanel2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 186);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(381, 181);
			this->panel2->TabIndex = 12;
			// 
			// btn_createFile
			// 
			this->btn_createFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->btn_createFile->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->btn_createFile->Enabled = false;
			this->btn_createFile->FlatAppearance->BorderSize = 0;
			this->btn_createFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_createFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_createFile->ForeColor = System::Drawing::SystemColors::Control;
			this->btn_createFile->Location = System::Drawing::Point(264, 132);
			this->btn_createFile->Margin = System::Windows::Forms::Padding(0);
			this->btn_createFile->Name = L"btn_createFile";
			this->btn_createFile->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->btn_createFile->Size = System::Drawing::Size(106, 35);
			this->btn_createFile->TabIndex = 13;
			this->btn_createFile->Text = L"Create";
			this->btn_createFile->UseVisualStyleBackColor = false;
			this->btn_createFile->Click += gcnew System::EventHandler(this, &createFileForm::btn_createFile_Click);
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->txt_fileLocation);
			this->flowLayoutPanel2->Controls->Add(this->btn_Browse);
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 64);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Padding = System::Windows::Forms::Padding(20, 10, 10, 10);
			this->flowLayoutPanel2->Size = System::Drawing::Size(375, 57);
			this->flowLayoutPanel2->TabIndex = 10;
			// 
			// createFileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->ClientSize = System::Drawing::Size(381, 367);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pn_tb);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"createFileForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"createFileForm";
			this->pn_tb->ResumeLayout(false);
			this->pn_tb->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	/*

	||							||
	||		ToolBar panel		||
	||							||

	*/

	private: System::Void btn_close_Click(System::Object^ sender, System::EventArgs^ e) {
		createFileForm::AutoValidate = System::Windows::Forms::AutoValidate::Disable;
		//userControl.AutoValidate = AutoValidate.Disable;
		Form::Close();
	}

	//drag form
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


	/*

   ||							||
   ||		Fields panel		||
   ||							||

   */

	private: System::Void btn_Browse_Click(System::Object^ sender, System::EventArgs^ e) {

		FolderBrowserDialog^ fbd = gcnew FolderBrowserDialog();

		if (fbd->ShowDialog() == System::Windows::Forms::DialogResult::OK && !String::IsNullOrWhiteSpace(fbd->SelectedPath))
		{
			txt_fileLocation->Text = fbd->SelectedPath;
			if (nameValid) {
				this->btn_createFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
					static_cast<System::Int32>(static_cast<System::Byte>(69)));
				btn_createFile->Enabled = true;
			}
			else
				locationValid = true;
		}

	}

	private: System::Void btn_createFile_Click(System::Object^ sender, System::EventArgs^ e) {
		path = txt_fileLocation->Text + "\\" + txt_fileName->Text + ".txt";
		//System::IO::File::Create(path);
		//System::IO::File::Close()
		System::IO::FileStream^ fs = System::IO::File::Create(path);
		fs->Close();
		//Form::Close();
	}


	public: String^ getfilePath() {	
		return path;
	}
	
	//validators
	private: System::Void txt_fileName_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		TextBox^ tb = (TextBox^)sender;
		if (String::IsNullOrWhiteSpace(txt_fileName->Text)) {
			
			e->Cancel = true;
			error.SetError(tb, "Error: File name not specified");
				//lbl_Error->Text = "Error: File name not specified";
			return;
		}
		error.SetError(tb,"");
	}

	private: System::Void txt_fileLocation_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		TextBox^ tb = (TextBox^)sender;
		if (!(System::IO::Directory::Exists(txt_fileLocation->Text))) {
			
			e->Cancel = true;
			error.SetError(tb, "Error: folder location not found");
			return;
		}
		else if (String::IsNullOrWhiteSpace(txt_fileLocation->Text)) {
		
			e->Cancel = true;
			error.SetError(tb, "Error: folder location not specified");
			return;
		}
		error.SetError(tb, "");
	}


	private: System::Void txt_fileName_Validated(System::Object^ sender, System::EventArgs^ e) {
		if (nameValid && locationValid) {
			this->btn_createFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			btn_createFile->Enabled = true;
		}
		else
			nameValid = true;
	}
	private: System::Void txt_fileLocation_Validated(System::Object^ sender, System::EventArgs^ e) {
		if (nameValid && locationValid) {
			this->btn_createFile->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			btn_createFile->Enabled = true;
		}
		else
			locationValid = true;
	}
};
}

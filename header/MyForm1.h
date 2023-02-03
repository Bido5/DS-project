#pragma once

namespace GUITest2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->label1->Text = L"Are you sure you want to leave\?";
			this->btn_closeApp->Text = L"Close";
		}

		MyForm1(String^ messege, String^ operation)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->label1->Text = messege;
			this->btn_closeApp->Text = operation;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_tb;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btn_close;
	private: System::Windows::Forms::PictureBox^ logo;
	private: System::Windows::Forms::Button^ btn_Save;
	private: System::Windows::Forms::Button^ btn_closeApp;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool mov;
		int movx;
		int movy;
		String^ messege;
		String^ operation;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pn_tb = (gcnew System::Windows::Forms::Panel());
			this->btn_close = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->logo = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Save = (gcnew System::Windows::Forms::Button());
			this->btn_closeApp = (gcnew System::Windows::Forms::Button());
			this->pn_tb->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->BeginInit();
			this->SuspendLayout();
			// 
			// pn_tb
			// 
			this->pn_tb->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->pn_tb->Controls->Add(this->btn_close);
			this->pn_tb->Dock = System::Windows::Forms::DockStyle::Top;
			this->pn_tb->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->pn_tb->Location = System::Drawing::Point(0, 0);
			this->pn_tb->Name = L"pn_tb";
			this->pn_tb->Size = System::Drawing::Size(534, 38);
			this->pn_tb->TabIndex = 3;
			this->pn_tb->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pn_tb_MouseDown);
			this->pn_tb->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pn_tb_MouseMove);
			this->pn_tb->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::pn_tb_MouseUp);
			// 
			// btn_close
			// 
			this->btn_close->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_close->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_close.BackgroundImage")));
			this->btn_close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_close->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_close->FlatAppearance->BorderSize = 0;
			this->btn_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_close->Location = System::Drawing::Point(495, 4);
			this->btn_close->Name = L"btn_close";
			this->btn_close->Size = System::Drawing::Size(28, 31);
			this->btn_close->TabIndex = 2;
			this->btn_close->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Corbel Light", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->label2->Location = System::Drawing::Point(89, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(300, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Changes may have not been saved";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(217)),
				static_cast<System::Int32>(static_cast<System::Byte>(184)));
			this->label1->Location = System::Drawing::Point(89, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 5;
			// 
			// logo
			// 
			this->logo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logo.BackgroundImage")));
			this->logo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->logo->Location = System::Drawing::Point(29, 73);
			this->logo->Name = L"logo";
			this->logo->Size = System::Drawing::Size(48, 43);
			this->logo->TabIndex = 7;
			this->logo->TabStop = false;
			// 
			// btn_Save
			// 
			this->btn_Save->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_Save->DialogResult = System::Windows::Forms::DialogResult::Yes;
			this->btn_Save->FlatAppearance->BorderSize = 0;
			this->btn_Save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_Save->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->btn_Save->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Save->Location = System::Drawing::Point(258, 180);
			this->btn_Save->Name = L"btn_Save";
			this->btn_Save->Size = System::Drawing::Size(104, 45);
			this->btn_Save->TabIndex = 9;
			this->btn_Save->Text = L"Save";
			this->btn_Save->UseVisualStyleBackColor = false;
			// 
			// btn_closeApp
			// 
			this->btn_closeApp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(44)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->btn_closeApp->DialogResult = System::Windows::Forms::DialogResult::No;
			this->btn_closeApp->FlatAppearance->BorderSize = 0;
			this->btn_closeApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_closeApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_closeApp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->btn_closeApp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_closeApp->Location = System::Drawing::Point(385, 180);
			this->btn_closeApp->Name = L"btn_closeApp";
			this->btn_closeApp->Size = System::Drawing::Size(111, 45);
			this->btn_closeApp->TabIndex = 10;
			this->btn_closeApp->UseVisualStyleBackColor = false;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->ClientSize = System::Drawing::Size(534, 246);
			this->Controls->Add(this->btn_closeApp);
			this->Controls->Add(this->btn_Save);
			this->Controls->Add(this->logo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pn_tb);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->pn_tb->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
};
}

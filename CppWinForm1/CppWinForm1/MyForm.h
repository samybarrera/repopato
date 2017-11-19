#pragma once
#include "Form2.h"
#include<time.h>


namespace CppWinForm1 {

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
	private: System::Windows::Forms::Button^  btn1;
	private: Form ^obj;
	private: System::Windows::Forms::PictureBox^  pb1;
	private: System::Windows::Forms::PictureBox^  pb3;

	private: System::Windows::Forms::PictureBox^  pb2;
	private: System::Windows::Forms::PictureBox^  pb4;
	private: System::Windows::Forms::PictureBox^  pb5;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->pb1 = (gcnew System::Windows::Forms::PictureBox());
			this->pb3 = (gcnew System::Windows::Forms::PictureBox());
			this->pb2 = (gcnew System::Windows::Forms::PictureBox());
			this->pb4 = (gcnew System::Windows::Forms::PictureBox());
			this->pb5 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->BeginInit();
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->btn1->Location = System::Drawing::Point(314, 12);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(132, 39);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"Go to Form 2";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// pb1
			// 
			this->pb1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb1.Image")));
			this->pb1->Location = System::Drawing::Point(101, 83);
			this->pb1->Name = L"pb1";
			this->pb1->Size = System::Drawing::Size(216, 105);
			this->pb1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb1->TabIndex = 1;
			this->pb1->TabStop = false;
			// 
			// pb3
			// 
			this->pb3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb3.Image")));
			this->pb3->Location = System::Drawing::Point(233, 175);
			this->pb3->Name = L"pb3";
			this->pb3->Size = System::Drawing::Size(100, 50);
			this->pb3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb3->TabIndex = 2;
			this->pb3->TabStop = false;
			// 
			// pb2
			// 
			this->pb2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb2.Image")));
			this->pb2->Location = System::Drawing::Point(23, 162);
			this->pb2->Name = L"pb2";
			this->pb2->Size = System::Drawing::Size(100, 50);
			this->pb2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb2->TabIndex = 3;
			this->pb2->TabStop = false;
			// 
			// pb4
			// 
			this->pb4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb4.Image")));
			this->pb4->Location = System::Drawing::Point(323, 83);
			this->pb4->Name = L"pb4";
			this->pb4->Size = System::Drawing::Size(100, 50);
			this->pb4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb4->TabIndex = 4;
			this->pb4->TabStop = false;
			// 
			// pb5
			// 
			this->pb5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pb5.Image")));
			this->pb5->Location = System::Drawing::Point(83, 27);
			this->pb5->Name = L"pb5";
			this->pb5->Size = System::Drawing::Size(100, 50);
			this->pb5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pb5->TabIndex = 5;
			this->pb5->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->ClientSize = System::Drawing::Size(448, 291);
			this->Controls->Add(this->pb5);
			this->Controls->Add(this->pb4);
			this->Controls->Add(this->pb2);
			this->Controls->Add(this->pb3);
			this->Controls->Add(this->pb1);
			this->Controls->Add(this->btn1);
			this->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"Menu de aplicaciones";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pb5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		this->obj->Show();
		this->Hide();
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->obj = gcnew Form2(this);
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Random^ randObj = gcnew Random;
		int var = randObj->Next(1, 5);

		if (var == 1) {
			pb1->Image = pb1->Image;
		}
		if (var == 2) {
			pb1->Image = pb2->Image;
		}
		if (var == 3) {
			pb1->Image = pb3->Image;
		}
		if (var == 4) {
			pb1->Image = pb4->Image;
		}
		if (var == 5) {
			pb1->Image = pb5->Image;
		}
			
	}
};
}

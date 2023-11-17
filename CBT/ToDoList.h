#pragma once

namespace CBT {

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
	private: System::Windows::Forms::Label^ Today1;
	private: System::Windows::Forms::Label^ ToDo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
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
			this->Today1 = (gcnew System::Windows::Forms::Label());
			this->ToDo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Today1
			// 
			this->Today1->AutoSize = true;
			this->Today1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Today1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Today1->Location = System::Drawing::Point(12, 49);
			this->Today1->Name = L"Today1";
			this->Today1->Size = System::Drawing::Size(95, 31);
			this->Today1->TabIndex = 0;
			this->Today1->Text = L"Today:";
			this->Today1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// ToDo
			// 
			this->ToDo->AutoSize = true;
			this->ToDo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToDo->Location = System::Drawing::Point(25, 9);
			this->ToDo->Name = L"ToDo";
			this->ToDo->Size = System::Drawing::Size(109, 22);
			this->ToDo->TabIndex = 1;
			this->ToDo->Text = L"To Do List:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(220, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"|Today\'s Date|";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(213, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Descriptions:";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(444, 413);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ToDo);
			this->Controls->Add(this->Today1);
			this->Name = L"MyForm1";
			this->Text = L"ToDoList";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

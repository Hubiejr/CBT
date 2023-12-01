#pragma once

namespace CBT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToDo
	/// </summary>
	public ref class ToDo : public System::Windows::Forms::Form
	{
	public:
		ToDo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		void SetAssignment1(String^ value) { // method for adding stuff to Assigment1
			Assignment1->Text = value;
		}
		void SetDate1(String^ value) {
			Date1->Text = value;
		}
		void SetTime1(String^ value) {
			time1->Text = value;
		}
		void SetDescription1(String^ value) {
			Description1->Text = value;
		}

		void SetAssignment2(String^ value) { // method for adding stuff to Assigment2
			Assignment2->Text = value;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ToDo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Today1;
	private: System::Windows::Forms::Label^ ToDoList1;
	private: System::Windows::Forms::Label^ Date;


	private: System::Windows::Forms::Label^ Descriptions;
	private: System::Windows::Forms::Label^ Assignment1;
	private: System::Windows::Forms::Label^ Assignment2;
	private: System::Windows::Forms::Label^ Assignment3;
	private: System::Windows::Forms::Label^ Assignment4;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Date1;
	private: System::Windows::Forms::Label^ time1;
	private: System::Windows::Forms::Label^ Description1;






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
			this->ToDoList1 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->Descriptions = (gcnew System::Windows::Forms::Label());
			this->Assignment1 = (gcnew System::Windows::Forms::Label());
			this->Assignment2 = (gcnew System::Windows::Forms::Label());
			this->Assignment3 = (gcnew System::Windows::Forms::Label());
			this->Assignment4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Date1 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::Label());
			this->Description1 = (gcnew System::Windows::Forms::Label());
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
			this->Today1->Click += gcnew System::EventHandler(this, &ToDo::label1_Click);
			// 
			// ToDoList1
			// 
			this->ToDoList1->AutoSize = true;
			this->ToDoList1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToDoList1->Location = System::Drawing::Point(25, 9);
			this->ToDoList1->Name = L"ToDoList1";
			this->ToDoList1->Size = System::Drawing::Size(109, 22);
			this->ToDoList1->TabIndex = 1;
			this->ToDoList1->Text = L"To Do List:";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->Location = System::Drawing::Point(220, 9);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(141, 22);
			this->Date->TabIndex = 2;
			this->Date->Text = L"|Today\'s Date|";
			// 
			// Descriptions
			// 
			this->Descriptions->AutoSize = true;
			this->Descriptions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Descriptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Descriptions->Location = System::Drawing::Point(213, 49);
			this->Descriptions->Name = L"Descriptions";
			this->Descriptions->Size = System::Drawing::Size(168, 31);
			this->Descriptions->TabIndex = 3;
			this->Descriptions->Text = L"Descriptions:";
			// 
			// Assignment1
			// 
			this->Assignment1->AutoSize = true;
			this->Assignment1->Location = System::Drawing::Point(26, 135);
			this->Assignment1->Name = L"Assignment1";
			this->Assignment1->Size = System::Drawing::Size(84, 16);
			this->Assignment1->TabIndex = 4;
			this->Assignment1->Text = L"Assignment1";
			this->Assignment1->Click += gcnew System::EventHandler(this, &ToDo::label1_Click_1);
			// 
			// Assignment2
			// 
			this->Assignment2->AutoSize = true;
			this->Assignment2->Location = System::Drawing::Point(23, 176);
			this->Assignment2->Name = L"Assignment2";
			this->Assignment2->Size = System::Drawing::Size(84, 16);
			this->Assignment2->TabIndex = 5;
			this->Assignment2->Text = L"Assignment2";
			// 
			// Assignment3
			// 
			this->Assignment3->AutoSize = true;
			this->Assignment3->Location = System::Drawing::Point(23, 213);
			this->Assignment3->Name = L"Assignment3";
			this->Assignment3->Size = System::Drawing::Size(84, 16);
			this->Assignment3->TabIndex = 6;
			this->Assignment3->Text = L"Assignment3";
			// 
			// Assignment4
			// 
			this->Assignment4->AutoSize = true;
			this->Assignment4->Location = System::Drawing::Point(23, 251);
			this->Assignment4->Name = L"Assignment4";
			this->Assignment4->Size = System::Drawing::Size(84, 16);
			this->Assignment4->TabIndex = 7;
			this->Assignment4->Text = L"Assignment4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(148, 176);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 9;
			// 
			// Date1
			// 
			this->Date1->AutoSize = true;
			this->Date1->Location = System::Drawing::Point(133, 135);
			this->Date1->Name = L"Date1";
			this->Date1->Size = System::Drawing::Size(43, 16);
			this->Date1->TabIndex = 10;
			this->Date1->Text = L"Date1";
			this->Date1->Click += gcnew System::EventHandler(this, &ToDo::label2_Click);
			// 
			// time1
			// 
			this->time1->AutoSize = true;
			this->time1->Location = System::Drawing::Point(210, 135);
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(39, 16);
			this->time1->TabIndex = 11;
			this->time1->Text = L"time1";
			// 
			// Description1
			// 
			this->Description1->AutoSize = true;
			this->Description1->Location = System::Drawing::Point(274, 135);
			this->Description1->Name = L"Description1";
			this->Description1->Size = System::Drawing::Size(82, 16);
			this->Description1->TabIndex = 12;
			this->Description1->Text = L"Description1";
			// 
			// ToDo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(384, 413);
			this->Controls->Add(this->Description1);
			this->Controls->Add(this->time1);
			this->Controls->Add(this->Date1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Assignment4);
			this->Controls->Add(this->Assignment3);
			this->Controls->Add(this->Assignment2);
			this->Controls->Add(this->Assignment1);
			this->Controls->Add(this->Descriptions);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->ToDoList1);
			this->Controls->Add(this->Today1);
			this->Name = L"ToDo";
			this->Text = L"ToDoList";
			this->Load += gcnew System::EventHandler(this, &ToDo::ToDo_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ToDo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
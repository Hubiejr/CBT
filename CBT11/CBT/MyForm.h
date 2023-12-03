#pragma once
#include "TodoList.h"
#include <list> // Add to include a list it will be easy they say

#include <vector>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>
#include <vcclr.h>
#include <vcclr.h>
#include <fstream>
#include <iostream>


namespace CBT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click); // added so we can save data later
			/*assignmentsList = gcnew System::Collections::Generic::List<ToDo^>();*/
			assignmentsList = gcnew System::Collections::Generic::List<MyForm^>();  // declared assignmentsList
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	//private: System::Collections::Generic::List<ToDo^>^ assignmentsList; // List to store ToDo forms
	private: System::Collections::Generic::List<MyForm^>^ assignmentsList; // List to store MyForm instances
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ Today1;
	private: System::Windows::Forms::Label^ ToDoList1;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ Descriptions;
	private: System::Windows::Forms::Label^ Description1;
	private: System::Windows::Forms::Label^ time1;
	private: System::Windows::Forms::Label^ Date1;
	private: System::Windows::Forms::Label^ Assignment1;
	private: System::Windows::Forms::Label^ Assignment4;
	private: System::Windows::Forms::Label^ Assignment3;
	private: System::Windows::Forms::Label^ Assignment2;
	private: System::Windows::Forms::Panel^ panelToDoList;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Assignment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DueDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Description;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->Today1 = (gcnew System::Windows::Forms::Label());
			this->ToDoList1 = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->Descriptions = (gcnew System::Windows::Forms::Label());
			this->Description1 = (gcnew System::Windows::Forms::Label());
			this->time1 = (gcnew System::Windows::Forms::Label());
			this->Date1 = (gcnew System::Windows::Forms::Label());
			this->Assignment1 = (gcnew System::Windows::Forms::Label());
			this->Assignment4 = (gcnew System::Windows::Forms::Label());
			this->Assignment3 = (gcnew System::Windows::Forms::Label());
			this->Assignment2 = (gcnew System::Windows::Forms::Label());
			this->panelToDoList = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Assignment = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DueDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Window;
			this->button1->Font = (gcnew System::Drawing::Font(L"Ebrima", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(75, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD ITEM:";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuText;
			this->label1->Location = System::Drawing::Point(62, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Edit Schedule";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 125);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(110, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(93, 172);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(110, 22);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(93, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 22);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 255);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(110, 22);
			this->textBox4->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ebrima", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(20, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Name: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Ebrima", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Due Date:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Ebrima", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(48, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Ebrima", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(2, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Description: ";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(93, 311);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(102, 20);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Notifications";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(93, 355);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(126, 20);
			this->checkBox2->TabIndex = 11;
			this->checkBox2->Text = L"Nagging Notifier";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// Today1
			// 
			this->Today1->AutoSize = true;
			this->Today1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Today1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Today1->Location = System::Drawing::Point(437, 44);
			this->Today1->Name = L"Today1";
			this->Today1->Size = System::Drawing::Size(95, 31);
			this->Today1->TabIndex = 12;
			this->Today1->Text = L"Today:";
			// 
			// ToDoList1
			// 
			this->ToDoList1->AutoSize = true;
			this->ToDoList1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToDoList1->Location = System::Drawing::Point(433, 9);
			this->ToDoList1->Name = L"ToDoList1";
			this->ToDoList1->Size = System::Drawing::Size(109, 22);
			this->ToDoList1->TabIndex = 13;
			this->ToDoList1->Text = L"To Do List:";
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->Location = System::Drawing::Point(582, 12);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(141, 22);
			this->Date->TabIndex = 14;
			this->Date->Text = L"|Today\'s Date|";
			// 
			// Descriptions
			// 
			this->Descriptions->AutoSize = true;
			this->Descriptions->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Descriptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Descriptions->Location = System::Drawing::Point(576, 44);
			this->Descriptions->Name = L"Descriptions";
			this->Descriptions->Size = System::Drawing::Size(168, 31);
			this->Descriptions->TabIndex = 15;
			this->Descriptions->Text = L"Descriptions:";
			// 
			// Description1
			// 
			this->Description1->AutoSize = true;
			this->Description1->Location = System::Drawing::Point(688, 99);
			this->Description1->Name = L"Description1";
			this->Description1->Size = System::Drawing::Size(82, 16);
			this->Description1->TabIndex = 19;
			this->Description1->Text = L"Description1";
			// 
			// time1
			// 
			this->time1->AutoSize = true;
			this->time1->Location = System::Drawing::Point(624, 99);
			this->time1->Name = L"time1";
			this->time1->Size = System::Drawing::Size(39, 16);
			this->time1->TabIndex = 18;
			this->time1->Text = L"time1";
			// 
			// Date1
			// 
			this->Date1->AutoSize = true;
			this->Date1->Location = System::Drawing::Point(547, 99);
			this->Date1->Name = L"Date1";
			this->Date1->Size = System::Drawing::Size(43, 16);
			this->Date1->TabIndex = 17;
			this->Date1->Text = L"Date1";
			// 
			// Assignment1
			// 
			this->Assignment1->AutoSize = true;
			this->Assignment1->Location = System::Drawing::Point(440, 99);
			this->Assignment1->Name = L"Assignment1";
			this->Assignment1->Size = System::Drawing::Size(84, 16);
			this->Assignment1->TabIndex = 16;
			this->Assignment1->Text = L"Assignment1";
			// 
			// Assignment4
			// 
			this->Assignment4->AutoSize = true;
			this->Assignment4->Location = System::Drawing::Point(440, 225);
			this->Assignment4->Name = L"Assignment4";
			this->Assignment4->Size = System::Drawing::Size(84, 16);
			this->Assignment4->TabIndex = 22;
			this->Assignment4->Text = L"Assignment4";
			// 
			// Assignment3
			// 
			this->Assignment3->AutoSize = true;
			this->Assignment3->Location = System::Drawing::Point(440, 187);
			this->Assignment3->Name = L"Assignment3";
			this->Assignment3->Size = System::Drawing::Size(84, 16);
			this->Assignment3->TabIndex = 21;
			this->Assignment3->Text = L"Assignment3";
			// 
			// Assignment2
			// 
			this->Assignment2->AutoSize = true;
			this->Assignment2->Location = System::Drawing::Point(440, 150);
			this->Assignment2->Name = L"Assignment2";
			this->Assignment2->Size = System::Drawing::Size(84, 16);
			this->Assignment2->TabIndex = 20;
			this->Assignment2->Text = L"Assignment2";
			// 
			// panelToDoList
			// 
			this->panelToDoList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelToDoList->Location = System::Drawing::Point(333, 3);
			this->panelToDoList->Name = L"panelToDoList";
			this->panelToDoList->Size = System::Drawing::Size(10, 422);
			this->panelToDoList->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LemonChiffon;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Assignment,
					this->DueDate, this->Time, this->Description
			});
			this->dataGridView1->Location = System::Drawing::Point(333, 91);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(579, 334);
			this->dataGridView1->TabIndex = 23;
			

			// 
			// Assignment
			// 
			this->Assignment->HeaderText = L"Assignment";
			this->Assignment->MinimumWidth = 6;
			this->Assignment->Name = L"Assignment";
			this->Assignment->Width = 110;
			// 
			// DueDate
			// 
			this->DueDate->HeaderText = L"DueDate";
			this->DueDate->MinimumWidth = 6;
			this->DueDate->Name = L"DueDate";
			this->DueDate->Width = 90;
			// 
			// Time
			// 
			this->Time->HeaderText = L"Time";
			this->Time->MinimumWidth = 6;
			this->Time->Name = L"Time";
			this->Time->Width = 90;
			// 
			// Description
			// 
			this->Description->HeaderText = L"Description";
			this->Description->MinimumWidth = 6;
			this->Description->Name = L"Description";
			this->Description->Width = 110;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(790, 425);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelToDoList);
			this->Controls->Add(this->Assignment4);
			this->Controls->Add(this->Assignment3);
			this->Controls->Add(this->Assignment2);
			this->Controls->Add(this->Description1);
			this->Controls->Add(this->time1);
			this->Controls->Add(this->Date1);
			this->Controls->Add(this->Assignment1);
			this->Controls->Add(this->Descriptions);
			this->Controls->Add(this->Date);
			this->Controls->Add(this->ToDoList1);
			this->Controls->Add(this->Today1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->Text = L"EditSchedule";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

			

			this->dataGridView1->Sort(this->dataGridView1->Columns["DueDate"], System::ComponentModel::ListSortDirection::Ascending);

    }
		// makes Pannel a argument so ToDo can merge at line 77

#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	// THIS MAKES A NEW WINDOW WE CAN MESS WITH IT OR KILL IT
	// 
	//// Create a new instance of ToDo and set the data
	//MyForm^ form = gcnew MyForm();
	//form->SetAssignment1(textBox1->Text);
	//form->SetDate1(textBox2->Text);
	//form->SetTime1(textBox3->Text);
	//form->SetDescription1(textBox4->Text);

	//// Show the ToDo form
	//form->Show();

	//// Add the ToDo form to the list
	//assignmentsList->Add(form);

	//// Clear text boxes after hitting the button
	//textBox1->Clear();
	//textBox2->Clear();
	//textBox3->Clear();
	//textBox4->Clear();



	// THIS IS WHERE THE HARDCODED DATA IS 
	
	// Gets data entered by User
	String^ name = textBox1->Text;
	String^ dueDate = textBox2->Text;
	String^ time = textBox3->Text;
	String^ description = textBox4->Text;


	// Creates individual cells for each column in the DataGridView 
	DataGridViewRow^ row = gcnew DataGridViewRow();
	DataGridViewCell^ cellAssignment = gcnew DataGridViewTextBoxCell();
	DataGridViewCell^ cellDueDate = gcnew DataGridViewTextBoxCell();
	DataGridViewCell^ cellTime = gcnew DataGridViewTextBoxCell();
	DataGridViewCell^ cellDescription = gcnew DataGridViewTextBoxCell();

	// sets the value of each cell from the data to the textboxs
	cellAssignment->Value = name;
	cellDueDate->Value = dueDate;
	cellTime->Value = time;
	cellDescription->Value = description;

	// adds the cells to the row
	row->Cells->Add(cellAssignment);
	row->Cells->Add(cellDueDate);
	row->Cells->Add(cellTime);
	row->Cells->Add(cellDescription);

	// adds the row to the DataGridView
	dataGridView1->Rows->Add(row);

	// display all the data in the labels of main window (MyForm)
	/*Assignment1->Text = name;
	Date1->Text =  dueDate;
	time1->Text =  time;
	Description1->Text = description;*/

	// You can now save this data to a file or a database, or perform any other desired action.
	// For this example, we'll just display the data in a message box.
	String^ message = "Name: " + name + "\nDue Date: " + dueDate + "\nTime: " + time + "\nDescription: " + description;
	MessageBox::Show(message, "Data Saved");

	std::ofstream outFile("database.txt", std::ios::app); // Open file in append mode
	if (outFile.is_open()) {
		outFile << msclr::interop::marshal_as<std::string>(name) << '\n';
		outFile << msclr::interop::marshal_as<std::string>(dueDate) << '\n';
		outFile << msclr::interop::marshal_as<std::string>(time) << '\n';
		outFile << msclr::interop::marshal_as<std::string>(description) << '\n';
		outFile.close();
		MessageBox::Show("Data Saved", "Success");
	}
	else {
		MessageBox::Show("Error opening file", "Error");
	}

	//// Create a new instance of ToDo for each assignment  DOESNT WORK PROPERLY
	//ToDo^ form1 = gcnew ToDo();
	//form1->SetAssignment1(name);
	//form1->Show();
	//assignmentsList->Add(form1);

	//ToDo^ form2 = gcnew ToDo();
	//form2->SetAssignment2(name);
	//form2->Show();
	//assignmentsList->Add(form2);

	// clear text boxes after you hit the button
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
	textBox4->Clear();

	dataGridView1->Refresh();
}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	// write results from txt file to grid
	//std::string line;
	//int lineCount = 0;
	//// open file
	//std::ifstream inFile("database.txt");

	// this is a loop that reads in a text file that stores to do list items
	// it creates a row in the datagrid, then fills a variable in the row for each line in the file
	// after it's gone through 4 lines, it resets the counter so a new row can be made and new variables can be inserted

	//while (std::getline(infile, line)) {
	//	 start new row

	//	if (linecount == 0) {
	//		 initialize the row stuff
	//		datagridviewrow^ row = gcnew datagridviewrow();
	//		datagridviewcell^ cellassignment = gcnew datagridviewtextboxcell();
	//		datagridviewcell^ cellduedate = gcnew datagridviewtextboxcell();
	//		datagridviewcell^ celltime = gcnew datagridviewtextboxcell();
	//		datagridviewcell^ celldescription = gcnew datagridviewtextboxcell();
	//	}

	//	linecount++;

	//	 row stuff is set, start the counter to add things by line
	//	if (linecount == 1) {
	//		cellassignment->value = gcnew system::string(line.c_str());  // convert std::string to system::string
	//		row->cells->add(cellassignment);
	//		continue;
	//	}
	//	else if (linecount == 2) {
	//		cellduedate->value = gcnew system::string(line.c_str());  // convert std::string to system::string
	//		row->cells->add(cellduedate);
	//		continue;
	//	}
	//	else if (linecount == 3) {
	//		celltime->value = gcnew system::string(line.c_str());  // convert std::string to system::string
	//		row->cells->add(celltime);
	//		continue;
	//	}
	//	else if (linecount == 4) {
	//		celldescription->value = gcnew system::string(line.c_str());  // convert std::string to system::string
	//		row->cells->add(celldescription);
	//		continue;
	//	}

	//	 if line count reaches 4, add the row to the datagridview and reset line count
	//	else {
	//		datagridview1->rows->add(row);
	//		linecount = 0;
	//		continue;
	//	}
	//}

	// close the file
	//infile.close();

	String^ fileName = "database.txt";
	StreamReader^ reader = gcnew StreamReader(fileName);

	array<String^>^ rowData = gcnew array<String^>(4); // Array to hold data for each row

	String^ line;
	int rowIndex = 0;

	while ((line = reader->ReadLine()) != nullptr) {
		rowData[rowIndex++] = line; // Store each line in the rowData array

		if (rowIndex == 4) {
			dataGridView1->Rows->Add(rowData); // Add rowData to the DataGridView
			rowIndex = 0; // Reset rowIndex for the next row
		}
	}

	reader->Close();
}
};
}

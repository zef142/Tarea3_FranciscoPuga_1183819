#include "Stack1.h";
#include "List.h";
#include "nodo.h";
#pragma once

namespace Tarea3FranciscoPuga1183819 {

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
		List* miList;
		List* miList2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ ListaCartas;
	public:

	private: System::Windows::Forms::Label^ label10;
		   Stack1* stackg1;
		MyForm(void)
		{
			InitializeComponent();
			miList = new List();
			miList->count = 0;
			miList->start = nullptr;
			miList->end = nullptr;

			miList2 = new List();
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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::ListBox^ listBox8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ListaCartas = (gcnew System::Windows::Forms::ListBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(172, 143);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(47, 212);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(225, 143);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(47, 212);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(278, 143);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(47, 212);
			this->listBox3->TabIndex = 2;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(331, 143);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(47, 212);
			this->listBox4->TabIndex = 3;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(384, 143);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(47, 212);
			this->listBox5->TabIndex = 4;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(437, 143);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(47, 212);
			this->listBox6->TabIndex = 5;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(490, 143);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(47, 212);
			this->listBox7->TabIndex = 6;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(571, 143);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(47, 212);
			this->listBox8->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(225, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(47, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Mazo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(169, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"G1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(222, 127);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"G2:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(275, 127);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"G3:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(328, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"G4:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(381, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"G5:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(434, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"G6:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(490, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"G7:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(568, 127);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Mano:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Iniciar";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// ListaCartas
			// 
			this->ListaCartas->FormattingEnabled = true;
			this->ListaCartas->Location = System::Drawing::Point(12, 97);
			this->ListaCartas->Name = L"ListaCartas";
			this->ListaCartas->Size = System::Drawing::Size(47, 329);
			this->ListaCartas->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Lista de cartas:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 503);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->ListaCartas);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->listBox7);
			this->Controls->Add(this->listBox6);
			this->Controls->Add(this->listBox5);
			this->Controls->Add(this->listBox4);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}

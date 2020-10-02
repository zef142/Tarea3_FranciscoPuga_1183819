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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::ListBox^ listBox4;
	private: System::Windows::Forms::ListBox^ listBox5;
	private: System::Windows::Forms::ListBox^ listBox6;
	private: System::Windows::Forms::ListBox^ listBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox8;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(258, 159);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(44, 199);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(308, 159);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(44, 199);
			this->listBox2->TabIndex = 1;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(358, 159);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(44, 199);
			this->listBox3->TabIndex = 2;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->Location = System::Drawing::Point(408, 159);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(44, 199);
			this->listBox4->TabIndex = 3;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->Location = System::Drawing::Point(458, 159);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(44, 199);
			this->listBox5->TabIndex = 4;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->Location = System::Drawing::Point(508, 159);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(44, 199);
			this->listBox6->TabIndex = 5;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->Location = System::Drawing::Point(558, 159);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(44, 199);
			this->listBox7->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(255, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"G1:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(305, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"G2:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(355, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"G3:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(405, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"G4:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(455, 143);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"G5:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(505, 143);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"G6:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(555, 143);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"G7:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(297, 92);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 20);
			this->textBox1->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(255, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(36, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Mazo:";
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->Location = System::Drawing::Point(707, 159);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(44, 199);
			this->listBox8->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(704, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Mano:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 495);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

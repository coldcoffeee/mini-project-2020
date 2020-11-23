#pragma once

namespace DoctorApptSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
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
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button5;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(265, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter a number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter second number";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(58, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 66);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 190);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 66);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Multiply";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(168, 190);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 66);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Subtract";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(366, 190);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 66);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Divide";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(165, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Result";
			this->label3->Click += gcnew System::EventHandler(this, &Calculator::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(271, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 17);
			this->label4->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(215, 285);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 66);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Exit";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(498, 457);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Calculator::Calculator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = System::Convert::ToString(System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2 -> Text));
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = System::Convert::ToString(System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text));
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = System::Convert::ToString(System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = System::Convert::ToString(System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text));
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//label1->Text = System::Convert::ToString(bookAppointment());
	if (MessageBox::Show("You sure bro?", "Wait a minute!", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)==System::Windows::Forms::DialogResult::Yes){
		Application::Exit();
	}
}
private: System::Void Calculator_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

#pragma once

namespace DoctorApptSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Frontend
	/// </summary>
	public ref class Frontend : public System::Windows::Forms::Form
	{
	public:
		Frontend(void)
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
		~Frontend()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button4;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(62, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show Available";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Frontend::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(202, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Book Timeslot";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(344, 320);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(122, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear Appts";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Frontend::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(62, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(404, 221);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(472, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select Timeslot";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"9", L"10", L"11", L"12", L"13", L"14", L"15",
					L"16", L"17", L"18", L"19", L"20", L"21"
			});
			this->comboBox1->Location = System::Drawing::Point(604, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(74, 24);
			this->comboBox1->TabIndex = 5;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(503, 320);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(122, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Frontend::button4_Click);
			// 
			// Frontend
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(766, 355);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Frontend";
			this->Text = L"Frontend";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//label1->Text = "Helo deer";
	//label1->Text = textBox1->Text;

}
};
}

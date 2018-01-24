#pragma once

#include <string>

using namespace std;

namespace Сommunal
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HousesManagement
	/// </summary>
	public ref class HousesManagement : public System::Windows::Forms::Form
	{
	public:
		HousesManagement(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~HousesManagement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton2;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox8;

	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::TextBox^  textBox4;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ListBox^  listBox1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(346, 151);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(90, 17);
			this->radioButton2->TabIndex = 50;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"частный дом";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &HousesManagement::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(200, 152);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(140, 17);
			this->radioButton1->TabIndex = 49;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"многоквартирный дом";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &HousesManagement::radioButton1_CheckedChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(427, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(103, 20);
			this->textBox8->TabIndex = 48;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(312, 99);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 46;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(312, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 44;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(309, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 31);
			this->button5->TabIndex = 42;
			this->button5->Text = L"Сохранить";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(427, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 31);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Отмена";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &HousesManagement::button4_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(312, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(218, 20);
			this->textBox3->TabIndex = 40;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &HousesManagement::textBox3_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(105, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 31);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 31);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1", L"2", L"3", L"4" });
			this->listBox1->Location = System::Drawing::Point(12, 47);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(182, 121);
			this->listBox1->TabIndex = 35;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &HousesManagement::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(197, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Описание";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(197, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 13);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Адрес";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(197, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 13);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Общая площадь";
			this->label4->Click += gcnew System::EventHandler(this, &HousesManagement::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(197, 128);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(222, 13);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Количество зарегестрированных граждан";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 56;
			this->label1->Text = L"Список объектов";
			// 
			// HousesManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(559, 231);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"HousesManagement";
			this->Text = L"HousesManagement";
			this->Load += gcnew System::EventHandler(this, &HousesManagement::HousesManagement_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void HousesManagement_Load(System::Object^  sender, System::EventArgs^  e)
	{
		listBox1->Items->Add("hello");
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		//String^ str = gcnew String("Hello World");

		string yu = "Hi";
		
		String^ str = gcnew String(yu.c_str());

		/*char c[] = "Hello world!";
		String^ str = gcnew String(c);
		textBox3->Text = str;*/



		if (listBox1->Items[0] == "1")
			textBox4->Text = "232321";
		if (listBox1->SelectedIndex >= 0)
			if (listBox1->Items[listBox1->SelectedIndex] == "1")
				textBox6->Text = "Hreee232321";
		textBox3->Text = str;
	}
	};
}

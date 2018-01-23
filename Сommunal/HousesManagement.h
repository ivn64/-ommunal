#pragma once

namespace Сommunal {

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
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ListBox^  listBox1;

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
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
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
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(427, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(103, 20);
			this->textBox8->TabIndex = 48;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(200, 125);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(221, 13);
			this->textBox9->TabIndex = 47;
			this->textBox9->Text = L"Количество зарегестрированных граждан";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(312, 99);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(218, 20);
			this->textBox6->TabIndex = 46;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(200, 99);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(106, 13);
			this->textBox7->TabIndex = 45;
			this->textBox7->Text = L"Общая площадь";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(312, 73);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(218, 20);
			this->textBox4->TabIndex = 44;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(200, 73);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(106, 13);
			this->textBox5->TabIndex = 43;
			this->textBox5->Text = L"Адрес";
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
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(200, 47);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(106, 13);
			this->textBox2->TabIndex = 39;
			this->textBox2->Text = L"Описание";
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
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 13);
			this->textBox1->TabIndex = 36;
			this->textBox1->Text = L"Список объектов";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 47);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(182, 121);
			this->listBox1->TabIndex = 35;
			// 
			// HousesManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(559, 231);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"HousesManagement";
			this->Text = L"HousesManagement";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
{
	Close();
}
};
}

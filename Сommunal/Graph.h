#pragma once

namespace Сommunal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Graph
	/// </summary>
	public ref class Graph : public System::Windows::Forms::Form
	{
	public:
		Graph(void)
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
		~Graph()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButton2;
	protected:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox2;

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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(221, 67);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(79, 17);
			this->radioButton2->TabIndex = 35;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"показания";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(306, 68);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 17);
			this->radioButton1->TabIndex = 34;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"стоимость";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(221, 11);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(178, 13);
			this->textBox5->TabIndex = 33;
			this->textBox5->Text = L"Услуга";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(221, 37);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(178, 21);
			this->comboBox1->TabIndex = 32;
			this->comboBox1->Text = L"Холодная вода";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(12, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(19, 13);
			this->textBox4->TabIndex = 31;
			this->textBox4->Text = L"По";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Location = System::Drawing::Point(37, 64);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(157, 20);
			this->dateTimePicker2->TabIndex = 30;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(12, 38);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(19, 13);
			this->textBox3->TabIndex = 29;
			this->textBox3->Text = L"С";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(37, 38);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(157, 20);
			this->dateTimePicker1->TabIndex = 28;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(182, 13);
			this->textBox2->TabIndex = 27;
			this->textBox2->Text = L"Период";
			// 
			// Graph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(853, 480);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox2);
			this->Name = L"Graph";
			this->Text = L"Graph";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

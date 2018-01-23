#pragma once

namespace Сommunal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для TariffSelection
	/// </summary>
	public ref class TariffSelection : public System::Windows::Forms::Form
	{
	public:
		TariffSelection(void)
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
		~TariffSelection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(317, 170);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 22);
			this->button1->TabIndex = 52;
			this->button1->Text = L"ОК";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(200, 143);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(233, 21);
			this->comboBox5->TabIndex = 51;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(12, 143);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(182, 13);
			this->textBox10->TabIndex = 50;
			this->textBox10->Text = L"Ваш поставщик услуг";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(200, 116);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(233, 21);
			this->comboBox4->TabIndex = 49;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(12, 116);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(182, 13);
			this->textBox9->TabIndex = 48;
			this->textBox9->Text = L"Коммунальная услуга";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(12, 90);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(182, 13);
			this->textBox8->TabIndex = 47;
			this->textBox8->Text = L"Период начисления";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(12, 64);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(182, 13);
			this->textBox7->TabIndex = 46;
			this->textBox7->Text = L"Муниципальное образование";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(200, 64);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(233, 21);
			this->comboBox3->TabIndex = 45;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(12, 38);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(182, 13);
			this->textBox6->TabIndex = 44;
			this->textBox6->Text = L"Муниципальный район";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(200, 38);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(233, 21);
			this->comboBox2->TabIndex = 43;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(182, 13);
			this->textBox1->TabIndex = 42;
			this->textBox1->Text = L"Субъект РФ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(200, 12);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(233, 21);
			this->comboBox1->TabIndex = 41;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(200, 90);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(233, 20);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// TariffSelection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(451, 204);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"TariffSelection";
			this->Text = L"TariffSelection";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

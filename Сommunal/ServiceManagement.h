#pragma once

#include "TariffSelection.h"
#include "DataArray.h"
#include "Tariff.h"

namespace Сommunal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ServiceManagement
	/// </summary>
	public ref class ServiceManagement : public System::Windows::Forms::Form
	{
		DataArray <Tariff> *Services;
	public:
		ServiceManagement(void)
		{
			InitializeComponent();
			Services = new DataArray <Tariff>;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ServiceManagement()
		{
			if (components)
			{
				delete components;
			}
			delete Services;
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::TextBox^  textBox7;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;


	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(384, 112);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 20);
			this->button2->TabIndex = 32;
			this->button2->Text = L"выбор тарифа";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ServiceManagement::button2_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(296, 112);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(81, 20);
			this->textBox7->TabIndex = 31;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(280, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 31);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Сохранить";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ServiceManagement::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(398, 176);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 31);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Отмена";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ServiceManagement::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"кВт⋅ч", L"м2" });
			this->comboBox1->Location = System::Drawing::Point(297, 85);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(213, 21);
			this->comboBox1->TabIndex = 27;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ServiceManagement::comboBox1_SelectedIndexChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(384, 61);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 17);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"тариф";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &ServiceManagement::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(296, 61);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 17);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"счётчик";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &ServiceManagement::radioButton1_CheckedChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(296, 35);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(214, 20);
			this->textBox3->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(106, 176);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 31);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Удалить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ServiceManagement::button3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 31);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ServiceManagement::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 35);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(182, 134);
			this->listBox1->TabIndex = 17;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ServiceManagement::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Список услуг";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(200, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Услуга";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(200, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Тарификация";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(200, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 36;
			this->label4->Text = L"Ед. измерения";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(200, 115);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 13);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Стоимость за ед.";
			// 
			// ServiceManagement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(523, 223);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Name = L"ServiceManagement";
			this->Text = L"Управление услугами";
			this->Load += gcnew System::EventHandler(this, &ServiceManagement::ServiceManagement_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TariffSelection^ TariffSelectionWindow = gcnew TariffSelection;
		TariffSelectionWindow->ShowDialog();
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		Tariff Temp;
		if (listBox1->SelectedIndex >= 0)
		{
			Temp = Services->GetItem(listBox1->SelectedIndex);
			String^ t = gcnew String(Temp.GetName().c_str());
			textBox3->Text = t;
			if (Temp.GetIsMeter() == true)
				radioButton1->PerformClick();
			else
				radioButton1->PerformClick();
			t = gcnew String(Temp.GetUnit().c_str());
			comboBox1->Text = t;
			textBox7->Text = Temp.GetPrice().ToString();
		}
	}
	private: System::Void ServiceManagement_Load(System::Object^  sender, System::EventArgs^  e)
	{
		//DataArray <Tariff> Services;
		Services->LoadFromFile("Service.dat");
		for (int i = 0; i < Services->GetTop(); i++)
		{
			Tariff Temp = Services->GetItem(i);
			String^ t = gcnew String(Temp.GetName().c_str());
			listBox1->Items->Add(t);
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Tariff Temp;
		String^ t = gcnew String(Temp.GetName().c_str());
		Services->AddItem(Temp);
		listBox1->Items->Add(t);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Services->RemoveItem(listBox1->SelectedIndex);
		listBox1->Items->Remove(listBox1->SelectedItem);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Services->SaveToFile("Service.dat");
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{

	}
};
}
#pragma once

#include "TariffSelection.h"
#include "DataArray.h"
#include "Tariff.h"
#include "MyFunctions.h"

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
		Tariff *Temp;
	public:
		ServiceManagement(void)
		{
			InitializeComponent();
			Services = new DataArray <Tariff>;
			Temp = new Tariff;
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
			delete Temp;
		}
	private: System::Windows::Forms::Button^  tariffSelectButton;
	protected:

	private: System::Windows::Forms::TextBox^  priceTextBox;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  cancelButton;


	protected:




	private: System::Windows::Forms::ComboBox^  unitComboBox;
	private: System::Windows::Forms::RadioButton^  tariffRadioButton;




	private: System::Windows::Forms::RadioButton^  meterRadioButton;

	private: System::Windows::Forms::TextBox^  serviceTextBox;
	private: System::Windows::Forms::Button^  deleteButton;



	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::ListBox^  servicesListBox;




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
			this->tariffSelectButton = (gcnew System::Windows::Forms::Button());
			this->priceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->unitComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->tariffRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->meterRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->serviceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->servicesListBox = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tariffSelectButton
			// 
			this->tariffSelectButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->tariffSelectButton->FlatAppearance->BorderSize = 0;
			this->tariffSelectButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tariffSelectButton->Location = System::Drawing::Point(384, 112);
			this->tariffSelectButton->Name = L"tariffSelectButton";
			this->tariffSelectButton->Size = System::Drawing::Size(126, 20);
			this->tariffSelectButton->TabIndex = 32;
			this->tariffSelectButton->Text = L"выбор тарифа";
			this->tariffSelectButton->UseVisualStyleBackColor = false;
			this->tariffSelectButton->Click += gcnew System::EventHandler(this, &ServiceManagement::tariffSelectButton_Click);
			// 
			// priceTextBox
			// 
			this->priceTextBox->Location = System::Drawing::Point(296, 112);
			this->priceTextBox->Name = L"priceTextBox";
			this->priceTextBox->Size = System::Drawing::Size(81, 20);
			this->priceTextBox->TabIndex = 31;
			this->priceTextBox->TextChanged += gcnew System::EventHandler(this, &ServiceManagement::priceTextBox_TextChanged_1);
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->saveButton->FlatAppearance->BorderSize = 0;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Location = System::Drawing::Point(280, 176);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(112, 31);
			this->saveButton->TabIndex = 29;
			this->saveButton->Text = L"Сохранить";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &ServiceManagement::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Location = System::Drawing::Point(398, 176);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(112, 31);
			this->cancelButton->TabIndex = 28;
			this->cancelButton->Text = L"Отмена";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &ServiceManagement::cancelButton_Click);
			// 
			// unitComboBox
			// 
			this->unitComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->unitComboBox->FormattingEnabled = true;
			this->unitComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"кВт*ч", L"м2", L"м3" });
			this->unitComboBox->Location = System::Drawing::Point(297, 85);
			this->unitComboBox->Name = L"unitComboBox";
			this->unitComboBox->Size = System::Drawing::Size(213, 21);
			this->unitComboBox->TabIndex = 27;
			this->unitComboBox->SelectionChangeCommitted += gcnew System::EventHandler(this, &ServiceManagement::unitComboBox_SelectionChangeCommitted);
			// 
			// tariffRadioButton
			// 
			this->tariffRadioButton->AutoSize = true;
			this->tariffRadioButton->Location = System::Drawing::Point(384, 61);
			this->tariffRadioButton->Name = L"tariffRadioButton";
			this->tariffRadioButton->Size = System::Drawing::Size(56, 17);
			this->tariffRadioButton->TabIndex = 24;
			this->tariffRadioButton->TabStop = true;
			this->tariffRadioButton->Text = L"тариф";
			this->tariffRadioButton->UseVisualStyleBackColor = true;
			this->tariffRadioButton->Click += gcnew System::EventHandler(this, &ServiceManagement::tariffRadioButton_Click);
			// 
			// meterRadioButton
			// 
			this->meterRadioButton->AutoSize = true;
			this->meterRadioButton->Location = System::Drawing::Point(296, 61);
			this->meterRadioButton->Name = L"meterRadioButton";
			this->meterRadioButton->Size = System::Drawing::Size(64, 17);
			this->meterRadioButton->TabIndex = 23;
			this->meterRadioButton->Text = L"счётчик";
			this->meterRadioButton->UseVisualStyleBackColor = true;
			this->meterRadioButton->Click += gcnew System::EventHandler(this, &ServiceManagement::meterRadioButton_Click);
			// 
			// serviceTextBox
			// 
			this->serviceTextBox->Location = System::Drawing::Point(296, 35);
			this->serviceTextBox->Name = L"serviceTextBox";
			this->serviceTextBox->Size = System::Drawing::Size(214, 20);
			this->serviceTextBox->TabIndex = 22;
			this->serviceTextBox->TextChanged += gcnew System::EventHandler(this, &ServiceManagement::serviceTextBox_TextChanged);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->deleteButton->FlatAppearance->BorderSize = 0;
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteButton->Location = System::Drawing::Point(106, 176);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(88, 31);
			this->deleteButton->TabIndex = 20;
			this->deleteButton->Text = L"Удалить";
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &ServiceManagement::deleteButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->addButton->FlatAppearance->BorderSize = 0;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Location = System::Drawing::Point(12, 176);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(88, 31);
			this->addButton->TabIndex = 19;
			this->addButton->Text = L"Добавить";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &ServiceManagement::addButton1Click);
			// 
			// servicesListBox
			// 
			this->servicesListBox->FormattingEnabled = true;
			this->servicesListBox->Location = System::Drawing::Point(12, 35);
			this->servicesListBox->Name = L"servicesListBox";
			this->servicesListBox->Size = System::Drawing::Size(182, 134);
			this->servicesListBox->TabIndex = 17;
			this->servicesListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ServiceManagement::servicesListBox_SelectedIndexChanged);
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
			this->Controls->Add(this->tariffSelectButton);
			this->Controls->Add(this->priceTextBox);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->unitComboBox);
			this->Controls->Add(this->tariffRadioButton);
			this->Controls->Add(this->meterRadioButton);
			this->Controls->Add(this->serviceTextBox);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->servicesListBox);
			this->Name = L"ServiceManagement";
			this->Text = L"Управление услугами";
			this->Load += gcnew System::EventHandler(this, &ServiceManagement::ServiceManagement_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void servicesListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			*Temp = Services->GetItem(servicesListBox->SelectedIndex);
			serviceTextBox->Text = StlStringToSystemString(Temp->GetName());
			if (Temp->GetIsMeter() == true)
				meterRadioButton->PerformClick();
			else
				tariffRadioButton->PerformClick();

			for (int i = 0; i < unitComboBox->Items->Count; i++)
				if (unitComboBox->Items[i]->ToString() == StlStringToSystemString(Temp->GetUnit()))
					unitComboBox->SelectedIndex = i;
			priceTextBox->Text = Temp->GetPrice().ToString();
		}
	}
	private: System::Void ServiceManagement_Load(System::Object^  sender, System::EventArgs^  e)
	{
		Services->LoadFromFile("Service.dat");
		for (int i = 0; i < Services->GetTop(); i++)
		{
			*Temp = Services->GetItem(i);
			servicesListBox->Items->Add(StlStringToSystemString(Temp->GetName()));
		}
	}
	private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Services->RemoveItem(servicesListBox->SelectedIndex);
			servicesListBox->Items->Remove(servicesListBox->SelectedItem);
		}
	}
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Services->SaveToFile("Service.dat");
		Close();
	}
	private: System::Void meterRadioButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Temp->SetIsMeter(true);
			Services->SetItem(*Temp, servicesListBox->SelectedIndex);
		}
	}
	private: System::Void tariffRadioButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Temp->SetIsMeter(false);
			Services->SetItem(*Temp, servicesListBox->SelectedIndex);
		}
	}
	private: System::Void serviceTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Temp->SetName(SystemStringToStlString(serviceTextBox->Text));
			Services->SetItem(*Temp, servicesListBox->SelectedIndex);
			servicesListBox->Items[servicesListBox->SelectedIndex] = serviceTextBox->Text;
		}
	}
	private: System::Void addButton1Click(System::Object^  sender, System::EventArgs^  e)
	{
		Services->AddItem(*Temp);
		servicesListBox->Items->Add(StlStringToSystemString(Temp->GetName()));
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void priceTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void tariffSelectButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		TariffSelection^ TariffSelectionWindow = gcnew TariffSelection;
		TariffSelectionWindow->ShowDialog();
	}
	private: System::Void unitComboBox_SelectionChangeCommitted(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Temp->SetUnit(SystemStringToStlString(unitComboBox->Items[unitComboBox->SelectedIndex]->ToString()));
			Services->SetItem(*Temp, servicesListBox->SelectedIndex);
		}
	}
	private: System::Void priceTextBox_TextChanged_1(System::Object^  sender, System::EventArgs^  e)
	{
		if (servicesListBox->SelectedIndex >= 0)
		{
			Temp->SetPrice(SystemStringToFloat(priceTextBox->Text));
			Services->SetItem(*Temp, servicesListBox->SelectedIndex);
		}
	}
};
}
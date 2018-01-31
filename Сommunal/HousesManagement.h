#pragma once

#include "House.h"
#include "DataArray.h"
#include "MyFunctions.h"

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
		DataArray <House> *HousesArray;
		House *Temp;
	public:
		HousesManagement(void)
		{
			InitializeComponent();
			HousesArray = new DataArray <House>;
			Temp = new House;
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
			delete HousesArray;
			delete Temp;
		}
	private: System::Windows::Forms::RadioButton^  privateHouseRadioButton;
	protected:
	private: System::Windows::Forms::RadioButton^  apartmentHouseRadioButton;
	private: System::Windows::Forms::TextBox^  numberOfPeoplesTextBox;
	protected:
	private: System::Windows::Forms::TextBox^  totalAreaTextBox;
	private: System::Windows::Forms::TextBox^  adressTextBox;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::TextBox^  descriptionTextBox;
	private: System::Windows::Forms::Button^  deleteButton;
	private: System::Windows::Forms::Button^  addButton;
	private: System::Windows::Forms::ListBox^  housesListBox;
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
			this->privateHouseRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->apartmentHouseRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->numberOfPeoplesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->totalAreaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->adressTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->descriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->housesListBox = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// privateHouseRadioButton
			// 
			this->privateHouseRadioButton->AutoSize = true;
			this->privateHouseRadioButton->Location = System::Drawing::Point(346, 151);
			this->privateHouseRadioButton->Name = L"privateHouseRadioButton";
			this->privateHouseRadioButton->Size = System::Drawing::Size(90, 17);
			this->privateHouseRadioButton->TabIndex = 50;
			this->privateHouseRadioButton->TabStop = true;
			this->privateHouseRadioButton->Text = L"частный дом";
			this->privateHouseRadioButton->UseVisualStyleBackColor = true;
			this->privateHouseRadioButton->Click += gcnew System::EventHandler(this, &HousesManagement::privateHouseRadioButton_Click);
			// 
			// apartmentHouseRadioButton
			// 
			this->apartmentHouseRadioButton->AutoSize = true;
			this->apartmentHouseRadioButton->Location = System::Drawing::Point(200, 152);
			this->apartmentHouseRadioButton->Name = L"apartmentHouseRadioButton";
			this->apartmentHouseRadioButton->Size = System::Drawing::Size(140, 17);
			this->apartmentHouseRadioButton->TabIndex = 49;
			this->apartmentHouseRadioButton->TabStop = true;
			this->apartmentHouseRadioButton->Text = L"многоквартирный дом";
			this->apartmentHouseRadioButton->UseVisualStyleBackColor = true;
			this->apartmentHouseRadioButton->Click += gcnew System::EventHandler(this, &HousesManagement::apartmentHouseRadioButton_Click);
			// 
			// numberOfPeoplesTextBox
			// 
			this->numberOfPeoplesTextBox->Location = System::Drawing::Point(427, 125);
			this->numberOfPeoplesTextBox->Name = L"numberOfPeoplesTextBox";
			this->numberOfPeoplesTextBox->Size = System::Drawing::Size(103, 20);
			this->numberOfPeoplesTextBox->TabIndex = 48;
			this->numberOfPeoplesTextBox->TextChanged += gcnew System::EventHandler(this, &HousesManagement::numberOfPeoplesTextBox_TextChanged);
			// 
			// totalAreaTextBox
			// 
			this->totalAreaTextBox->Location = System::Drawing::Point(312, 99);
			this->totalAreaTextBox->Name = L"totalAreaTextBox";
			this->totalAreaTextBox->Size = System::Drawing::Size(218, 20);
			this->totalAreaTextBox->TabIndex = 46;
			this->totalAreaTextBox->TextChanged += gcnew System::EventHandler(this, &HousesManagement::totalAreaTextBox_TextChanged);
			// 
			// adressTextBox
			// 
			this->adressTextBox->Location = System::Drawing::Point(312, 73);
			this->adressTextBox->Name = L"adressTextBox";
			this->adressTextBox->Size = System::Drawing::Size(218, 20);
			this->adressTextBox->TabIndex = 44;
			this->adressTextBox->TextChanged += gcnew System::EventHandler(this, &HousesManagement::adressTextBox_TextChanged);
			// 
			// saveButton
			// 
			this->saveButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->saveButton->FlatAppearance->BorderSize = 0;
			this->saveButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->saveButton->Location = System::Drawing::Point(309, 175);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(112, 31);
			this->saveButton->TabIndex = 42;
			this->saveButton->Text = L"Сохранить";
			this->saveButton->UseVisualStyleBackColor = false;
			this->saveButton->Click += gcnew System::EventHandler(this, &HousesManagement::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cancelButton->FlatAppearance->BorderSize = 0;
			this->cancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancelButton->Location = System::Drawing::Point(427, 175);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(112, 31);
			this->cancelButton->TabIndex = 41;
			this->cancelButton->Text = L"Отмена";
			this->cancelButton->UseVisualStyleBackColor = false;
			this->cancelButton->Click += gcnew System::EventHandler(this, &HousesManagement::cancelButton_Click);
			// 
			// descriptionTextBox
			// 
			this->descriptionTextBox->Location = System::Drawing::Point(312, 47);
			this->descriptionTextBox->Name = L"descriptionTextBox";
			this->descriptionTextBox->Size = System::Drawing::Size(218, 20);
			this->descriptionTextBox->TabIndex = 40;
			this->descriptionTextBox->TextChanged += gcnew System::EventHandler(this, &HousesManagement::descriptionTextBox_TextChanged);
			// 
			// deleteButton
			// 
			this->deleteButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->deleteButton->FlatAppearance->BorderSize = 0;
			this->deleteButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteButton->Location = System::Drawing::Point(105, 175);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(89, 31);
			this->deleteButton->TabIndex = 38;
			this->deleteButton->Text = L"Удалить";
			this->deleteButton->UseVisualStyleBackColor = false;
			this->deleteButton->Click += gcnew System::EventHandler(this, &HousesManagement::deleteButton_Click);
			// 
			// addButton
			// 
			this->addButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->addButton->FlatAppearance->BorderSize = 0;
			this->addButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addButton->Location = System::Drawing::Point(12, 175);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(87, 31);
			this->addButton->TabIndex = 37;
			this->addButton->Text = L"Добавить";
			this->addButton->UseVisualStyleBackColor = false;
			this->addButton->Click += gcnew System::EventHandler(this, &HousesManagement::addButton_Click);
			// 
			// housesListBox
			// 
			this->housesListBox->FormattingEnabled = true;
			this->housesListBox->Location = System::Drawing::Point(12, 47);
			this->housesListBox->Name = L"housesListBox";
			this->housesListBox->Size = System::Drawing::Size(182, 121);
			this->housesListBox->TabIndex = 35;
			this->housesListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &HousesManagement::housesListBox_SelectedIndexChanged);
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
			this->Controls->Add(this->privateHouseRadioButton);
			this->Controls->Add(this->apartmentHouseRadioButton);
			this->Controls->Add(this->numberOfPeoplesTextBox);
			this->Controls->Add(this->totalAreaTextBox);
			this->Controls->Add(this->adressTextBox);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->descriptionTextBox);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->housesListBox);
			this->Name = L"HousesManagement";
			this->Text = L"HousesManagement";
			this->Load += gcnew System::EventHandler(this, &HousesManagement::HousesManagement_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HousesManagement_Load(System::Object^  sender, System::EventArgs^  e)
	{
		HousesArray->LoadFromFile("Heuses.dat");
		for (int i = 0; i < HousesArray->GetTop(); i++)
		{
			*Temp = HousesArray->GetItem(i);
			housesListBox->Items->Add(StlStringToSystemString(Temp->GetName()));
		}
	}
	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		HousesArray->AddItem(*Temp);
		housesListBox->Items->Add(StlStringToSystemString(Temp->GetName()));
	}
	private: System::Void deleteButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			HousesArray->RemoveItem(housesListBox->SelectedIndex);
			housesListBox->Items->Remove(housesListBox->SelectedItem);
		}
	}
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		HousesArray->SaveToFile("Heuses.dat");
		Close();
	}
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Close();
	}
	private: System::Void descriptionTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetName(SystemStringToStlString(descriptionTextBox->Text));
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
			housesListBox->Items[housesListBox->SelectedIndex] = descriptionTextBox->Text;
		}
	}
	private: System::Void housesListBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			*Temp = HousesArray->GetItem(housesListBox->SelectedIndex);
			descriptionTextBox->Text = StlStringToSystemString(Temp->GetName());
			adressTextBox->Text = StlStringToSystemString(Temp->GetAdress());
			totalAreaTextBox->Text = Temp->GetTotalArea().ToString();
			numberOfPeoplesTextBox->Text = Temp->GetNumberOfPeoples().ToString();
			if (Temp->GetIsPrivate() == true)
				privateHouseRadioButton->PerformClick();
			else
				apartmentHouseRadioButton->PerformClick();
		}
	}
	private: System::Void adressTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetAdress(SystemStringToStlString(adressTextBox->Text));
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
		}
	}
	private: System::Void totalAreaTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetTotalArea(SystemStringToFloat(totalAreaTextBox->Text));
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
		}
	}
	private: System::Void numberOfPeoplesTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetNumberOfPeoples(SystemStringToInt(numberOfPeoplesTextBox->Text));
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
		}
	}
	private: System::Void apartmentHouseRadioButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetIsPrivate(false);
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
		}
	}

	private: System::Void privateHouseRadioButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (housesListBox->SelectedIndex >= 0)
		{
			Temp->SetIsPrivate(true);
			HousesArray->SetItem(*Temp, housesListBox->SelectedIndex);
		}
	}
	};
}

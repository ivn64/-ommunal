#pragma once

#include <stdlib.h>

#include "ServiceManagement.h"
#include "HousesManagement.h"
#include "Graph.h"
#include "House.h"
#include "DataArray.h"
#include "MyFunctions.h"

namespace —ommunal
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
		DataArray <House> *HouseArray;
		House *Temp1;
	public:
		MainWindow(void)
		{
			InitializeComponent();
			HouseArray = new DataArray <House>;
			Temp1 = new House;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
			//delete HouseArray;
			delete Temp1;
		}
	private: System::Windows::Forms::ComboBox^  housesComboBox;
	private: System::Windows::Forms::Button^  exportButton;
	protected:

	protected:

	private: System::Windows::Forms::Button^  housesButton;
	private: System::Windows::Forms::Button^  graphButton;


	private: System::Windows::Forms::Button^  servicesButton;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->housesComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->exportButton = (gcnew System::Windows::Forms::Button());
			this->housesButton = (gcnew System::Windows::Forms::Button());
			this->graphButton = (gcnew System::Windows::Forms::Button());
			this->servicesButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// housesComboBox
			// 
			this->housesComboBox->FormattingEnabled = true;
			this->housesComboBox->Location = System::Drawing::Point(109, 14);
			this->housesComboBox->Name = L"housesComboBox";
			this->housesComboBox->Size = System::Drawing::Size(141, 21);
			this->housesComboBox->TabIndex = 15;
			// 
			// exportButton
			// 
			this->exportButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->exportButton->FlatAppearance->BorderSize = 0;
			this->exportButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportButton->Location = System::Drawing::Point(256, 12);
			this->exportButton->Name = L"exportButton";
			this->exportButton->Size = System::Drawing::Size(91, 54);
			this->exportButton->TabIndex = 14;
			this->exportButton->Text = L"Ёкспорт в excel";
			this->exportButton->UseVisualStyleBackColor = false;
			this->exportButton->Click += gcnew System::EventHandler(this, &MainWindow::exportButton_Click);
			// 
			// housesButton
			// 
			this->housesButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->housesButton->FlatAppearance->BorderSize = 0;
			this->housesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->housesButton->Location = System::Drawing::Point(109, 41);
			this->housesButton->Name = L"housesButton";
			this->housesButton->Size = System::Drawing::Size(141, 25);
			this->housesButton->TabIndex = 13;
			this->housesButton->Text = L"”правление объектами";
			this->housesButton->UseVisualStyleBackColor = false;
			this->housesButton->Click += gcnew System::EventHandler(this, &MainWindow::housesButton_Click);
			// 
			// graphButton
			// 
			this->graphButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->graphButton->FlatAppearance->BorderSize = 0;
			this->graphButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->graphButton->Location = System::Drawing::Point(353, 12);
			this->graphButton->Name = L"graphButton";
			this->graphButton->Size = System::Drawing::Size(91, 54);
			this->graphButton->TabIndex = 12;
			this->graphButton->Text = L"√рафик";
			this->graphButton->UseVisualStyleBackColor = false;
			this->graphButton->Click += gcnew System::EventHandler(this, &MainWindow::graphButton_Click);
			// 
			// servicesButton
			// 
			this->servicesButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->servicesButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->servicesButton->FlatAppearance->BorderSize = 0;
			this->servicesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->servicesButton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->servicesButton->Location = System::Drawing::Point(12, 12);
			this->servicesButton->Name = L"servicesButton";
			this->servicesButton->Size = System::Drawing::Size(91, 54);
			this->servicesButton->TabIndex = 11;
			this->servicesButton->Text = L"”правление услугами";
			this->servicesButton->UseVisualStyleBackColor = false;
			this->servicesButton->Click += gcnew System::EventHandler(this, &MainWindow::servicesButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(458, 356);
			this->Controls->Add(this->housesComboBox);
			this->Controls->Add(this->exportButton);
			this->Controls->Add(this->housesButton);
			this->Controls->Add(this->graphButton);
			this->Controls->Add(this->servicesButton);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Activated += gcnew System::EventHandler(this, &MainWindow::MainWindow_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &MainWindow::MainWindow_Deactivate);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void servicesButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		ServiceManagement^ OpenWindow = gcnew ServiceManagement;
		OpenWindow->ShowDialog();
	}
	private: System::Void housesButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		HousesManagement^ HousesManagementWindow = gcnew HousesManagement;
		HousesManagementWindow->ShowDialog();
	}
	private: System::Void graphButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Graph^ GraphWindow = gcnew Graph;
		GraphWindow->ShowDialog();
	}
	private: System::Void exportButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
	private: System::Void MainWindow_Activated(System::Object^  sender, System::EventArgs^  e)
	{
		HouseArray->LoadFromFile("Heuses.dat");
		for (int i = 0; i < HouseArray->GetTop(); i++)
		{
			*Temp1 = HouseArray->GetItem(i);
			housesComboBox->Items->Add(StlStringToSystemString(Temp1->GetName()));
		}
	}
	private: System::Void MainWindow_Deactivate(System::Object^  sender, System::EventArgs^  e)
	{
		housesComboBox->Items->Clear();
	}
	};
}

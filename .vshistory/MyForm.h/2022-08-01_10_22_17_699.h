#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <ctime>
#include <vector>
namespace wordhun40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std; 


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			setText();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ scorePanel;
	private: System::Windows::Forms::Panel^ usedWordsPanel;
	protected:
		


	protected:

	private: System::Windows::Forms::Panel^ resetButtonPanel;
	private: System::Windows::Forms::TableLayoutPanel^ letterButtons;
	private: System::Windows::Forms::Button^ b16;

	private: System::Windows::Forms::Button^ b15;

	private: System::Windows::Forms::Button^ b14;

	private: System::Windows::Forms::Button^ b13;

	private: System::Windows::Forms::Button^ b12;

	private: System::Windows::Forms::Button^ b11;

	private: System::Windows::Forms::Button^ b10;

	private: System::Windows::Forms::Button^ b9;

	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b7;


	private: System::Windows::Forms::Button^ b6;

	private: System::Windows::Forms::Button^ b5;

	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b1;


	

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->scorePanel = (gcnew System::Windows::Forms::Panel());
			this->usedWordsPanel = (gcnew System::Windows::Forms::Panel());
			this->resetButtonPanel = (gcnew System::Windows::Forms::Panel());
			this->letterButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->b16 = (gcnew System::Windows::Forms::Button());
			this->b15 = (gcnew System::Windows::Forms::Button());
			this->b14 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b10 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->letterButtons->SuspendLayout();
			this->SuspendLayout();
			// 
			// scorePanel
			// 
			this->scorePanel->Location = System::Drawing::Point(157, 436);
			this->scorePanel->Name = L"scorePanel";
			this->scorePanel->Size = System::Drawing::Size(332, 200);
			this->scorePanel->TabIndex = 0;
			// 
			// usedWordsPanel
			// 
			this->usedWordsPanel->Location = System::Drawing::Point(0, 436);
			this->usedWordsPanel->Name = L"usedWordsPanel";
			this->usedWordsPanel->Size = System::Drawing::Size(151, 200);
			this->usedWordsPanel->TabIndex = 0;
			// 
			// resetButtonPanel
			// 
			this->resetButtonPanel->Location = System::Drawing::Point(497, 436);
			this->resetButtonPanel->Name = L"resetButtonPanel";
			this->resetButtonPanel->Size = System::Drawing::Size(160, 199);
			this->resetButtonPanel->TabIndex = 1;
			// 
			// letterButtons
			// 
			this->letterButtons->ColumnCount = 4;
			this->letterButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->letterButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->letterButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->letterButtons->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->letterButtons->Controls->Add(this->b16, 3, 3);
			this->letterButtons->Controls->Add(this->b15, 2, 3);
			this->letterButtons->Controls->Add(this->b14, 1, 3);
			this->letterButtons->Controls->Add(this->b13, 0, 3);
			this->letterButtons->Controls->Add(this->b12, 3, 2);
			this->letterButtons->Controls->Add(this->b11, 2, 2);
			this->letterButtons->Controls->Add(this->b10, 1, 2);
			this->letterButtons->Controls->Add(this->b9, 0, 2);
			this->letterButtons->Controls->Add(this->b8, 3, 1);
			this->letterButtons->Controls->Add(this->b7, 2, 1);
			this->letterButtons->Controls->Add(this->b6, 1, 1);
			this->letterButtons->Controls->Add(this->b5, 0, 1);
			this->letterButtons->Controls->Add(this->b4, 3, 0);
			this->letterButtons->Controls->Add(this->b3, 2, 0);
			this->letterButtons->Controls->Add(this->b2, 1, 0);
			this->letterButtons->Controls->Add(this->b1, 0, 0);
			this->letterButtons->Location = System::Drawing::Point(0, 0);
			this->letterButtons->Name = L"letterButtons";
			this->letterButtons->RowCount = 4;
			this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->letterButtons->Size = System::Drawing::Size(657, 430);
			this->letterButtons->TabIndex = 2;
			// 
			// b16
			// 
			this->b16->Location = System::Drawing::Point(495, 324);
			this->b16->Name = L"b16";
			this->b16->Size = System::Drawing::Size(158, 101);
			this->b16->TabIndex = 18;
			this->b16->Text = L"button16";
			this->b16->UseVisualStyleBackColor = true;
			// 
			// b15
			// 
			this->b15->Location = System::Drawing::Point(331, 324);
			this->b15->Name = L"b15";
			this->b15->Size = System::Drawing::Size(158, 101);
			this->b15->TabIndex = 17;
			this->b15->Text = L"button15";
			this->b15->UseVisualStyleBackColor = true;
			// 
			// b14
			// 
			this->b14->Location = System::Drawing::Point(167, 324);
			this->b14->Name = L"b14";
			this->b14->Size = System::Drawing::Size(158, 101);
			this->b14->TabIndex = 16;
			this->b14->Text = L"button14";
			this->b14->UseVisualStyleBackColor = true;
			// 
			// b13
			// 
			this->b13->Location = System::Drawing::Point(3, 324);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(158, 101);
			this->b13->TabIndex = 15;
			this->b13->Text = L"b13";
			this->b13->UseVisualStyleBackColor = true;
			// 
			// b12
			// 
			this->b12->Location = System::Drawing::Point(495, 217);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(158, 101);
			this->b12->TabIndex = 14;
			this->b12->Text = L"b12";
			this->b12->UseVisualStyleBackColor = true;
			// 
			// b11
			// 
			this->b11->Location = System::Drawing::Point(331, 217);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(158, 101);
			this->b11->TabIndex = 13;
			this->b11->Text = L"button11";
			this->b11->UseVisualStyleBackColor = true;
			// 
			// b10
			// 
			this->b10->Location = System::Drawing::Point(167, 217);
			this->b10->Name = L"b10";
			this->b10->Size = System::Drawing::Size(158, 101);
			this->b10->TabIndex = 12;
			this->b10->Text = L"button10";
			this->b10->UseVisualStyleBackColor = true;
			// 
			// b9
			// 
			this->b9->Location = System::Drawing::Point(3, 217);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(158, 101);
			this->b9->TabIndex = 11;
			this->b9->Text = L"button9";
			this->b9->UseVisualStyleBackColor = true;
			// 
			// b8
			// 
			this->b8->Location = System::Drawing::Point(495, 110);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(158, 101);
			this->b8->TabIndex = 10;
			this->b8->Text = L"button8";
			this->b8->UseVisualStyleBackColor = true;
			// 
			// b7
			// 
			this->b7->Location = System::Drawing::Point(331, 110);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(158, 101);
			this->b7->TabIndex = 9;
			this->b7->Text = L"button7";
			this->b7->UseVisualStyleBackColor = true;
			// 
			// b6
			// 
			this->b6->Location = System::Drawing::Point(167, 110);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(158, 101);
			this->b6->TabIndex = 8;
			this->b6->Text = L"button6";
			this->b6->UseVisualStyleBackColor = true;
			// 
			// b5
			// 
			this->b5->Location = System::Drawing::Point(3, 110);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(158, 101);
			this->b5->TabIndex = 7;
			this->b5->Text = L"button5";
			this->b5->UseVisualStyleBackColor = true;
			// 
			// b4
			// 
			this->b4->Location = System::Drawing::Point(495, 3);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(158, 101);
			this->b4->TabIndex = 6;
			this->b4->Text = L"button4";
			this->b4->UseVisualStyleBackColor = true;
			// 
			// b3
			// 
			this->b3->Location = System::Drawing::Point(331, 3);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(158, 101);
			this->b3->TabIndex = 5;
			this->b3->Text = L"button3";
			this->b3->UseVisualStyleBackColor = true;
			// 
			// b2
			// 
			this->b2->Location = System::Drawing::Point(167, 3);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(158, 101);
			this->b2->TabIndex = 4;
			this->b2->Text = L"button2";
			this->b2->UseVisualStyleBackColor = true;
			// 
			// b1
			// 
			this->b1->Location = System::Drawing::Point(3, 3);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(158, 101);
			this->b1->TabIndex = 3;
			this->b1->Text = L"button1";
			this->b1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(659, 634);
			this->Controls->Add(this->letterButtons);
			this->Controls->Add(this->resetButtonPanel);
			this->Controls->Add(this->usedWordsPanel);
			this->Controls->Add(this->scorePanel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"WordHunt ";
			this->letterButtons->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		void setText(void) {
			srand(time(NULL));
			int num; 
			vector<int> used;
			int i;
			for (i = 0; i <= 16; i++) {
				
				int random;
				bool exists;

				do {
					bool exists = false;
					random = (rand() % 25) + 1;
				
				}while (exists);

				change(i,random);

				used.push_back(random);
			}
			
			
		}

		void change(int b, int rand) {

			char alphabets[] = { 'A', 'B', 'C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
			Char lmao = alphabets[rand];
			String^ letter;
			letter += lmao;

			switch (b)

			{
			case 1:
				this->b1->Text = letter;
				break;
			case 2:
				this->b2->Text = letter;
				break;
			case 3:
				this->b3->Text = letter;
				break;
			case 4:
				this->b4->Text = letter;
				break;
			case 5:
				this->b5->Text = letter;
				break;
			case 6:
				this->b6->Text = letter;
				break;
			case 7:
				this->b7->Text = letter;
				break;
			case 8:
				this->b8->Text = letter;
				break;
			case 9:
				this->b9->Text = letter;
				break;
			case 10:
				this->b10->Text = letter;
				break;
			case 11:
				this->b11->Text = letter;
				break;
			case 12:
				this->b12->Text = letter;
				break;
			case 13:
				this->b13->Text = letter;
				break;
			case 14:
				this->b14->Text = letter;
				break;
			case 15:
				this->b15->Text = letter; 
				break;
			case 16:
				this->b16->Text = letter;
				break;
			default:
				break;
			}

		}
#pragma endregion


};
}

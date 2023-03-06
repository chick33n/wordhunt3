#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <ctime>
#include <vector>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <msclr\marshal.h>


std::vector<std::string> vtr{};
std::string hello[900];
std::string useed1 = "";
std::string useed2 = "";
std::string useed3 = "";
std::string useed4 = "";

namespace wordhun40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;
	//using namespace emarr;

	

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
			this->Select();
			setText();
			

		}

		//static string l[900] = emptyARray::createarray;
		

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
	private: System::Windows::Forms::Label^ curText;
	private: System::Windows::Forms::Button^ Enter;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Label^ message;


#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>

		   String^ currentGuess = "";
	private: System::Windows::Forms::Label^ used1;

		   String^ letters = "";
	private: System::Windows::Forms::Label^ used4;
	private: System::Windows::Forms::Label^ used3;
	private: System::Windows::Forms::Label^ used2;
	private: System::Windows::Forms::Label^ totalpoints;
	private: System::Windows::Forms::Label^ currentP;
			INT curword = 0;
			INT curPoint;
			INT totalPoint;

	

		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->scorePanel = (gcnew System::Windows::Forms::Panel());
			   this->message = (gcnew System::Windows::Forms::Label());
			   this->del = (gcnew System::Windows::Forms::Button());
			   this->Enter = (gcnew System::Windows::Forms::Button());
			   this->curText = (gcnew System::Windows::Forms::Label());
			   this->usedWordsPanel = (gcnew System::Windows::Forms::Panel());
			   this->totalpoints = (gcnew System::Windows::Forms::Label());
			   this->currentP = (gcnew System::Windows::Forms::Label());
			   this->resetButtonPanel = (gcnew System::Windows::Forms::Panel());
			   this->used4 = (gcnew System::Windows::Forms::Label());
			   this->used3 = (gcnew System::Windows::Forms::Label());
			   this->used2 = (gcnew System::Windows::Forms::Label());
			   this->used1 = (gcnew System::Windows::Forms::Label());
			   this->letterButtons = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->b16 = (gcnew System::Windows::Forms::Button());
			   this->b15 = (gcnew System::Windows::Forms::Button());
			   this->b14 = (gcnew System::Windows::Forms::Button());
			   this->b13 = (gcnew System::Windows::Forms::Button());
			   this->b11 = (gcnew System::Windows::Forms::Button());
			   this->b10 = (gcnew System::Windows::Forms::Button());
			   this->b9 = (gcnew System::Windows::Forms::Button());
			   this->b6 = (gcnew System::Windows::Forms::Button());
			   this->b5 = (gcnew System::Windows::Forms::Button());
			   this->b4 = (gcnew System::Windows::Forms::Button());
			   this->b3 = (gcnew System::Windows::Forms::Button());
			   this->b1 = (gcnew System::Windows::Forms::Button());
			   this->b2 = (gcnew System::Windows::Forms::Button());
			   this->b12 = (gcnew System::Windows::Forms::Button());
			   this->b8 = (gcnew System::Windows::Forms::Button());
			   this->b7 = (gcnew System::Windows::Forms::Button());
			   this->scorePanel->SuspendLayout();
			   this->usedWordsPanel->SuspendLayout();
			   this->resetButtonPanel->SuspendLayout();
			   this->letterButtons->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // scorePanel
			   // 
			   this->scorePanel->Controls->Add(this->message);
			   this->scorePanel->Controls->Add(this->del);
			   this->scorePanel->Controls->Add(this->Enter);
			   this->scorePanel->Controls->Add(this->curText);
			   this->scorePanel->Location = System::Drawing::Point(157, 436);
			   this->scorePanel->Name = L"scorePanel";
			   this->scorePanel->Size = System::Drawing::Size(332, 200);
			   this->scorePanel->TabIndex = 0;
			   // 
			   // message
			   // 
			   this->message->AutoSize = true;
			   this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->message->Location = System::Drawing::Point(19, 118);
			   this->message->Name = L"message";
			   this->message->Size = System::Drawing::Size(85, 20);
			   this->message->TabIndex = 3;
			   this->message->Text = L"Click Enter";
			   // 
			   // del
			   // 
			   this->del->ForeColor = System::Drawing::Color::CornflowerBlue;
			   this->del->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del.Image")));
			   this->del->Location = System::Drawing::Point(185, 28);
			   this->del->Name = L"del";
			   this->del->Size = System::Drawing::Size(144, 69);
			   this->del->TabIndex = 5;
			   this->del->UseVisualStyleBackColor = true;
			   this->del->Click += gcnew System::EventHandler(this, &MyForm::del_Click);
			   this->del->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // Enter
			   // 
			   this->Enter->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->Enter->Location = System::Drawing::Point(10, 28);
			   this->Enter->Name = L"Enter";
			   this->Enter->Size = System::Drawing::Size(169, 69);
			   this->Enter->TabIndex = 4;
			   this->Enter->Text = L"Enter Guess";
			   this->Enter->UseVisualStyleBackColor = true;
			   this->Enter->Click += gcnew System::EventHandler(this, &MyForm::Enter_Click);
			   this->Enter->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // curText
			   // 
			   this->curText->AutoSize = true;
			   this->curText->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->curText->Location = System::Drawing::Point(5, 0);
			   this->curText->Name = L"curText";
			   this->curText->Size = System::Drawing::Size(113, 25);
			   this->curText->TabIndex = 3;
			   this->curText->Text = L"Start Typing";
			   // 
			   // usedWordsPanel
			   // 
			   this->usedWordsPanel->Controls->Add(this->totalpoints);
			   this->usedWordsPanel->Controls->Add(this->currentP);
			   this->usedWordsPanel->Location = System::Drawing::Point(0, 436);
			   this->usedWordsPanel->Name = L"usedWordsPanel";
			   this->usedWordsPanel->Size = System::Drawing::Size(151, 200);
			   this->usedWordsPanel->TabIndex = 0;
			   // 
			   // totalpoints
			   // 
			   this->totalpoints->AutoSize = true;
			   this->totalpoints->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->totalpoints->Location = System::Drawing::Point(21, 93);
			   this->totalpoints->Name = L"totalpoints";
			   this->totalpoints->Size = System::Drawing::Size(17, 19);
			   this->totalpoints->TabIndex = 1;
			   this->totalpoints->Text = L"0";
			   // 
			   // currentP
			   // 
			   this->currentP->AutoSize = true;
			   this->currentP->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->currentP->Location = System::Drawing::Point(21, 12);
			   this->currentP->Name = L"currentP";
			   this->currentP->Size = System::Drawing::Size(24, 28);
			   this->currentP->TabIndex = 0;
			   this->currentP->Text = L"0";
			   // 
			   // resetButtonPanel
			   // 
			   this->resetButtonPanel->Controls->Add(this->used4);
			   this->resetButtonPanel->Controls->Add(this->used3);
			   this->resetButtonPanel->Controls->Add(this->used2);
			   this->resetButtonPanel->Controls->Add(this->used1);
			   this->resetButtonPanel->Location = System::Drawing::Point(497, 436);
			   this->resetButtonPanel->Name = L"resetButtonPanel";
			   this->resetButtonPanel->Size = System::Drawing::Size(160, 199);
			   this->resetButtonPanel->TabIndex = 1;
			   // 
			   // used4
			   // 
			   this->used4->AutoSize = true;
			   this->used4->Location = System::Drawing::Point(3, 140);
			   this->used4->Name = L"used4";
			   this->used4->Size = System::Drawing::Size(35, 13);
			   this->used4->TabIndex = 22;
			   this->used4->Text = L"label1";
			   // 
			   // used3
			   // 
			   this->used3->AutoSize = true;
			   this->used3->Location = System::Drawing::Point(3, 105);
			   this->used3->Name = L"used3";
			   this->used3->Size = System::Drawing::Size(35, 13);
			   this->used3->TabIndex = 21;
			   this->used3->Text = L"label1";
			   // 
			   // used2
			   // 
			   this->used2->AutoSize = true;
			   this->used2->Location = System::Drawing::Point(3, 72);
			   this->used2->Name = L"used2";
			   this->used2->Size = System::Drawing::Size(35, 13);
			   this->used2->TabIndex = 20;
			   this->used2->Text = L"label1";
			   // 
			   // used1
			   // 
			   this->used1->AutoSize = true;
			   this->used1->Location = System::Drawing::Point(3, 41);
			   this->used1->Name = L"used1";
			   this->used1->Size = System::Drawing::Size(35, 13);
			   this->used1->TabIndex = 19;
			   this->used1->Text = L"label1";
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
			   this->letterButtons->Controls->Add(this->b11, 2, 2);
			   this->letterButtons->Controls->Add(this->b10, 1, 2);
			   this->letterButtons->Controls->Add(this->b9, 0, 2);
			   this->letterButtons->Controls->Add(this->b6, 1, 1);
			   this->letterButtons->Controls->Add(this->b5, 0, 1);
			   this->letterButtons->Controls->Add(this->b3, 2, 0);
			   this->letterButtons->Controls->Add(this->b1, 0, 0);
			   this->letterButtons->Controls->Add(this->b2, 1, 0);
			   this->letterButtons->Controls->Add(this->b12, 3, 2);
			   this->letterButtons->Controls->Add(this->b8, 3, 1);
			   this->letterButtons->Controls->Add(this->b7, 2, 1);
			   this->letterButtons->Controls->Add(this->b4, 3, 0);
			   this->letterButtons->Location = System::Drawing::Point(0, 0);
			   this->letterButtons->Name = L"letterButtons";
			   this->letterButtons->RowCount = 5;
			   this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			   this->letterButtons->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			   this->letterButtons->Size = System::Drawing::Size(657, 430);
			   this->letterButtons->TabIndex = 2;
			   // 
			   // b16
			   // 
			   this->b16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b16->Location = System::Drawing::Point(495, 309);
			   this->b16->Name = L"b16";
			   this->b16->Size = System::Drawing::Size(158, 96);
			   this->b16->TabIndex = 18;
			   this->b16->Text = L"button16";
			   this->b16->UseVisualStyleBackColor = true;
			   this->b16->Click += gcnew System::EventHandler(this, &MyForm::b16_Click);
			   this->b16->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b15
			   // 
			   this->b15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b15->Location = System::Drawing::Point(331, 309);
			   this->b15->Name = L"b15";
			   this->b15->Size = System::Drawing::Size(158, 96);
			   this->b15->TabIndex = 17;
			   this->b15->Text = L"button15";
			   this->b15->UseVisualStyleBackColor = true;
			   this->b15->Click += gcnew System::EventHandler(this, &MyForm::b15_Click);
			   this->b15->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b14
			   // 
			   this->b14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b14->Location = System::Drawing::Point(167, 309);
			   this->b14->Name = L"b14";
			   this->b14->Size = System::Drawing::Size(158, 96);
			   this->b14->TabIndex = 16;
			   this->b14->Text = L"button14";
			   this->b14->UseVisualStyleBackColor = true;
			   this->b14->Click += gcnew System::EventHandler(this, &MyForm::b14_Click);
			   this->b14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b13
			   // 
			   this->b13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b13->Location = System::Drawing::Point(3, 309);
			   this->b13->Name = L"b13";
			   this->b13->Size = System::Drawing::Size(158, 96);
			   this->b13->TabIndex = 15;
			   this->b13->Text = L"b13";
			   this->b13->UseVisualStyleBackColor = true;
			   this->b13->Click += gcnew System::EventHandler(this, &MyForm::b13_Click);
			   this->b13->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b11
			   // 
			   this->b11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b11->Location = System::Drawing::Point(331, 207);
			   this->b11->Name = L"b11";
			   this->b11->Size = System::Drawing::Size(158, 96);
			   this->b11->TabIndex = 13;
			   this->b11->Text = L"button11";
			   this->b11->UseVisualStyleBackColor = true;
			   this->b11->Click += gcnew System::EventHandler(this, &MyForm::b11_Click);
			   this->b11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b10
			   // 
			   this->b10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b10->Location = System::Drawing::Point(167, 207);
			   this->b10->Name = L"b10";
			   this->b10->Size = System::Drawing::Size(158, 96);
			   this->b10->TabIndex = 12;
			   this->b10->Text = L"button10";
			   this->b10->UseVisualStyleBackColor = true;
			   this->b10->Click += gcnew System::EventHandler(this, &MyForm::b10_Click);
			   this->b10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b9
			   // 
			   this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b9->Location = System::Drawing::Point(3, 207);
			   this->b9->Name = L"b9";
			   this->b9->Size = System::Drawing::Size(158, 96);
			   this->b9->TabIndex = 11;
			   this->b9->Text = L"button9";
			   this->b9->UseVisualStyleBackColor = true;
			   this->b9->Click += gcnew System::EventHandler(this, &MyForm::b9_Click);
			   this->b9->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b6
			   // 
			   this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b6->Location = System::Drawing::Point(167, 105);
			   this->b6->Name = L"b6";
			   this->b6->Size = System::Drawing::Size(158, 96);
			   this->b6->TabIndex = 8;
			   this->b6->Text = L"button6";
			   this->b6->UseVisualStyleBackColor = true;
			   this->b6->Click += gcnew System::EventHandler(this, &MyForm::b6_Click);
			   this->b6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b5
			   // 
			   this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b5->Location = System::Drawing::Point(3, 105);
			   this->b5->Name = L"b5";
			   this->b5->Size = System::Drawing::Size(158, 96);
			   this->b5->TabIndex = 7;
			   this->b5->Text = L"button5";
			   this->b5->UseVisualStyleBackColor = true;
			   this->b5->Click += gcnew System::EventHandler(this, &MyForm::b5_Click);
			   this->b5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b4
			   // 
			   this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b4->Location = System::Drawing::Point(495, 3);
			   this->b4->Name = L"b4";
			   this->b4->Size = System::Drawing::Size(158, 96);
			   this->b4->TabIndex = 6;
			   this->b4->Text = L"button4";
			   this->b4->UseVisualStyleBackColor = true;
			   this->b4->Click += gcnew System::EventHandler(this, &MyForm::b4_Click);
			   this->b4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b3
			   // 
			   this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b3->Location = System::Drawing::Point(331, 3);
			   this->b3->Name = L"b3";
			   this->b3->Size = System::Drawing::Size(158, 96);
			   this->b3->TabIndex = 5;
			   this->b3->Text = L"button3";
			   this->b3->UseVisualStyleBackColor = true;
			   this->b3->Click += gcnew System::EventHandler(this, &MyForm::b3_Click);
			   this->b3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b1
			   // 
			   this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b1->Location = System::Drawing::Point(3, 3);
			   this->b1->Name = L"b1";
			   this->b1->Size = System::Drawing::Size(158, 96);
			   this->b1->TabIndex = 3;
			   this->b1->Text = L"button1";
			   this->b1->UseVisualStyleBackColor = true;
			   this->b1->Click += gcnew System::EventHandler(this, &MyForm::b1_Click);
			   this->b1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b2
			   // 
			   this->b2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			   this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b2->Location = System::Drawing::Point(167, 3);
			   this->b2->Name = L"b2";
			   this->b2->Size = System::Drawing::Size(158, 96);
			   this->b2->TabIndex = 4;
			   this->b2->Text = L"button2";
			   this->b2->UseVisualStyleBackColor = false;
			   this->b2->Click += gcnew System::EventHandler(this, &MyForm::b2_Click);
			   this->b2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b12
			   // 
			   this->b12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b12->Location = System::Drawing::Point(495, 207);
			   this->b12->Name = L"b12";
			   this->b12->Size = System::Drawing::Size(158, 96);
			   this->b12->TabIndex = 14;
			   this->b12->Text = L"b12";
			   this->b12->UseVisualStyleBackColor = true;
			   this->b12->Click += gcnew System::EventHandler(this, &MyForm::b12_Click);
			   this->b12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b8
			   // 
			   this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b8->Location = System::Drawing::Point(495, 105);
			   this->b8->Name = L"b8";
			   this->b8->Size = System::Drawing::Size(158, 96);
			   this->b8->TabIndex = 10;
			   this->b8->Text = L"button8";
			   this->b8->UseVisualStyleBackColor = true;
			   this->b8->Click += gcnew System::EventHandler(this, &MyForm::b8_Click);
			   this->b8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // b7
			   // 
			   this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->b7->Location = System::Drawing::Point(331, 105);
			   this->b7->Name = L"b7";
			   this->b7->Size = System::Drawing::Size(158, 96);
			   this->b7->TabIndex = 9;
			   this->b7->Text = L"button7";
			   this->b7->UseVisualStyleBackColor = true;
			   this->b7->Click += gcnew System::EventHandler(this, &MyForm::b7_Click);
			   this->b7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::keyboard);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->AutoValidate = System::Windows::Forms::AutoValidate::Disable;
			   this->BackColor = System::Drawing::SystemColors::Window;
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			   this->CausesValidation = false;
			   this->ClientSize = System::Drawing::Size(663, 634);
			   this->Controls->Add(this->letterButtons);
			   this->Controls->Add(this->resetButtonPanel);
			   this->Controls->Add(this->usedWordsPanel);
			   this->Controls->Add(this->scorePanel);
			   this->ForeColor = System::Drawing::Color::Black;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->ImeMode = System::Windows::Forms::ImeMode::On;
			   this->Name = L"MyForm";
			   this->Text = L"WordHunt ";
			   this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			   this->scorePanel->ResumeLayout(false);
			   this->scorePanel->PerformLayout();
			   this->usedWordsPanel->ResumeLayout(false);
			   this->usedWordsPanel->PerformLayout();
			   this->resetButtonPanel->ResumeLayout(false);
			   this->resetButtonPanel->PerformLayout();
			   this->letterButtons->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
		   void change(int b, int rand) {

			   char alphabets[] = { ' ', 'A', 'B', 'C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
			   Char lmao = alphabets[rand];
			   String^ letter;
			   letter += lmao;

			   switch (b)

			   {
			   case 1:
				   this->b1->Text = letter;
				   letters += letter;
				   break;
			   case 2:
				   this->b2->Text = letter;
				   letters += letter;
				   break;
			   case 3:
				   this->b3->Text = letter;
				   letters += letter;
				   break;
			   case 4:
				   this->b4->Text = letter;
				   letters += letter;
				   break;
			   case 5:
				   this->b5->Text = letter;
				   letters += letter;
				   break;
			   case 6:
				   this->b6->Text = letter;
				   letters += letter;
				   break;
			   case 7:
				   this->b7->Text = letter;
				   letters += letter;
				   break;
			   case 8:
				   this->b8->Text = letter;
				   letters += letter;
				   break;
			   case 9:
				   this->b9->Text = letter;
				   letters += letter;
				   break;
			   case 10:
				   this->b10->Text = letter;
				   letters += letter;
				   break;
			   case 11:
				   this->b11->Text = letter;
				   letters += letter;
				   break;
			   case 12:
				   this->b12->Text = letter;
				   letters += letter;
				   break;
			   case 13:
				   this->b13->Text = letter;
				   letters += letter;
				   break;
			   case 14:
				   this->b14->Text = letter;
				   letters += letter;
				   break;
			   case 15:
				   this->b15->Text = letter;
				   letters += letter;
				   break;
			   case 16:
				   this->b16->Text = letter;
				   letters += letter;
				   break;
			   default:
				   break;
			   }

		   }
		   int newNum(int num, int l[16]) {
			   int des = 0;
			   int c = sizeof(l) / sizeof(l[0]);
			   for (int i = 0; i <= 16; i++) {
				   if (l[i] == num) { des = 1; }
			   }

			   return des;
		   }
		   int wordlistF(String^ word) {
			   int desi = 0;
			   ifstream file("wordlist.txt");
			   string line;
			   if (file.is_open()) {
				   //message->Text = L"Text file Success!";
				   while (!file.eof()) {
					   getline(file, line);
					   String^ currWord = marshal_as<String^>(line);
					   if (word == currWord) {
						   desi = 1;
						   return desi;
					   }
				   };
			   }

			   else { message->Text = L"Error opening text file."; };
			   return desi;
		   };
		   void setText(void) {
			   srand(time(NULL));
			   int num;
			   int used[16];
			   int i;

			   for (i = 0; i <= 16; i++) {

				   int random;
				   bool exists;
				   int dec = newNum(random, used);

				   do {
					   //bool exists = std::count(std::begin(used), std::end(used), random) > 0;
					   //for (int k = 0; k < sizeof(used); k++) { if (used[k] == random) {exists = true;} }
					   random = (rand() % 27);
					   dec = newNum(random, used);
				   } while (dec == 1);

				   change(i, random);

				   used[i] = random;
				   //used.push_back(random);
			   }


		   }
		   void keyboard(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			   if (e->KeyChar == '\r') {
				   enterclicked();
			   }
			   else if (e->KeyChar == '\b') {
				   String^ goof;
				   goof = curText->Text;
				   if (goof->Length > 0) {
					   goof = goof->Substring(0, goof->Length - 1);
				   }
				   curText->Text = goof;

			   }
			   else {
				   char key = e->KeyChar;
				   key = toupper(key);
				   int s = allowed(key);

				   if (s == 1) {
					   message->Text = L"Countinue typing";
					   wchar_t l = e->KeyChar;
					   char b = l;
					   string b2 = "";
					   b2 += l;

					   String^ k = marshal_as<String^>(b2)->ToUpper();

					   String^ j = curText->Text;
					   if (j == "Start Typing") {
						   curText->Text = k;
					   }
					   else {
						   curText->Text += k;
					   }


				   }
				   else {
					   message->Text = L"Not in useable list";
				   }
			   }
		   };
		   void enterclicked() {

	
			   changePoints(0, totalPoint);
			   currentGuess = curText->Text;
			   this->curText->Text = "";
			   this->message->Text = "";
			   


			  String^ curG = currentGuess;
			  int bood = 0; 
			  string curguess;
			  curguess = marshal_as<string>(curG);
			  //checker->Text = curG;
			  int bb = hello->length();

			  

			  useed4 = useed3;
			  useed3 = useed2;
			  useed2 = useed1;
			  useed1 = marshal_as<string>(curG);
			  String^ wordGuess = currentGuess->ToUpper();
			  int inDic = wordlistF(wordGuess);
			  if (inDic == 1) {

				  for (int i = 0; i <= bb; i++) {
					  if (hello[i] == curguess) {
						  bood = 1;
					  }
				  }
				  if (bood == 1) {
					  message->Text = L"Already used word.";
				  }

				  else {
					  hello[curword] = curguess;

					  String^ wordGuess = currentGuess->ToUpper();
					  int inDic = wordlistF(wordGuess);
					  if (inDic == 1) {

						  curPoint = wordGuess->Length * 100;
						  message->Text = L"In Dictionarry! Thats + " + curPoint + L" Ponts.";
						  totalPoint += curPoint;
						  changePoints(curPoint, totalPoint);

					  }

					  
					  currentGuess = L"";
				  }

			  

				  currentGuess = L"";
				  curword++;

			  }
			  else { 
				  currentGuess = L""; 
				  this->message->Text = L"Not in Dictionary"; }

			  String^ usedd4 = marshal_as<String^>(useed4);
			  String^ usedd3 = marshal_as<String^>(useed3);
			  String^ usedd2 = marshal_as<String^>(useed2);
			  String^ usedd1 = marshal_as<String^>(useed1);



			  this->used4->Text = usedd4; 
			  this->used3->Text = usedd3;
			  this->used2->Text = usedd2;
			  this->used1->Text = usedd1;


			}
		   int allowed(char lett) {

			   String^ let = letters;

			   string lettered;
			   lettered = marshal_as<std::string>(let);
			   String^ tuff;

			   String^ leb = marshal_as<String^>(lettered);
			   //checker->Text = leb;
			   int trfal = 0;
			   //message->Text = letters;
			   for (int i = 0; i <= lettered.length(); i++) {
				   if (lettered[i] == lett) {
					   trfal = 1;
					   tuff = "lmao";
					   //checker->Text = tuff;
					   return trfal;
				   }
				   else {

					   tuff = "rice";
				   }
			   }
			  // checker->Text = tuff;
			   return trfal;
		   }
		   void changePoints(int curp, int totpoints2) {
			   String^ curP = "";
			   curP += curp;
			   curP += " gained";

			   String^ totalP = "";
			   totalP += totpoints2;
			   totalP += " total Points";
				
			   currentP->Text = curP;
			   totalpoints->Text = totalP;

			}


#pragma endregion


	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		enterclicked();
	}
	private: System::Void b1_Click(System::Object^ sender, System::EventArgs^ e) {
		//select();
		currentGuess += this->b1->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b2_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b2->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b3_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b3->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b4_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b4->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b5_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b5->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b6_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b6->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b7_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b7->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b8_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b8->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b9_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b9->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b10_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b10->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b11_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b11->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b12_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b12->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b13_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b13->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b14_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b14->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b15_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b15->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void b16_Click(System::Object^ sender, System::EventArgs^ e) {
		currentGuess += this->b16->Text;
		this->curText->Text = currentGuess;
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentGuess->Length > 0) {
			currentGuess = currentGuess->Substring(0, currentGuess->Length - 1);
		}
		this->curText->Text = currentGuess;
	}
	private: System::Void MyForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		keyboard(sender, e);
	};
	
};

}


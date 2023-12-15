#pragma once

namespace CalculatorPlus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ equals;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ clearEntry;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ buttonNum;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ currentOperation;

	private: System::Windows::Forms::Button^ buttonClick;
	private: System::Windows::Forms::Button^ btnBackSpace;
	private: System::Windows::Forms::Label^ label1;



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
			this->equals = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->clearEntry = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->buttonNum = (gcnew System::Windows::Forms::Button());
			this->buttonClick = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->currentOperation = (gcnew System::Windows::Forms::Label());
			this->btnBackSpace = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// equals
			// 
			this->equals->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->equals->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->equals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->equals->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equals->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->equals->Location = System::Drawing::Point(178, 384);
			this->equals->Name = L"equals";
			this->equals->Size = System::Drawing::Size(160, 59);
			this->equals->TabIndex = 8;
			this->equals->Text = L"=";
			this->equals->UseVisualStyleBackColor = false;
			this->equals->Click += gcnew System::EventHandler(this, &MyForm::equals_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(261, 319);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(77, 59);
			this->button2->TabIndex = 7;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(261, 254);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(77, 59);
			this->button3->TabIndex = 6;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(261, 189);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(77, 59);
			this->button4->TabIndex = 5;
			this->button4->Text = L"x";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Location = System::Drawing::Point(261, 124);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(77, 59);
			this->button5->TabIndex = 4;
			this->button5->Text = L"÷";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::operatorClick);
			// 
			// clearEntry
			// 
			this->clearEntry->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->clearEntry->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clearEntry->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearEntry->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->clearEntry->Location = System::Drawing::Point(95, 124);
			this->clearEntry->Name = L"clearEntry";
			this->clearEntry->Size = System::Drawing::Size(77, 59);
			this->clearEntry->TabIndex = 2;
			this->clearEntry->Text = L"CE";
			this->clearEntry->UseVisualStyleBackColor = true;
			this->clearEntry->Click += gcnew System::EventHandler(this, &MyForm::clearEntry_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(178, 189);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 59);
			this->button7->TabIndex = 18;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button8
			// 
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(178, 254);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(77, 59);
			this->button8->TabIndex = 15;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button9
			// 
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(178, 319);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(77, 59);
			this->button9->TabIndex = 12;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button11
			// 
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(95, 189);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(77, 59);
			this->button11->TabIndex = 17;
			this->button11->Text = L"8";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button12
			// 
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Location = System::Drawing::Point(95, 254);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(77, 59);
			this->button12->TabIndex = 14;
			this->button12->Text = L"5";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button13
			// 
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Location = System::Drawing::Point(95, 319);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(77, 59);
			this->button13->TabIndex = 11;
			this->button13->Text = L"2";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// clear
			// 
			this->clear->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->clear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->clear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->clear->Location = System::Drawing::Point(12, 124);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(77, 59);
			this->clear->TabIndex = 1;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// button15
			// 
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button15->Location = System::Drawing::Point(12, 189);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(77, 59);
			this->button15->TabIndex = 16;
			this->button15->Text = L"7";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button16
			// 
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button16->Location = System::Drawing::Point(12, 254);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(77, 59);
			this->button16->TabIndex = 13;
			this->button16->Text = L"4";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button17->Location = System::Drawing::Point(12, 319);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(77, 59);
			this->button17->TabIndex = 10;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum
			// 
			this->buttonNum->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->buttonNum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonNum->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonNum->Location = System::Drawing::Point(12, 384);
			this->buttonNum->Name = L"buttonNum";
			this->buttonNum->Size = System::Drawing::Size(77, 59);
			this->buttonNum->TabIndex = 9;
			this->buttonNum->Text = L"0";
			this->buttonNum->UseVisualStyleBackColor = true;
			this->buttonNum->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonClick
			// 
			this->buttonClick->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->buttonClick->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClick->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClick->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonClick->Location = System::Drawing::Point(95, 384);
			this->buttonClick->Name = L"buttonClick";
			this->buttonClick->Size = System::Drawing::Size(77, 59);
			this->buttonClick->TabIndex = 19;
			this->buttonClick->Text = L".";
			this->buttonClick->UseVisualStyleBackColor = true;
			this->buttonClick->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox1->Location = System::Drawing::Point(11, 52);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(326, 66);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// currentOperation
			// 
			this->currentOperation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->currentOperation->AutoSize = true;
			this->currentOperation->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentOperation->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->currentOperation->Location = System::Drawing::Point(12, 25);
			this->currentOperation->Name = L"currentOperation";
			this->currentOperation->Size = System::Drawing::Size(0, 24);
			this->currentOperation->TabIndex = 20;
			// 
			// btnBackSpace
			// 
			this->btnBackSpace->FlatAppearance->BorderColor = System::Drawing::Color::DimGray;
			this->btnBackSpace->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackSpace->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBackSpace->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnBackSpace->Location = System::Drawing::Point(178, 124);
			this->btnBackSpace->Name = L"btnBackSpace";
			this->btnBackSpace->Size = System::Drawing::Size(77, 59);
			this->btnBackSpace->TabIndex = 3;
			this->btnBackSpace->Text = L"⌫";
			this->btnBackSpace->UseVisualStyleBackColor = true;
			this->btnBackSpace->Click += gcnew System::EventHandler(this, &MyForm::btnBackSpace_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(289, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"About";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(349, 453);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnBackSpace);
			this->Controls->Add(this->currentOperation);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->buttonNum);
			this->Controls->Add(this->buttonClick);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->clearEntry);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->equals);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CalculatorPlus";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Double result = 0;
		String^ operation = String::Empty;
		String^ firstNumber;String^ secondNumber;
		bool enterValue = false;

private: System::Void buttonNum_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text == "0" || enterValue)
	{
		textBox1->Text = String::Empty;
	}
	enterValue = false;
	Button^ button = (Button^)sender;
	if (button->Text == ".")
	{
		if (!textBox1->Text->Contains("."))
		{
			textBox1->Text = textBox1->Text + button->Text;
		}
	}
	else
	{
		textBox1->Text = textBox1->Text + button->Text;
	}
}

private: System::Void operatorClick(System::Object^ sender, System::EventArgs^ e) {
	
	if (result != 0)
	{
		equals->PerformClick();
	}
	else
	{
		result = Double::Parse(textBox1->Text);
	}
	Button^ button = (Button^)sender;
		operation = button->Text;
		enterValue = true;

	if (textBox1->Text != "0")
	{
		currentOperation->Text = firstNumber + " " + result + " " + operation;
		textBox1->Text = String::Empty;
	}
}

private: System::Void clearEntry_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}

private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
	currentOperation->Text = String::Empty;
	result = 0;
}

private: System::Void equals_Click(System::Object^ sender, System::EventArgs^ e) {
	secondNumber = textBox1->Text;
	currentOperation->Text = currentOperation->Text + " " + textBox1->Text + " = ";
	if (textBox1->Text != String::Empty)
	{
		if (operation == "+") {
			textBox1->Text = (result + Double::Parse(textBox1->Text)).ToString();
		}
		else if (operation == "-")
		{
			textBox1->Text = (result - Double::Parse(textBox1->Text)).ToString();
		}
		else if (operation == "x")
		{
			textBox1->Text = (result * Double::Parse(textBox1->Text)).ToString();
		}
		else if(operation=="÷")
		{
			textBox1->Text = (result / Double::Parse(textBox1->Text)).ToString();
		}
		else
		{
			currentOperation->Text = textBox1->Text + " = ";
		}
		result = Double::Parse(textBox1->Text);
		operation = String::Empty;
	}

}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void btnBackSpace_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->TextLength - 1, 1);
	}
	if (textBox1->Text == String::Empty)
	{
		textBox1->Text = "0";
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Developed By Ashish Shrestha\n© Calculator Plus 2023", "About Calculator Plus", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}

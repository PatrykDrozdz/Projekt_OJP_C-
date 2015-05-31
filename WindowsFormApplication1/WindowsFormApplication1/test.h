#include<math.h>

#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
		{
			InitializeComponent();
			
		}

	protected:
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  pytanie1;
	private: System::Windows::Forms::GroupBox^  pytanie3;
	private: System::Windows::Forms::GroupBox^  pytanie5;
	private: System::Windows::Forms::GroupBox^  pytanie2;


	private: System::Windows::Forms::GroupBox^  pytanie4;
	private: System::Windows::Forms::GroupBox^  pytanie6;



	private: System::Windows::Forms::Button^  liczenie;
	private: System::Windows::Forms::RadioButton^  p15;
	private: System::Windows::Forms::RadioButton^  p14;
	private: System::Windows::Forms::RadioButton^  p13;
	private: System::Windows::Forms::RadioButton^  p12;
	private: System::Windows::Forms::RadioButton^  p11;
	private: System::Windows::Forms::RadioButton^  p35;
	private: System::Windows::Forms::RadioButton^  p34;
	private: System::Windows::Forms::RadioButton^  p33;
	private: System::Windows::Forms::RadioButton^  p32;
	private: System::Windows::Forms::RadioButton^  p31;
	private: System::Windows::Forms::RadioButton^  p55;

	private: System::Windows::Forms::RadioButton^  p51;
	private: System::Windows::Forms::RadioButton^  p54;


	private: System::Windows::Forms::RadioButton^  p52;
	private: System::Windows::Forms::RadioButton^  p53;


	private: System::Windows::Forms::RadioButton^  p25;
	private: System::Windows::Forms::RadioButton^  p24;
	private: System::Windows::Forms::RadioButton^  p23;
	private: System::Windows::Forms::RadioButton^  p22;
	private: System::Windows::Forms::RadioButton^  p21;
	private: System::Windows::Forms::RadioButton^  p45;

	private: System::Windows::Forms::RadioButton^  p44;
	private: System::Windows::Forms::RadioButton^  p43;


	private: System::Windows::Forms::RadioButton^  p42;
	private: System::Windows::Forms::RadioButton^  p41;
	private: System::Windows::Forms::RadioButton^  p65;

	private: System::Windows::Forms::RadioButton^  p64;

	private: System::Windows::Forms::RadioButton^  p63;

	private: System::Windows::Forms::RadioButton^  p62;

	private: System::Windows::Forms::RadioButton^  p61;
	private: System::Windows::Forms::Label^  opis_rasy;


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
			this->pytanie1 = (gcnew System::Windows::Forms::GroupBox());
			this->p15 = (gcnew System::Windows::Forms::RadioButton());
			this->p14 = (gcnew System::Windows::Forms::RadioButton());
			this->p13 = (gcnew System::Windows::Forms::RadioButton());
			this->p12 = (gcnew System::Windows::Forms::RadioButton());
			this->p11 = (gcnew System::Windows::Forms::RadioButton());
			this->pytanie3 = (gcnew System::Windows::Forms::GroupBox());
			this->p35 = (gcnew System::Windows::Forms::RadioButton());
			this->p34 = (gcnew System::Windows::Forms::RadioButton());
			this->p33 = (gcnew System::Windows::Forms::RadioButton());
			this->p32 = (gcnew System::Windows::Forms::RadioButton());
			this->p31 = (gcnew System::Windows::Forms::RadioButton());
			this->pytanie5 = (gcnew System::Windows::Forms::GroupBox());
			this->p55 = (gcnew System::Windows::Forms::RadioButton());
			this->p51 = (gcnew System::Windows::Forms::RadioButton());
			this->p54 = (gcnew System::Windows::Forms::RadioButton());
			this->p52 = (gcnew System::Windows::Forms::RadioButton());
			this->p53 = (gcnew System::Windows::Forms::RadioButton());
			this->pytanie2 = (gcnew System::Windows::Forms::GroupBox());
			this->p25 = (gcnew System::Windows::Forms::RadioButton());
			this->p24 = (gcnew System::Windows::Forms::RadioButton());
			this->p23 = (gcnew System::Windows::Forms::RadioButton());
			this->p22 = (gcnew System::Windows::Forms::RadioButton());
			this->p21 = (gcnew System::Windows::Forms::RadioButton());
			this->pytanie4 = (gcnew System::Windows::Forms::GroupBox());
			this->p45 = (gcnew System::Windows::Forms::RadioButton());
			this->p44 = (gcnew System::Windows::Forms::RadioButton());
			this->p43 = (gcnew System::Windows::Forms::RadioButton());
			this->p42 = (gcnew System::Windows::Forms::RadioButton());
			this->p41 = (gcnew System::Windows::Forms::RadioButton());
			this->pytanie6 = (gcnew System::Windows::Forms::GroupBox());
			this->p65 = (gcnew System::Windows::Forms::RadioButton());
			this->p64 = (gcnew System::Windows::Forms::RadioButton());
			this->p63 = (gcnew System::Windows::Forms::RadioButton());
			this->p62 = (gcnew System::Windows::Forms::RadioButton());
			this->p61 = (gcnew System::Windows::Forms::RadioButton());
			this->liczenie = (gcnew System::Windows::Forms::Button());
			this->opis_rasy = (gcnew System::Windows::Forms::Label());
			this->pytanie1->SuspendLayout();
			this->pytanie3->SuspendLayout();
			this->pytanie5->SuspendLayout();
			this->pytanie2->SuspendLayout();
			this->pytanie4->SuspendLayout();
			this->pytanie6->SuspendLayout();
			this->SuspendLayout();
			// 
			// pytanie1
			// 
			this->pytanie1->Controls->Add(this->p15);
			this->pytanie1->Controls->Add(this->p14);
			this->pytanie1->Controls->Add(this->p13);
			this->pytanie1->Controls->Add(this->p12);
			this->pytanie1->Controls->Add(this->p11);
			this->pytanie1->Location = System::Drawing::Point(62, 33);
			this->pytanie1->Name = L"pytanie1";
			this->pytanie1->Size = System::Drawing::Size(200, 100);
			this->pytanie1->TabIndex = 0;
			this->pytanie1->TabStop = false;
			this->pytanie1->Text = L"Czy chcesz mieæ psa aktywnego\?";
			// 
			// p15
			// 
			this->p15->AutoSize = true;
			this->p15->Location = System::Drawing::Point(56, 60);
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(31, 17);
			this->p15->TabIndex = 4;
			this->p15->Text = L"5";
			this->p15->UseVisualStyleBackColor = true;
			this->p15->CheckedChanged += gcnew System::EventHandler(this, &Test::p15_CheckedChanged);
			// 
			// p14
			// 
			this->p14->AutoSize = true;
			this->p14->Location = System::Drawing::Point(19, 60);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(31, 17);
			this->p14->TabIndex = 3;
			this->p14->Text = L"4";
			this->p14->UseVisualStyleBackColor = true;
			this->p14->CheckedChanged += gcnew System::EventHandler(this, &Test::p14_CheckedChanged);
			// 
			// p13
			// 
			this->p13->AutoSize = true;
			this->p13->Location = System::Drawing::Point(93, 37);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(31, 17);
			this->p13->TabIndex = 2;
			this->p13->Text = L"3";
			this->p13->UseVisualStyleBackColor = true;
			this->p13->CheckedChanged += gcnew System::EventHandler(this, &Test::p13_CheckedChanged);
			// 
			// p12
			// 
			this->p12->AutoSize = true;
			this->p12->Location = System::Drawing::Point(56, 37);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(31, 17);
			this->p12->TabIndex = 1;
			this->p12->Text = L"2";
			this->p12->UseVisualStyleBackColor = true;
			this->p12->CheckedChanged += gcnew System::EventHandler(this, &Test::p12_CheckedChanged);
			// 
			// p11
			// 
			this->p11->AutoSize = true;
			this->p11->Location = System::Drawing::Point(19, 37);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(31, 17);
			this->p11->TabIndex = 0;
			this->p11->Text = L"1";
			this->p11->UseVisualStyleBackColor = true;
			this->p11->CheckedChanged += gcnew System::EventHandler(this, &Test::p11_CheckedChanged);
			// 
			// pytanie3
			// 
			this->pytanie3->Controls->Add(this->p35);
			this->pytanie3->Controls->Add(this->p34);
			this->pytanie3->Controls->Add(this->p33);
			this->pytanie3->Controls->Add(this->p32);
			this->pytanie3->Controls->Add(this->p31);
			this->pytanie3->Location = System::Drawing::Point(62, 162);
			this->pytanie3->Name = L"pytanie3";
			this->pytanie3->Size = System::Drawing::Size(200, 100);
			this->pytanie3->TabIndex = 1;
			this->pytanie3->TabStop = false;
			this->pytanie3->Text = L"Czy chcesz mieæ psa obronnego\?";
			// 
			// p35
			// 
			this->p35->AutoSize = true;
			this->p35->Location = System::Drawing::Point(85, 53);
			this->p35->Name = L"p35";
			this->p35->Size = System::Drawing::Size(31, 17);
			this->p35->TabIndex = 9;
			this->p35->Text = L"5";
			this->p35->UseVisualStyleBackColor = true;
			this->p35->CheckedChanged += gcnew System::EventHandler(this, &Test::p35_CheckedChanged);
			// 
			// p34
			// 
			this->p34->AutoSize = true;
			this->p34->Location = System::Drawing::Point(48, 53);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(31, 17);
			this->p34->TabIndex = 8;
			this->p34->Text = L"4";
			this->p34->UseVisualStyleBackColor = true;
			this->p34->CheckedChanged += gcnew System::EventHandler(this, &Test::p34_CheckedChanged);
			// 
			// p33
			// 
			this->p33->AutoSize = true;
			this->p33->Location = System::Drawing::Point(122, 30);
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(31, 17);
			this->p33->TabIndex = 7;
			this->p33->Text = L"3";
			this->p33->UseVisualStyleBackColor = true;
			this->p33->CheckedChanged += gcnew System::EventHandler(this, &Test::p33_CheckedChanged);
			// 
			// p32
			// 
			this->p32->AutoSize = true;
			this->p32->Location = System::Drawing::Point(85, 30);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(31, 17);
			this->p32->TabIndex = 6;
			this->p32->Text = L"2";
			this->p32->UseVisualStyleBackColor = true;
			this->p32->CheckedChanged += gcnew System::EventHandler(this, &Test::p32_CheckedChanged);
			// 
			// p31
			// 
			this->p31->AutoSize = true;
			this->p31->Location = System::Drawing::Point(48, 30);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(31, 17);
			this->p31->TabIndex = 5;
			this->p31->Text = L"1";
			this->p31->UseVisualStyleBackColor = true;
			this->p31->CheckedChanged += gcnew System::EventHandler(this, &Test::p31_CheckedChanged);
			// 
			// pytanie5
			// 
			this->pytanie5->Controls->Add(this->p55);
			this->pytanie5->Controls->Add(this->p51);
			this->pytanie5->Controls->Add(this->p54);
			this->pytanie5->Controls->Add(this->p52);
			this->pytanie5->Controls->Add(this->p53);
			this->pytanie5->Location = System::Drawing::Point(62, 291);
			this->pytanie5->Name = L"pytanie5";
			this->pytanie5->Size = System::Drawing::Size(200, 100);
			this->pytanie5->TabIndex = 1;
			this->pytanie5->TabStop = false;
			this->pytanie5->Text = L"Czy ma on siê daæ ³atwo tresowaæ\?";
			// 
			// p55
			// 
			this->p55->AutoSize = true;
			this->p55->Location = System::Drawing::Point(85, 59);
			this->p55->Name = L"p55";
			this->p55->Size = System::Drawing::Size(31, 17);
			this->p55->TabIndex = 14;
			this->p55->Text = L"5";
			this->p55->UseVisualStyleBackColor = true;
			this->p55->CheckedChanged += gcnew System::EventHandler(this, &Test::p55_CheckedChanged);
			// 
			// p51
			// 
			this->p51->AutoSize = true;
			this->p51->Location = System::Drawing::Point(48, 36);
			this->p51->Name = L"p51";
			this->p51->Size = System::Drawing::Size(31, 17);
			this->p51->TabIndex = 10;
			this->p51->Text = L"1";
			this->p51->UseVisualStyleBackColor = true;
			this->p51->CheckedChanged += gcnew System::EventHandler(this, &Test::p51_CheckedChanged);
			// 
			// p54
			// 
			this->p54->AutoSize = true;
			this->p54->Location = System::Drawing::Point(48, 59);
			this->p54->Name = L"p54";
			this->p54->Size = System::Drawing::Size(31, 17);
			this->p54->TabIndex = 13;
			this->p54->Text = L"4";
			this->p54->UseVisualStyleBackColor = true;
			this->p54->CheckedChanged += gcnew System::EventHandler(this, &Test::p54_CheckedChanged);
			// 
			// p52
			// 
			this->p52->AutoSize = true;
			this->p52->Location = System::Drawing::Point(85, 36);
			this->p52->Name = L"p52";
			this->p52->Size = System::Drawing::Size(31, 17);
			this->p52->TabIndex = 11;
			this->p52->Text = L"2";
			this->p52->UseVisualStyleBackColor = true;
			this->p52->CheckedChanged += gcnew System::EventHandler(this, &Test::p52_CheckedChanged);
			// 
			// p53
			// 
			this->p53->AutoSize = true;
			this->p53->Location = System::Drawing::Point(122, 36);
			this->p53->Name = L"p53";
			this->p53->Size = System::Drawing::Size(31, 17);
			this->p53->TabIndex = 12;
			this->p53->Text = L"3";
			this->p53->UseVisualStyleBackColor = true;
			this->p53->CheckedChanged += gcnew System::EventHandler(this, &Test::p53_CheckedChanged);
			// 
			// pytanie2
			// 
			this->pytanie2->Controls->Add(this->p25);
			this->pytanie2->Controls->Add(this->p24);
			this->pytanie2->Controls->Add(this->p23);
			this->pytanie2->Controls->Add(this->p22);
			this->pytanie2->Controls->Add(this->p21);
			this->pytanie2->Location = System::Drawing::Point(416, 33);
			this->pytanie2->Name = L"pytanie2";
			this->pytanie2->Size = System::Drawing::Size(200, 100);
			this->pytanie2->TabIndex = 1;
			this->pytanie2->TabStop = false;
			this->pytanie2->Text = L"Potrzebujesz dobrego stró¿a\?";
			// 
			// p25
			// 
			this->p25->AutoSize = true;
			this->p25->Location = System::Drawing::Point(85, 53);
			this->p25->Name = L"p25";
			this->p25->Size = System::Drawing::Size(31, 17);
			this->p25->TabIndex = 9;
			this->p25->Text = L"5";
			this->p25->UseVisualStyleBackColor = true;
			this->p25->CheckedChanged += gcnew System::EventHandler(this, &Test::p25_CheckedChanged);
			// 
			// p24
			// 
			this->p24->AutoSize = true;
			this->p24->Location = System::Drawing::Point(48, 53);
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(31, 17);
			this->p24->TabIndex = 8;
			this->p24->Text = L"4";
			this->p24->UseVisualStyleBackColor = true;
			this->p24->CheckedChanged += gcnew System::EventHandler(this, &Test::p24_CheckedChanged);
			// 
			// p23
			// 
			this->p23->AutoSize = true;
			this->p23->Location = System::Drawing::Point(122, 30);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(31, 17);
			this->p23->TabIndex = 7;
			this->p23->Text = L"3";
			this->p23->UseVisualStyleBackColor = true;
			this->p23->CheckedChanged += gcnew System::EventHandler(this, &Test::p23_CheckedChanged);
			// 
			// p22
			// 
			this->p22->AutoSize = true;
			this->p22->Location = System::Drawing::Point(85, 30);
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(31, 17);
			this->p22->TabIndex = 6;
			this->p22->Text = L"2";
			this->p22->UseVisualStyleBackColor = true;
			this->p22->CheckedChanged += gcnew System::EventHandler(this, &Test::p22_CheckedChanged);
			// 
			// p21
			// 
			this->p21->AutoSize = true;
			this->p21->Location = System::Drawing::Point(48, 30);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(31, 17);
			this->p21->TabIndex = 5;
			this->p21->Text = L"1";
			this->p21->UseVisualStyleBackColor = true;
			this->p21->CheckedChanged += gcnew System::EventHandler(this, &Test::p21_CheckedChanged);
			// 
			// pytanie4
			// 
			this->pytanie4->Controls->Add(this->p45);
			this->pytanie4->Controls->Add(this->p44);
			this->pytanie4->Controls->Add(this->p43);
			this->pytanie4->Controls->Add(this->p42);
			this->pytanie4->Controls->Add(this->p41);
			this->pytanie4->Location = System::Drawing::Point(416, 162);
			this->pytanie4->Name = L"pytanie4";
			this->pytanie4->Size = System::Drawing::Size(200, 100);
			this->pytanie4->TabIndex = 1;
			this->pytanie4->TabStop = false;
			this->pytanie4->Text = L"Czy chcesz mieæ psa inteligentnego";
			// 
			// p45
			// 
			this->p45->AutoSize = true;
			this->p45->Location = System::Drawing::Point(85, 53);
			this->p45->Name = L"p45";
			this->p45->Size = System::Drawing::Size(31, 17);
			this->p45->TabIndex = 9;
			this->p45->Text = L"5";
			this->p45->UseVisualStyleBackColor = true;
			this->p45->CheckedChanged += gcnew System::EventHandler(this, &Test::p45_CheckedChanged);
			// 
			// p44
			// 
			this->p44->AutoSize = true;
			this->p44->Location = System::Drawing::Point(48, 53);
			this->p44->Name = L"p44";
			this->p44->Size = System::Drawing::Size(31, 17);
			this->p44->TabIndex = 8;
			this->p44->Text = L"4";
			this->p44->UseVisualStyleBackColor = true;
			this->p44->CheckedChanged += gcnew System::EventHandler(this, &Test::p44_CheckedChanged);
			// 
			// p43
			// 
			this->p43->AutoSize = true;
			this->p43->Location = System::Drawing::Point(122, 30);
			this->p43->Name = L"p43";
			this->p43->Size = System::Drawing::Size(31, 17);
			this->p43->TabIndex = 7;
			this->p43->Text = L"3";
			this->p43->UseVisualStyleBackColor = true;
			this->p43->CheckedChanged += gcnew System::EventHandler(this, &Test::p43_CheckedChanged);
			// 
			// p42
			// 
			this->p42->AutoSize = true;
			this->p42->Location = System::Drawing::Point(85, 30);
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(31, 17);
			this->p42->TabIndex = 6;
			this->p42->Text = L"2";
			this->p42->UseVisualStyleBackColor = true;
			this->p42->CheckedChanged += gcnew System::EventHandler(this, &Test::p42_CheckedChanged);
			// 
			// p41
			// 
			this->p41->AutoSize = true;
			this->p41->Location = System::Drawing::Point(48, 30);
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(31, 17);
			this->p41->TabIndex = 5;
			this->p41->Text = L"1";
			this->p41->UseVisualStyleBackColor = true;
			this->p41->CheckedChanged += gcnew System::EventHandler(this, &Test::p41_CheckedChanged);
			// 
			// pytanie6
			// 
			this->pytanie6->Controls->Add(this->p65);
			this->pytanie6->Controls->Add(this->p64);
			this->pytanie6->Controls->Add(this->p63);
			this->pytanie6->Controls->Add(this->p62);
			this->pytanie6->Controls->Add(this->p61);
			this->pytanie6->Location = System::Drawing::Point(416, 291);
			this->pytanie6->Name = L"pytanie6";
			this->pytanie6->Size = System::Drawing::Size(200, 100);
			this->pytanie6->TabIndex = 1;
			this->pytanie6->TabStop = false;
			this->pytanie6->Text = L"Czy zapewnisz mu potrzeby socjalne\?";
			// 
			// p65
			// 
			this->p65->AutoSize = true;
			this->p65->Location = System::Drawing::Point(85, 53);
			this->p65->Name = L"p65";
			this->p65->Size = System::Drawing::Size(31, 17);
			this->p65->TabIndex = 9;
			this->p65->Text = L"5";
			this->p65->UseVisualStyleBackColor = true;
			this->p65->CheckedChanged += gcnew System::EventHandler(this, &Test::p65_CheckedChanged);
			// 
			// p64
			// 
			this->p64->AutoSize = true;
			this->p64->Location = System::Drawing::Point(48, 53);
			this->p64->Name = L"p64";
			this->p64->Size = System::Drawing::Size(31, 17);
			this->p64->TabIndex = 8;
			this->p64->Text = L"4";
			this->p64->UseVisualStyleBackColor = true;
			this->p64->CheckedChanged += gcnew System::EventHandler(this, &Test::p64_CheckedChanged);
			// 
			// p63
			// 
			this->p63->AutoSize = true;
			this->p63->Location = System::Drawing::Point(122, 30);
			this->p63->Name = L"p63";
			this->p63->Size = System::Drawing::Size(31, 17);
			this->p63->TabIndex = 7;
			this->p63->Text = L"3";
			this->p63->UseVisualStyleBackColor = true;
			this->p63->CheckedChanged += gcnew System::EventHandler(this, &Test::p63_CheckedChanged);
			// 
			// p62
			// 
			this->p62->AutoSize = true;
			this->p62->Location = System::Drawing::Point(85, 30);
			this->p62->Name = L"p62";
			this->p62->Size = System::Drawing::Size(31, 17);
			this->p62->TabIndex = 6;
			this->p62->Text = L"2";
			this->p62->UseVisualStyleBackColor = true;
			this->p62->CheckedChanged += gcnew System::EventHandler(this, &Test::p62_CheckedChanged);
			// 
			// p61
			// 
			this->p61->AutoSize = true;
			this->p61->Location = System::Drawing::Point(48, 30);
			this->p61->Name = L"p61";
			this->p61->Size = System::Drawing::Size(31, 17);
			this->p61->TabIndex = 5;
			this->p61->Text = L"1";
			this->p61->UseVisualStyleBackColor = true;
			this->p61->CheckedChanged += gcnew System::EventHandler(this, &Test::p61_CheckedChanged);
			// 
			// liczenie
			// 
			this->liczenie->Location = System::Drawing::Point(235, 422);
			this->liczenie->Name = L"liczenie";
			this->liczenie->Size = System::Drawing::Size(253, 107);
			this->liczenie->TabIndex = 2;
			this->liczenie->Text = L"Przelicz";
			this->liczenie->UseVisualStyleBackColor = true;
			this->liczenie->Click += gcnew System::EventHandler(this, &Test::liczenie_Click);
			// 
			// opis_rasy
			// 
			this->opis_rasy->AutoSize = true;
			this->opis_rasy->Location = System::Drawing::Point(33, 23);
			this->opis_rasy->Name = L"opis_rasy";
			this->opis_rasy->Size = System::Drawing::Size(0, 13);
			this->opis_rasy->TabIndex = 3;
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 570);
			this->Controls->Add(this->opis_rasy);
			this->Controls->Add(this->liczenie);
			this->Controls->Add(this->pytanie6);
			this->Controls->Add(this->pytanie4);
			this->Controls->Add(this->pytanie2);
			this->Controls->Add(this->pytanie5);
			this->Controls->Add(this->pytanie3);
			this->Controls->Add(this->pytanie1);
			this->MaximizeBox = false;
			this->Name = L"Test";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Test";
			this->pytanie1->ResumeLayout(false);
			this->pytanie1->PerformLayout();
			this->pytanie3->ResumeLayout(false);
			this->pytanie3->PerformLayout();
			this->pytanie5->ResumeLayout(false);
			this->pytanie5->PerformLayout();
			this->pytanie2->ResumeLayout(false);
			this->pytanie2->PerformLayout();
			this->pytanie4->ResumeLayout(false);
			this->pytanie4->PerformLayout();
			this->pytanie6->ResumeLayout(false);
			this->pytanie6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	

#pragma endregion

		//zmienne wykorzystywane do obliczeñ
		//cz³owiek
		System::Double  hact, hwatch, hguard, hintel, htrain, hsoc;


//ustawianie aktywnosci
private: System::Void p11_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hact = 1;
}
private: System::Void p12_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hact = 2;
}
private: System::Void p13_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hact = 3;
}
private: System::Void p14_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hact = 4;
}
private: System::Void p15_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hact = 5;
}


//ustawianie strozowania
private: System::Void p21_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hwatch = 1;
}
private: System::Void p22_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hwatch = 2;
}
private: System::Void p23_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hwatch = 3;
}
private: System::Void p24_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hwatch = 4;
}
private: System::Void p25_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hwatch = 5;
}



//ustawienie obrony
private: System::Void p31_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hguard = 1;
}
private: System::Void p32_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hguard = 2;
}
private: System::Void p33_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hguard = 3;
}
private: System::Void p34_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hguard = 4;
}
private: System::Void p35_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hguard = 5;
}




//ustawienie inteligencji
private: System::Void p41_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hintel = 1;
}
private: System::Void p42_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hintel = 2;
}
private: System::Void p43_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hintel = 3;
}
private: System::Void p44_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hintel = 4;
}
private: System::Void p45_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hintel = 5;
}




//ustawienie tresowalnoœci
private: System::Void p51_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 htrain = 1;
}
private: System::Void p52_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 htrain = 2;
}
private: System::Void p53_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 htrain = 3;
}
private: System::Void p54_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 htrain = 4;
}
private: System::Void p55_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 htrain = 5;
}





//ustawienie potrzeb socjalnych
private: System::Void p61_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hsoc = 1;
}
private: System::Void p62_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hsoc = 2;
}
private: System::Void p63_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hsoc = 3;
}
private: System::Void p64_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hsoc = 4;
}
private: System::Void p65_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 hsoc = 5;
}


//liczenie
	private: System::Void liczenie_Click(System::Object^  sender, System::EventArgs^  e) {



				 //labrador
				 System::Double lab_activity = 4;
				 System::Double  lab_watch = 3;
				 System::Double  lab_guard = 3;
				 System::Double  lab_intelligance = 5;
				 System::Double  lab_trainability = 5;
				 System::Double  lab_social_needs = 5;
				 System::Double  lab;

				 //mops
				 System::Double  pug_activity = 1;
				 System::Double  pug_watch = 2;
				 System::Double  pug_guard = 1;
				 System::Double  pug_intelligance = 3;
				 System::Double  pug_trainability = 2;
				 System::Double  pug_social_needs = 4;
				 System::Double pug;

				 //owczarek niemiecki
				 System::Double  german_activity = 4;
				 System::Double  german_watch = 5;
				 System::Double  german_guard = 4;
				 System::Double  german_intelligance = 5;
				 System::Double  german_trainability = 5;
				 System::Double  german_social_needs = 5;
				 System::Double	 german;

				 //owczarek œrodkowoazjatycki
				 System::Double  azjata_activity = 2;
				 System::Double  azjata_watch = 3;
				 System::Double  azjata_guard = 5;
				 System::Double  azjata_intelligance = 5;
				 System::Double  azjata_trainability = 2;
				 System::Double  azjata_social_needs = 4;
				 System::Double	 azjata;

				 //owczarek kaukazki
				 System::Double  kaukaz_activity = 2;
				 System::Double  kaukaz_watch = 5;
				 System::Double  kaukaz_guard = 5;
				 System::Double  kaukaz_intelligance = 5;
				 System::Double  kaukaz_trainability = 2;
				 System::Double  kaukaz_social_needs = 3;
				 System::Double	 kaukaz;

				 //bulterier
				 System::Double  bulterier_activity = 5;
				 System::Double  bulterier_watch = 3;
				 System::Double  bulterier_guard = 3;
				 System::Double  bulterier_intelligance = 5;
				 System::Double  bulterier_trainability = 2;
				 System::Double  bulterier_social_needs = 4;
				 System::Double	 bulterier;

				 //rottweiler
				 System::Double  rot_activity = 5;
				 System::Double  rot_watch = 4;
				 System::Double  rot_guard = 5;
				 System::Double  rot_intelligance = 5;
				 System::Double  rot_trainability = 3;
				 System::Double  rot_social_needs = 4;
				 System::Double	 rot;

				 //Golden Retriever
				 System::Double  golden_activity = 3;
				 System::Double  golden_watch = 1;
				 System::Double  golden_guard = 1;
				 System::Double  golden_intelligance = 5;
				 System::Double  golden_trainability = 5;
				 System::Double  golden_social_needs = 5;
				 System::Double	 golden;
				 ///dzisiaj dodane
				 //Border Collie
				 System::Double  bcoli_activity = 5;
				 System::Double  bcoli_watch = 2;
				 System::Double  bcoli_guard = 1;
				 System::Double  bcoli_intelligance = 5;
				 System::Double  bcoli_trainability = 5;
				 System::Double  bcoli_social_needs = 4;
				 System::Double	 bcoli;

				 //York
				 System::Double  york_activity = 5;
				 System::Double  york_watch = 3;
				 System::Double  york_guard = 3;
				 System::Double  york_intelligance = 3;
				 System::Double  york_trainability = 3;
				 System::Double  york_social_needs = 3;
				 System::Double	 york;

				 //Buldog Francuski
				 System::Double  bulf_activity = 3;
				 System::Double  bulf_watch = 3;
				 System::Double  bulf_guard = 3;
				 System::Double  bulf_intelligance = 3;
				 System::Double  bulf_trainability = 3;
				 System::Double  bulf_social_needs = 4;
				 System::Double	 bulf;

				 //beagle
				 System::Double  beagle_activity = 5;
				 System::Double  beagle_watch = 3;
				 System::Double  beagle_guard = 2;
				 System::Double  beagle_intelligance = 2;
				 System::Double  beagle_trainability = 1;
				 System::Double  beagle_social_needs = 4;
				 System::Double	 beagle;


				 lab = 100 - ((abs(lab_activity - hact) + abs(lab_guard - hguard) + abs(lab_watch - hwatch) + abs(lab_intelligance - hintel) + abs(lab_trainability - htrain) + abs(lab_social_needs - hsoc)) / 6) * 100;
				 pug = 100 - ((abs(pug_activity - hact) + abs(pug_guard - hguard) + abs(pug_watch - hwatch) + abs(pug_intelligance - hintel) + abs(pug_trainability - htrain) + abs(pug_social_needs - hsoc)) / 6) * 100;
				 german = 100 - ((abs(german_activity - hact) + abs(german_guard - hguard) + abs(german_watch - hwatch) + abs(german_intelligance - hintel) + abs(german_trainability - htrain) + abs(german_social_needs - hsoc)) / 6) * 100;
				 azjata = 100 - ((abs(azjata_activity - hact) + abs(azjata_guard - hguard) + abs(azjata_watch - hwatch) + abs(azjata_intelligance - hintel) + abs(azjata_trainability - htrain) + abs(azjata_social_needs - hsoc)) / 6) * 100;
				 kaukaz = 100 - ((abs(kaukaz_activity - hact) + abs(kaukaz_guard - hguard) + abs(kaukaz_watch - hwatch) + abs(kaukaz_intelligance - hintel) + abs(kaukaz_trainability - htrain) + abs(kaukaz_social_needs - hsoc)) / 6) * 100;
				 bulterier = 100 - ((abs(bulterier_activity - hact) + abs(bulterier_guard - hguard) + abs(bulterier_watch - hwatch) + abs(bulterier_intelligance - hintel) + abs(bulterier_trainability - htrain) + abs(bulterier_social_needs - hsoc)) / 6) * 100;
				 rot = 100 - ((abs(rot_activity - hact) + abs(rot_guard - hguard) + abs(rot_watch - hwatch) + abs(rot_intelligance - hintel) + abs(rot_trainability - htrain) + abs(rot_social_needs - hsoc)) / 6) * 100;
				 golden = 100 - ((abs(golden_activity - hact) + abs(golden_guard - hguard) + abs(golden_watch - hwatch) + abs(golden_intelligance - hintel) + abs(golden_trainability - htrain) + abs(golden_social_needs - hsoc)) / 6) * 100;
				 bcoli = 100 - ((abs(bcoli_activity - hact) + abs(bcoli_guard - hguard) + abs(bcoli_watch - hwatch) + abs(bcoli_intelligance - hintel) + abs(bcoli_trainability - htrain) + abs(bcoli_social_needs - hsoc)) / 6) * 100;
				 york = 100 - ((abs(york_activity - hact) + abs(york_guard - hguard) + abs(york_watch - hwatch) + abs(york_intelligance - hintel) + abs(york_trainability - htrain) + abs(york_social_needs - hsoc)) / 6) * 100;
				 bulf = 100 - ((abs(bulf_activity - hact) + abs(bulf_guard - hguard) + abs(bulf_watch - hwatch) + abs(bulf_intelligance - hintel) + abs(bulf_trainability - htrain) + abs(bulf_social_needs - hsoc)) / 6) * 100;
				 beagle = 100 - ((abs(beagle_activity - hact) + abs(beagle_guard - hguard) + abs(beagle_watch - hwatch) + abs(beagle_intelligance - hintel) + abs(beagle_trainability - htrain) + abs(beagle_social_needs - hsoc)) / 6) * 100;

				 if (!hact || !hguard || !hwatch || !hintel || !htrain || !hsoc)
				 {
					 System::Windows::Forms::DialogResult info;
					 info = MessageBox::Show("Nie uzupe³ni³eœ wszystkich pól", "", MessageBoxButtons::OK, MessageBoxIcon::Information);

				 }
				 else{
					 //lab
					 if (lab > pug && lab > german && lab > azjata && lab > kaukaz && lab > bulterier && 
						 lab > rot && lab > golden && lab>bcoli && lab>york && lab>bulf && lab>beagle){



						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = lab.ToString();
						 okno->Controls->Add(wynik);

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Labrador retriever\n\nWychodowany na Nowej Funlandii, zwany wczeœniej Psem œw. Jana, przez rybaków do\nwyci¹gania sieci i niejednokrotnie te¿ ludzi. W roku 1870 trafi³ do Europy. Jego nazwa\npochodzi od morza labradorskiego.\nPies ten posiada niezwyk³e weso³e, ³agodne i przyjazne usposobienie. Jest niezwykle\ninteligentny, jako ¿e jest aporterem, uwielbia to zajêcie. Jest œwietnym psem\nrodzinnym, je¿eli zaspokoi siê jego potrzeby pracy oraz towarzyskie, a po odpowiednim\nszkoleniu i ogromnej pracy w³aœciciela mo¿e te¿ byæ dobrym stró¿em i obroñc¹.";

						 //ustawianie kolrów tekstu
						 if (lab <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;

						 }
						 else if (lab > 25 && lab <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (lab >= 51 && lab <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (lab >= 75 && lab <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//pug
					 else if (pug > lab && pug > german && pug > azjata && pug > kaukaz && pug > bulterier && 
						 pug > rot && pug > golden && pug>bcoli && pug>york && pug>bulf && pug>beagle){

						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = pug.ToString();
						 okno->Controls->Add(wynik);
						 ;

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Mops\n\nRasa powsta³a najprawdopodobniej w Chinach ok. 1000 lat temu.\nMopsa mo¿na okreœliæ jako najlepszego, niewymagaj¹cego psa towarzysza, który idealnie\nnadaje siê do miasta. Nie jest on szczególnie aktywny, nie wymaga d³ugich spacerów.\n Jednak ³atwo mo¿e siê dostosowaæ do ¿ycia rodzinnego i mo¿na\ngo zabraæ nie mal wszêdzie. Ot idealny towarzysz ka¿dego cz³owieka:)";

						 //ustawianie kolrów tekstu
						 if (pug <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (pug > 25 && pug <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (pug >= 51 && pug <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (pug >= 75 && pug <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }


						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//german
					 else if (german > lab && german > pug && german > azjata && german > kaukaz && 
						 german > bulterier && german > rot && german > golden && german>bcoli && 
						 german>york && german>bulf && german>beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = german.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Owczarek niemiecki\n\nCzêsto bywa nazywany królem psów. Nic bardziej mylnego. Jest to prawdopodobnie\nnajbardziej wszechstronna ze wszystkich ras. Niestety spora popularnoœæ spowodowa³a\nzniszczenie charakteru tej rasy. Obecnie wiele owczarków to raczej stró¿e ni¿ obronne i\nmog¹ byæ agresywne wobec innych psów. Dlatego wymagaj¹ jak najwczeœniejszej\nsocjalizacji(od wieku 3 o 12 pierwszych tygodni ¿ycia) oraz odpowiedzialnych\nw³aœcicieli, którzy zdo³aj¹ sprostaæ jego wybitnej inteligencji i chêci pracy.\nWtedy mo¿emy powiedzieæ, ¿e mamy zrównowa¿onego owczarka niemieckiego z krwi i\nkoœci.";

						 //ustawianie kolrów tekstu
						 if (german <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (german > 25 && german <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (german >= 51 && german <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (german >= 75 && german <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }



						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//azjata
					 else if (azjata > lab && azjata > pug && azjata > german && azjata > kaukaz && 
						 azjata > bulterier && azjata > rot && azjata > golden && azjata>bcoli && 
						 azjata>york && azjata>bulf && azjata>beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = azjata.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Width = 800;
						 tekst->Location = Point(40, 40);
						 tekst->Text = "Owczarek œrodkowoazjatycki\n\nA³abaj, azjata, wo³kodaw-dusiciel wilków. Jest to jedna z najstarszych ras (istniej¹ca\nok. 4,5 tys. lat),wychodowana w azji œrodkowej do ochrony przed wilkami. Œwietny obroñca\ni niez³y stró¿. Trudny w tresurze, jednak wybitnie inteligentny i doskonale oceniaj¹cy\nka¿de zagro¿enie.\nPodobnie jak Owczarek Kaukaski lubuj¹cy siê w du¿ych, otwartych przestrzeniach.\nNajlepiej siê czuje mieszkaj¹c na dworze(byle nie w kojcu). Wymaga ogromnej\nodpowiedzialnoœci i konsekwencji w wychowaniu oraz socjalizacji";

						 //ustawianie kolrów tekstu
						 if (azjata <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (azjata > 25 && azjata <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (azjata >= 51 && azjata <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (azjata >= 75 && azjata <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }


						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//kaukaz
					 else if (kaukaz > lab && kaukaz > pug && kaukaz > german && kaukaz > azjata && 
						 kaukaz > bulterier && kaukaz > rot && kaukaz > golden && kaukaz>bcoli && 
						 kaukaz>york && kaukaz>bulf && kaukaz>beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = kaukaz.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Width = 800;
						 tekst->Location = Point(40, 40);
						 tekst->Text = "Owczarek kaukaski\n\nBardzo stara rasa psów(znana prawdopodobnie juz od I w p.n.e.).Wychodowana w rejonie\nKaukazu przez paste¿y do ochrony stad owiec i byd³a.\nDzieki temu uzyskaliœmy psa o oryginalnym wygl¹dzie.\nJest to jedne z przedstawicieli tzw.""psów wolnoœci"",\nco wi¹¿e siê z wieloma trudnoœciami w tresurrze, ale za to\nwybitn¹ inteligencj¹ oraz cechami stró¿uj¹co obronnymi.\nTak jak ka¿dy inny ""pies wolnoœci"" Owczarek\n kaukaski najlepiej czuje siê mieszkaj¹c na dworze(byle nie w koicu).";

						 if (kaukaz <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (kaukaz > 25 && kaukaz <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (kaukaz >= 51 && kaukaz <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (kaukaz >= 75 && kaukaz <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }


						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//bullterier
					 else if (bulterier > lab && bulterier > pug && bulterier > german && 
						 bulterier > azjata && bulterier > kaukaz && bulterier > rot && bulterier > golden && 
						 bulterier>bcoli && bulterier>york && bulterier>bulf && bulterier>beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = bulterier.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Width = 800;
						 tekst->Location = Point(40, 40);
						 tekst->Text = "Bullterrier\n\nPotomek angielskich psów bojowych(krzy¿ówki buldoga angielskiego z terierami). Œredniej\nwielkoœci, atletyczny pies. Zrównowa¿ony, ale uparty, barzo aktywny.\nWczeœniej wykorzystywany do walk ze...szczurami,\nobecnie bardzo popularny pies rodzinny. Doskonale sprawdza siê w dyscyplinach\nkynologicznych. Wymaga wczesnej socjalizacji,\ngdy¿ to potomek psów bojowych, a wiêc w przypadku jej braku,\nmo¿e wyst¹piæ agresja wobec innych zwierz¹t";

						 if (bulterier <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bulterier > 25 && bulterier <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bulterier >= 51 && bulterier <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bulterier >= 75 && bulterier <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//rottweiler
					 else if (rot > lab && rot > pug && rot > german && rot > azjata && rot > kaukaz && 
						 rot > bulterier && rot > golden && rot>bcoli && rot>york && 
						 rot>bulf && rot>beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = rot.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Width = 800;
						 tekst->Location = Point(40, 40);
						 tekst->Text = "Rottweiler\n\nZnany juz od czasów stro¿ytnych pies pasterski, który towarzyszy³ Rzymskim legionom.\nObecnie jest to masywny, dogowaty pies obronny. Z natury przywi¹zany do rodzinny, wobec obcych czêœto powœci¹gliwy.\nM¹dy, ale uparty, jednak czêsto zanjduj¹cy pracê w s³u¿bach mundurowych.\n\nPomimo swoich, czêsto, pokaŸnych rozmiarów jest to pies potrzebuj¹cy du¿o ruch oraz\nzadañ umys³owych oraz konsekwentnego prowadzenia.\nPies ten powinien mieæ odpowiedzialnego i konsekwentnego w³aœciciela,który zapewni równie¿ wczesn¹ socjalizacjê.\nW przeciwnym wypadku wyroœnie na psa, który mo¿e zagra¿aæ otoczeniu.";

						 if (rot <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (rot > 25 && rot <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (rot >= 51 && rot <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (rot >= 75 && rot <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(700, 132);
					 }//golden
					 else if (golden > lab && golden > pug && golden > german && golden > azjata && 
						 golden > kaukaz && golden > bulterier && golden > rot && golden>bcoli && 
						 golden>york && golden>bulf && golden > beagle){
						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = golden.ToString();
						 okno->Controls->Add(wynik);


						 okno->Width = 300;
						 okno->Height = 300;
						 tekst->Width = 800;
						 tekst->Location = Point(40, 40);
						 tekst->Text = "Golden Retriever\n\nBliski kuzyn Labradora. Pies wychodowany do aportowania drobnej zwierzyny(ptactwa).\nObecnie jendena z najbardziej popularnych\nras psów rodzinnych. Zyska³ to dziêki swemu ³agodnemu i\nprzyjaznemu nastawieniu do œwiata.\n\nJe¿eli jednak chce sie posiadaæ Goldena nale¿y mu zapewniæ du¿¹ iloœæ\ncodzienngo ruchu oraz zadañ umys³owych.\nWtedy uzyskamy idealnego psa rodzinnego.";

						 if (golden <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (golden > 25 && golden <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (golden >= 51 && golden <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (golden >= 75 && golden <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4)-10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width/2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text=tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);
						 

					 }//Border Collie
					 else if (bcoli > pug && bcoli > german && bcoli > azjata && bcoli  > kaukaz && 
						 bcoli  > bulterier && bcoli  > rot && bcoli > golden && bcoli >lab && bcoli >york && 
						 bcoli >bulf && bcoli>beagle){



						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = bcoli.ToString();
						 okno->Controls->Add(wynik);

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Border Collie\n\nparawdopodobnie najinteligentniejsza rasa psów na œwiecie. Wywodzi siê z rejonu Border,\nna granicy Angli i Szkocji.\nCzêsto s¹ to psy aktywne, wymagaj¹ce wiele uwagi oraz ruchu. Zdecydowanie poleca\nsie jedla rodzin aktywnych lub osób, które chc¹ uczestniczyæ w dyscyplinach\nkynologicznych. W przeciwnym wypadku mog¹ same znaj¹c sobie zajêcie jak np.\nniszczenie, zaganianie i podgryzanie dzieci. Dlatego nale¿y pamiêtaæ, ¿e pracuj¹cy\nBorder to szczêœliwy Border:)";

						 //ustawianie kolrów tekstu
						 if (bcoli <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;

						 }
						 else if (bcoli > 25 && bcoli <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bcoli >= 51 && bcoli <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bcoli >= 75 && bcoli <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//York
					 else if (york > pug && york > german && york > azjata && york > kaukaz && 
						 york  > bulterier && york > rot && york > golden && york >lab && york>bcoli && 
						 york >bulf && york>beagle){



						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = york.ToString();
						 okno->Controls->Add(wynik);

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Yorkshire Terrier\n\nWychodowane w po³owie wieku XIX-go do têpienia myszy i szczurów.\nObecnie jest to jeden z najpopularniejszych psów towarzysz¹cych/rodzinnych.\nS¹ to psy z regu³y przyjazne wobec rodziny, ale nie ufne wobec obcych. Pomimo swoich\nniewielkich rozmiarów nie nale¿y zapominaæ, ¿e to teriery z krwi i koœci, które maj¹ swój\ncharakter i mog¹ chcieæ postawiæ na swoim. Za to ze wzglêdu na swój niewielki rozmiar,\nœwietnie nadaj¹ siê do miasta. Nie nale¿y jednak zapominaæ, ¿e powinnyc chodziæ po ziemi.\nNale¿y je równie¿ wczeœnie socjalizowaæ, gdy¿ ze wzglêdu na rozmiar, mog¹ œwiat i inne\npsy mog¹ wydawaæ siê im niebezpieczne, a to mo¿e prowadziæ do lêku.";

						 //ustawianie kolrów tekstu
						 if (york <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;

						 }
						 else if (york > 25 && york <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (york >= 51 && york <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (york >= 75 && york <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//Buldog francuski
					 else if (bulf > pug && bulf > german && bulf > azjata && bulf > kaukaz && 
						 bulf  > bulterier && bulf> rot && bulf> golden && bulf >lab && 
						 bulf>bcoli &&  bulf>york && bulf>beagle){



						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = bulf.ToString();
						 okno->Controls->Add(wynik);

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Buldog Francuski\n\nFrancuski piesek wywyodz¹cy siê od swojego angielskiego kuzyna. Wychodowany przez\nnajni¿sze warstwy spo³eczne we Francji.\nJest to typowy kanapowiec. Bardzo lubi odpoczywaæ razem z w³aœcicielami na kanapie,\nchoæ czasem potrafi byæ aktywny. Lubi towarzystwo innych zwierz¹t, dobrze u³ozony,\njest tolerancyjny wobec dzieci. W tresurze bywa uparty.\nNiestety ze wzglêdu na swoj¹ krótk¹ kufê, jest nara¿on zarówno na\nprzegrzanie jak i na wyziêbienie.";

						 //ustawianie kolrów tekstu
						 if (bulf <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;

						 }
						 else if (bulf > 25 && bulf<= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bulf >= 51 && bulf <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (bulf >= 75 && bulf <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }
					 //bealgle
					 else if (beagle > pug && beagle > german && beagle > azjata && beagle > kaukaz &&
						 beagle  > bulterier && beagle> rot && beagle> golden && beagle >lab &&
						 beagle>bcoli &&  beagle>york && beagle>bulf){



						 Form^ okno = gcnew Form;
						 Label^ tekst = gcnew Label;

						 Label^ wynik = gcnew Label;


						 wynik->Location = Point((okno->Width / 2) - 50, (okno->Height / 2) - 50);
						 wynik->Text = beagle.ToString();
						 okno->Controls->Add(wynik);

						 okno->Width = 300;
						 okno->Height = 300;

						 tekst->Location = Point(40, 40);
						 tekst->Text = "Beagle\n\nRasa psów goñczych powsta³a w Angli ok. XIV wieku, wywodz¹ca siê prawdopodobnie\nod Harrierów i Terierów\nObecnie jest to jedne z najpopularniejszych psów rodzinnych.\nSta³o siê tag ze wzglêdu na jego przyjazny charakter oraz sk³onnoœæ do zabawy i niekiedy\ntowarzyskoœæ. Bior¹c Beagla nie nale¿y zapominaæ i¿ jest to pies mysliwski, który wymaga\nruchuoraz pracy.Nalezy jescze pamiêtaæ, ¿e Beagle spuszczony na smyczy, ze wzglêdu na\nswój czu³y wêch, ucieknie";

						 //ustawianie kolrów tekstu
						 if (beagle <= 25){
							 wynik->ForeColor = System::Drawing::Color::Red;
							 wynik->BackColor = System::Drawing::Color::Black;

						 }
						 else if (beagle > 25 && beagle <= 50){
							 wynik->ForeColor = System::Drawing::Color::Orange;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (beagle >= 51 && beagle <= 74){
							 wynik->ForeColor = System::Drawing::Color::Yellow;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }
						 else if (beagle >= 75 && beagle <= 100){
							 wynik->ForeColor = System::Drawing::Color::Green;
							 wynik->BackColor = System::Drawing::Color::Black;
						 }

						 //zwracanie do okna pierwotnego
						 Button^ przeslij = gcnew Button;
						 Label^ podpis = gcnew Label;

						 podpis->Location = Point((okno->Width / 2) - 50, (okno->Height / 4) - 10);
						 podpis->Width = 100;
						 podpis->Height = 50;
						 podpis->Text = "Uzyskany wspó³czynnik:";
						 okno->Controls->Add(podpis);

						 przeslij->Width = 110;
						 przeslij->Height = 50;
						 przeslij->Location = Point(okno->Width / 2, 200);
						 przeslij->Text = "Zobacz wybor";
						 okno->Controls->Add(przeslij);

						 przeslij->DialogResult = System::Windows::Forms::DialogResult::OK;

						 okno->ShowDialog();
						 opis_rasy->Text = tekst->Text;
						 this->Width = 480;
						 this->Height = 200;
						 this->MaximumSize = System::Drawing::Size(480, 200);
						 this->MinimumSize = System::Drawing::Size(480, 200);

					 }//gdy wyniki s¹ zerowe
					 else if (bcoli<0 && york<0 && bulf<0 && beagle<0 && lab<0 && pug<0 && german<0 && 
						 azjata<0 && kaukaz<0 && bulterier<0 && rot<0 && golden<0){
						 System::Windows::Forms::DialogResult info;
						 info = MessageBox::Show("Lepiej nie mieæ psa", "Wszystkie wyniki zerowe", MessageBoxButtons::OK, MessageBoxIcon::Information);

					 }


				 }
	}



};
}

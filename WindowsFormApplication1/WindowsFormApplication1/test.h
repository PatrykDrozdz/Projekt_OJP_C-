#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
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

	protected:

	protected:




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
			this->p15->TabStop = true;
			this->p15->Text = L"5";
			this->p15->UseVisualStyleBackColor = true;
			// 
			// p14
			// 
			this->p14->AutoSize = true;
			this->p14->Location = System::Drawing::Point(19, 60);
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(31, 17);
			this->p14->TabIndex = 3;
			this->p14->TabStop = true;
			this->p14->Text = L"4";
			this->p14->UseVisualStyleBackColor = true;
			// 
			// p13
			// 
			this->p13->AutoSize = true;
			this->p13->Location = System::Drawing::Point(93, 37);
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(31, 17);
			this->p13->TabIndex = 2;
			this->p13->TabStop = true;
			this->p13->Text = L"3";
			this->p13->UseVisualStyleBackColor = true;
			// 
			// p12
			// 
			this->p12->AutoSize = true;
			this->p12->Location = System::Drawing::Point(56, 37);
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(31, 17);
			this->p12->TabIndex = 1;
			this->p12->TabStop = true;
			this->p12->Text = L"2";
			this->p12->UseVisualStyleBackColor = true;
			// 
			// p11
			// 
			this->p11->AutoSize = true;
			this->p11->Location = System::Drawing::Point(19, 37);
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(31, 17);
			this->p11->TabIndex = 0;
			this->p11->TabStop = true;
			this->p11->Text = L"1";
			this->p11->UseVisualStyleBackColor = true;
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
			this->p35->TabStop = true;
			this->p35->Text = L"5";
			this->p35->UseVisualStyleBackColor = true;
			// 
			// p34
			// 
			this->p34->AutoSize = true;
			this->p34->Location = System::Drawing::Point(48, 53);
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(31, 17);
			this->p34->TabIndex = 8;
			this->p34->TabStop = true;
			this->p34->Text = L"4";
			this->p34->UseVisualStyleBackColor = true;
			// 
			// p33
			// 
			this->p33->AutoSize = true;
			this->p33->Location = System::Drawing::Point(122, 30);
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(31, 17);
			this->p33->TabIndex = 7;
			this->p33->TabStop = true;
			this->p33->Text = L"3";
			this->p33->UseVisualStyleBackColor = true;
			// 
			// p32
			// 
			this->p32->AutoSize = true;
			this->p32->Location = System::Drawing::Point(85, 30);
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(31, 17);
			this->p32->TabIndex = 6;
			this->p32->TabStop = true;
			this->p32->Text = L"2";
			this->p32->UseVisualStyleBackColor = true;
			// 
			// p31
			// 
			this->p31->AutoSize = true;
			this->p31->Location = System::Drawing::Point(48, 30);
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(31, 17);
			this->p31->TabIndex = 5;
			this->p31->TabStop = true;
			this->p31->Text = L"1";
			this->p31->UseVisualStyleBackColor = true;
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
			this->p55->TabStop = true;
			this->p55->Text = L"5";
			this->p55->UseVisualStyleBackColor = true;
			// 
			// p51
			// 
			this->p51->AutoSize = true;
			this->p51->Location = System::Drawing::Point(48, 36);
			this->p51->Name = L"p51";
			this->p51->Size = System::Drawing::Size(31, 17);
			this->p51->TabIndex = 10;
			this->p51->TabStop = true;
			this->p51->Text = L"1";
			this->p51->UseVisualStyleBackColor = true;
			// 
			// p54
			// 
			this->p54->AutoSize = true;
			this->p54->Location = System::Drawing::Point(48, 59);
			this->p54->Name = L"p54";
			this->p54->Size = System::Drawing::Size(31, 17);
			this->p54->TabIndex = 13;
			this->p54->TabStop = true;
			this->p54->Text = L"4";
			this->p54->UseVisualStyleBackColor = true;
			// 
			// p52
			// 
			this->p52->AutoSize = true;
			this->p52->Location = System::Drawing::Point(85, 36);
			this->p52->Name = L"p52";
			this->p52->Size = System::Drawing::Size(31, 17);
			this->p52->TabIndex = 11;
			this->p52->TabStop = true;
			this->p52->Text = L"2";
			this->p52->UseVisualStyleBackColor = true;
			// 
			// p53
			// 
			this->p53->AutoSize = true;
			this->p53->Location = System::Drawing::Point(122, 36);
			this->p53->Name = L"p53";
			this->p53->Size = System::Drawing::Size(31, 17);
			this->p53->TabIndex = 12;
			this->p53->TabStop = true;
			this->p53->Text = L"3";
			this->p53->UseVisualStyleBackColor = true;
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
			this->p25->TabStop = true;
			this->p25->Text = L"5";
			this->p25->UseVisualStyleBackColor = true;
			// 
			// p24
			// 
			this->p24->AutoSize = true;
			this->p24->Location = System::Drawing::Point(48, 53);
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(31, 17);
			this->p24->TabIndex = 8;
			this->p24->TabStop = true;
			this->p24->Text = L"4";
			this->p24->UseVisualStyleBackColor = true;
			// 
			// p23
			// 
			this->p23->AutoSize = true;
			this->p23->Location = System::Drawing::Point(122, 30);
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(31, 17);
			this->p23->TabIndex = 7;
			this->p23->TabStop = true;
			this->p23->Text = L"3";
			this->p23->UseVisualStyleBackColor = true;
			// 
			// p22
			// 
			this->p22->AutoSize = true;
			this->p22->Location = System::Drawing::Point(85, 30);
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(31, 17);
			this->p22->TabIndex = 6;
			this->p22->TabStop = true;
			this->p22->Text = L"2";
			this->p22->UseVisualStyleBackColor = true;
			// 
			// p21
			// 
			this->p21->AutoSize = true;
			this->p21->Location = System::Drawing::Point(48, 30);
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(31, 17);
			this->p21->TabIndex = 5;
			this->p21->TabStop = true;
			this->p21->Text = L"1";
			this->p21->UseVisualStyleBackColor = true;
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
			this->p45->TabStop = true;
			this->p45->Text = L"5";
			this->p45->UseVisualStyleBackColor = true;
			// 
			// p44
			// 
			this->p44->AutoSize = true;
			this->p44->Location = System::Drawing::Point(48, 53);
			this->p44->Name = L"p44";
			this->p44->Size = System::Drawing::Size(31, 17);
			this->p44->TabIndex = 8;
			this->p44->TabStop = true;
			this->p44->Text = L"4";
			this->p44->UseVisualStyleBackColor = true;
			// 
			// p43
			// 
			this->p43->AutoSize = true;
			this->p43->Location = System::Drawing::Point(122, 30);
			this->p43->Name = L"p43";
			this->p43->Size = System::Drawing::Size(31, 17);
			this->p43->TabIndex = 7;
			this->p43->TabStop = true;
			this->p43->Text = L"3";
			this->p43->UseVisualStyleBackColor = true;
			// 
			// p42
			// 
			this->p42->AutoSize = true;
			this->p42->Location = System::Drawing::Point(85, 30);
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(31, 17);
			this->p42->TabIndex = 6;
			this->p42->TabStop = true;
			this->p42->Text = L"2";
			this->p42->UseVisualStyleBackColor = true;
			// 
			// p41
			// 
			this->p41->AutoSize = true;
			this->p41->Location = System::Drawing::Point(48, 30);
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(31, 17);
			this->p41->TabIndex = 5;
			this->p41->TabStop = true;
			this->p41->Text = L"1";
			this->p41->UseVisualStyleBackColor = true;
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
			this->p65->TabStop = true;
			this->p65->Text = L"5";
			this->p65->UseVisualStyleBackColor = true;
			// 
			// p64
			// 
			this->p64->AutoSize = true;
			this->p64->Location = System::Drawing::Point(48, 53);
			this->p64->Name = L"p64";
			this->p64->Size = System::Drawing::Size(31, 17);
			this->p64->TabIndex = 8;
			this->p64->TabStop = true;
			this->p64->Text = L"4";
			this->p64->UseVisualStyleBackColor = true;
			// 
			// p63
			// 
			this->p63->AutoSize = true;
			this->p63->Location = System::Drawing::Point(122, 30);
			this->p63->Name = L"p63";
			this->p63->Size = System::Drawing::Size(31, 17);
			this->p63->TabIndex = 7;
			this->p63->TabStop = true;
			this->p63->Text = L"3";
			this->p63->UseVisualStyleBackColor = true;
			// 
			// p62
			// 
			this->p62->AutoSize = true;
			this->p62->Location = System::Drawing::Point(85, 30);
			this->p62->Name = L"p62";
			this->p62->Size = System::Drawing::Size(31, 17);
			this->p62->TabIndex = 6;
			this->p62->TabStop = true;
			this->p62->Text = L"2";
			this->p62->UseVisualStyleBackColor = true;
			// 
			// p61
			// 
			this->p61->AutoSize = true;
			this->p61->Location = System::Drawing::Point(48, 30);
			this->p61->Name = L"p61";
			this->p61->Size = System::Drawing::Size(31, 17);
			this->p61->TabIndex = 5;
			this->p61->TabStop = true;
			this->p61->Text = L"1";
			this->p61->UseVisualStyleBackColor = true;
			// 
			// liczenie
			// 
			this->liczenie->Location = System::Drawing::Point(235, 422);
			this->liczenie->Name = L"liczenie";
			this->liczenie->Size = System::Drawing::Size(253, 107);
			this->liczenie->TabIndex = 2;
			this->liczenie->Text = L"Przelicz";
			this->liczenie->UseVisualStyleBackColor = true;
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 570);
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

		}
#pragma endregion

};
}

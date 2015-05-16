#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  test;
	private: System::Windows::Forms::Button^  help;
	private: System::Windows::Forms::Button^  wyjœcie;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->test = (gcnew System::Windows::Forms::Button());
			this->help = (gcnew System::Windows::Forms::Button());
			this->wyjœcie = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// test
			// 
			this->test->Location = System::Drawing::Point(234, 73);
			this->test->Name = L"test";
			this->test->Size = System::Drawing::Size(155, 56);
			this->test->TabIndex = 0;
			this->test->Text = L"Rozpocznij Test";
			this->test->UseVisualStyleBackColor = true;
			this->test->Click += gcnew System::EventHandler(this, &Form1::test_Click);
			// 
			// help
			// 
			this->help->Location = System::Drawing::Point(234, 177);
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(155, 60);
			this->help->TabIndex = 1;
			this->help->Text = L"O Programie";
			this->help->UseVisualStyleBackColor = true;
			this->help->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// wyjœcie
			// 
			this->wyjœcie->Location = System::Drawing::Point(234, 263);
			this->wyjœcie->Name = L"wyjœcie";
			this->wyjœcie->Size = System::Drawing::Size(155, 64);
			this->wyjœcie->TabIndex = 2;
			this->wyjœcie->Text = L"Wyjœcie";
			this->wyjœcie->UseVisualStyleBackColor = true;
			this->wyjœcie->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(547, 442);
			this->Controls->Add(this->wyjœcie);
			this->Controls->Add(this->help);
			this->Controls->Add(this->test);
			this->Name = L"Form1";
			this->Text = L"Doggy test";
			this->ResumeLayout(false);

		}
#pragma endregion
		//char **tlo_pomoc = (char**)malloc(1 * sizeof(char*));

		

		//tlo_pomoc[0] = "t³o test.jpg";

		//ImageList
	//zamknij
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
	}
	//pomoc
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ pomoc = gcnew Form;

				 Label^ tekst_opis1 = gcnew Label;

				 ImageList^ tlo = gcnew ImageList;

				 pomoc->Show();
				 pomoc->Width = 600;
				 pomoc->Height = 600;
				 pomoc->Text = "O programie";

				 //tlo->Images->
				 //pomoc->BackgroundImage = "t³o test.jpg";;

				 tekst_opis1->Location = Point((pomoc->Width)/4, (pomoc->Height) / 2);
				 tekst_opis1->Width = pomoc->Width / 2;
				 tekst_opis1->Height = pomoc->Height / 2;
				 tekst_opis1->Text = "Aplikacja, która ma na celu ustalenie, jaka rasa psa pasuje do Ciebie najbardziej. Program dzia³a na zasadzie ankiety: wypelnia siê ""radiobuttony"" z liczbami 1-5 Bêdzie to ocena pod wzglêdem: inteligencji, aktywnoœci, strózowania, obrony, potrzeb socjalnych psa oraz tresowalnoœci. Mi³ego testu :)";

				 pomoc->Controls->Add(tekst_opis1);
	}
	private: System::Void test_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ test = gcnew Form;

				 GroupBox^ pytanie1 = gcnew GroupBox;
				 GroupBox^ pytanie2 = gcnew GroupBox;
				 GroupBox^ pytanie3 = gcnew GroupBox;
				 GroupBox^ pytanie4 = gcnew GroupBox;
				 GroupBox^ pytanie5 = gcnew GroupBox;
				 GroupBox^ pytanie6 = gcnew GroupBox;
				 
				 RadioButton^ p11 = gcnew RadioButton;
				 RadioButton^ p12 = gcnew RadioButton;
				 RadioButton^ p13 = gcnew RadioButton;
				 RadioButton^ p14 = gcnew RadioButton;
				 RadioButton^ p15 = gcnew RadioButton;
				 RadioButton^ p21 = gcnew RadioButton;
				 RadioButton^ p22 = gcnew RadioButton;
				 RadioButton^ p23 = gcnew RadioButton;
				 RadioButton^ p24 = gcnew RadioButton;
				 RadioButton^ p25 = gcnew RadioButton;
				 RadioButton^ p31 = gcnew RadioButton;
				 RadioButton^ p32 = gcnew RadioButton;
				 RadioButton^ p33 = gcnew RadioButton;
				 RadioButton^ p34 = gcnew RadioButton;
				 RadioButton^ p35 = gcnew RadioButton;
				 RadioButton^ p41 = gcnew RadioButton;
				 RadioButton^ p42 = gcnew RadioButton;
				 RadioButton^ p43 = gcnew RadioButton;
				 RadioButton^ p44 = gcnew RadioButton;
				 RadioButton^ p45 = gcnew RadioButton;
				 RadioButton^ p51 = gcnew RadioButton;
				 RadioButton^ p52 = gcnew RadioButton;
				 RadioButton^ p53 = gcnew RadioButton;
				 RadioButton^ p54 = gcnew RadioButton;
				 RadioButton^ p55 = gcnew RadioButton;
				 RadioButton^ p61 = gcnew RadioButton;
				 RadioButton^ p62 = gcnew RadioButton;
				 RadioButton^ p63 = gcnew RadioButton;
				 RadioButton^ p64 = gcnew RadioButton;
				 RadioButton^ p65 = gcnew RadioButton;

				 Button^ przeliczaj = gcnew Button;

				 int GBW = 70;
				 int RBW = 30;

				 test->Show();
				 test->Width = 600;
				 test->Height = 800;
				 //test->BackgroundImage = "";
				 
				 //deklaracje pytañ(groupbox)

				 pytanie1->Location=Point((test->Width / 4), (test->Height / 20));
				 pytanie1->Text = "Czy chcesz mieæ psa aktywnego?";
				 pytanie1->Height = GBW;
				 test->Controls->Add(pytanie1);

				 pytanie2->Location = Point((test->Width / 4), (test->Height / (10)+40));
				 pytanie2->Text = "Potrzebujesz dobrego stró¿a?";
				 pytanie2->Height = GBW;
				 test->Controls->Add(pytanie2);
				 
				 pytanie3->Location = Point((test->Width / 4), (test->Height / (10)+120));
				 pytanie3->Text = "Czy chcesz mieæ psa obronnego?";
				 pytanie3->Height = GBW;
				 test->Controls->Add(pytanie3);

				 pytanie4->Location = Point((test->Width / 4), (test->Height / (10)+200));
				 pytanie4->Text = "Czy chcesz mieæ psa inteligentnego?";
				 pytanie4->Height = GBW;
				 test->Controls->Add(pytanie4);

				 pytanie5->Location = Point((test->Width / 4), (test->Height / (10) + 280));
				 pytanie5->Text = "Czy ma on siê daæ ³atwo tresowaæ?";
				 pytanie5->Height = GBW;
				 test->Controls->Add(pytanie5);

				 pytanie6->Location = Point((test->Width / 4), (test->Height / (10) + 360));
				 pytanie6->Text = "Czy zapewnisz mu potrzeby socjalne?";
				 pytanie6->Height = GBW;
				 test->Controls->Add(pytanie6);

				 przeliczaj->Width = pytanie6->Width;
				 przeliczaj->Height = 100;
				 przeliczaj->Location = Point(test->Width/4, 550);
				 przeliczaj->Text = "Przelicz";
				 test->Controls->Add(przeliczaj);

				 //odpowiedzi do pytania 1

				 p11->Location = Point(pytanie1->Width/(5)-20, pytanie1->Height/(2));
				 p11->Width = RBW;
				 p11->Text = "1";
				 pytanie1->Controls->Add(p11);

				 p12->Location = Point(pytanie1->Width / (5)+15,  pytanie1->Height / (2));
				 p12->Width = RBW;
				 p12->Text = "2";
				 pytanie1->Controls->Add(p12);

				 p13->Location = Point(pytanie1->Width / (5) +50, pytanie1->Height / (2));
				 p13->Width = RBW;
				 p13->Text = "3";
				 pytanie1->Controls->Add(p13);

				 p14->Location = Point(pytanie1->Width / (5) + 85, pytanie1->Height / (2));
				 p14->Width = RBW;
				 p14->Text = "4";
				 pytanie1->Controls->Add(p14);

				 p15->Location = Point(pytanie1->Width / (5) + 120, pytanie1->Height / (2));
				 p15->Width = RBW;
				 p15->Text = "5";
				 pytanie1->Controls->Add(p15);

				 //odpowiedzi do pytania 2

				 p21->Location = Point(pytanie2->Width / (5) - 20, pytanie2->Height / (2));
				 p21->Width = RBW;
				 p21->Text = "1";
				 pytanie2->Controls->Add(p21);

				 p22->Location = Point(pytanie2->Width / (5) + 15, pytanie2->Height / (2));
				 p22->Width = RBW;
				 p22->Text = "2";
				 pytanie2->Controls->Add(p22);

				 p23->Location = Point(pytanie2->Width / (5) + 50, pytanie2->Height / (2));
				 p23->Width = RBW;
				 p23->Text = "3";
				 pytanie2->Controls->Add(p23);

				 p24->Location = Point(pytanie2->Width / (5) + 85, pytanie2->Height / (2));
				 p24->Width = RBW;
				 p24->Text = "4";
				 pytanie2->Controls->Add(p24);

				 p25->Location = Point(pytanie2->Width / (5) + 120, pytanie2->Height / (2));
				 p25->Width = RBW;
				 p25->Text = "5";
				 pytanie2->Controls->Add(p25);

				 //odpowiedzi do pytania 3

				 p31->Location = Point(pytanie3->Width / (5) - 20, pytanie3->Height / (2));
				 p31->Width = RBW;
				 p31->Text = "1";
				 pytanie3->Controls->Add(p31);

				 p32->Location = Point(pytanie3->Width / (5) + 15, pytanie3->Height / (2));
				 p32->Width = RBW;
				 p32->Text = "2";
				 pytanie3->Controls->Add(p32);

				 p33->Location = Point(pytanie3->Width / (5) + 50, pytanie3->Height / (2));
				 p33->Width = RBW;
				 p33->Text = "3";
				 pytanie3->Controls->Add(p33);

				 p34->Location = Point(pytanie3->Width / (5) + 85, pytanie3->Height / (2));
				 p34->Width = RBW;
				 p34->Text = "4";
				 pytanie3->Controls->Add(p34);

				 p35->Location = Point(pytanie3->Width / (5) + 120, pytanie3->Height / (2));
				 p35->Width = RBW;
				 p35->Text = "5";
				 pytanie3->Controls->Add(p35);

				 //odpowiedzi do pytania 4

				 p41->Location = Point(pytanie4->Width / (5) - 20, pytanie4->Height / (2));
				 p41->Width = RBW;
				 p41->Text = "1";
				 pytanie4->Controls->Add(p41);

				 p42->Location = Point(pytanie4->Width / (5) + 15, pytanie4->Height / (2));
				 p42->Width = RBW;
				 p42->Text = "2";
				 pytanie4->Controls->Add(p42);

				 p43->Location = Point(pytanie4->Width / (5) + 50, pytanie4->Height / (2));
				 p43->Width = RBW;
				 p43->Text = "3";
				 pytanie4->Controls->Add(p43);

				 p44->Location = Point(pytanie4->Width / (5) + 85, pytanie4->Height / (2));
				 p44->Width = RBW;
				 p44->Text = "4";
				 pytanie4->Controls->Add(p44);

				 p45->Location = Point(pytanie4->Width / (5) + 120, pytanie4->Height / (2));
				 p45->Width = RBW;
				 p45->Text = "5";
				 pytanie4->Controls->Add(p45);

				 //odpowiedzi pytanie 5

				 p51->Location = Point(pytanie5->Width / (5) - 20, pytanie5->Height / (2));
				 p51->Width = RBW;
				 p51->Text = "1";
				 pytanie5->Controls->Add(p51);

				 p52->Location = Point(pytanie5->Width / (5) + 15, pytanie5->Height / (2));
				 p52->Width = RBW;
				 p52->Text = "2";
				 pytanie5->Controls->Add(p52);

				 p53->Location = Point(pytanie5->Width / (5) + 50, pytanie5->Height / (2));
				 p53->Width = RBW;
				 p53->Text = "3";
				 pytanie5->Controls->Add(p53);

				 p54->Location = Point(pytanie5->Width / (5) + 85, pytanie5->Height / (2));
				 p54->Width = RBW;
				 p54->Text = "4";
				 pytanie5->Controls->Add(p54);

				 p55->Location = Point(pytanie5->Width / (5) + 120, pytanie5->Height / (2));
				 p55->Width = RBW;
				 p55->Text = "5";
				 pytanie5->Controls->Add(p55);

				 //odpowiedzi pytanie 6

				 p61->Location = Point(pytanie6->Width / (5) - 20, pytanie6->Height / (2));
				 p61->Width = RBW;
				 p61->Text = "1";
				 pytanie6->Controls->Add(p61);

				 p62->Location = Point(pytanie6->Width / (5) + 15, pytanie6->Height / (2));
				 p62->Width = RBW;
				 p62->Text = "2";
				 pytanie6->Controls->Add(p62);

				 p63->Location = Point(pytanie6->Width / (5) + 50, pytanie6->Height / (2));
				 p63->Width = RBW;
				 p63->Text = "3";
				 pytanie6->Controls->Add(p63);

				 p64->Location = Point(pytanie6->Width / (5) + 85, pytanie6->Height / (2));
				 p64->Width = RBW;
				 p64->Text = "4";
				 pytanie6->Controls->Add(p64);

				 p65->Location = Point(pytanie6->Width / (5) + 120, pytanie6->Height / (2));
				 p65->Width = RBW;
				 p65->Text = "5";
				 pytanie6->Controls->Add(p65);
	}
};
}


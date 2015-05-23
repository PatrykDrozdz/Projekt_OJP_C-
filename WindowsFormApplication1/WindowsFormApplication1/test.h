#pragma once

namespace Testspace {

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

	private: System::Windows::Forms::GroupBox^ pytanie1 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie2 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie3 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie4 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie5 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie6 = gcnew GroupBox;

	private: System::Windows::Forms::RadioButton^ p11 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p12 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p13 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p14 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p15 = gcnew RadioButton;

	private: System::Windows::Forms::RadioButton^ p21 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p22 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p23 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p24 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p25 = gcnew RadioButton;
	
	private: System::Windows::Forms::RadioButton^ p31 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p32 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p33 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p34 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p35 = gcnew RadioButton;

	private: System::Windows::Forms::RadioButton^ p41 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p42 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p43 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p44 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p45 = gcnew RadioButton;

	private: System::Windows::Forms::RadioButton^ p51 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p52 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p53 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p54 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p55 = gcnew RadioButton;

	private: System::Windows::Forms::RadioButton^ p61 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p62 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p63 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p64 = gcnew RadioButton;
	private: System::Windows::Forms::RadioButton^ p65 = gcnew RadioButton;

	private: System::Windows::Forms::Button^ przeliczaj = gcnew Button;


	private:
	
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->pytanie1 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie2 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie3 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie4 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie5 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie6 = (gcnew System::Windows::Forms::GroupBox());

			this->p11 = (gcnew System::Windows::Forms::RadioButton());
			this->p12 = (gcnew System::Windows::Forms::RadioButton());
			this->p13 = (gcnew System::Windows::Forms::RadioButton());
			this->p14 = (gcnew System::Windows::Forms::RadioButton());
			this->p15 = (gcnew System::Windows::Forms::RadioButton());

			this->p21 = (gcnew System::Windows::Forms::RadioButton());
			this->p22 = (gcnew System::Windows::Forms::RadioButton());
			this->p23 = (gcnew System::Windows::Forms::RadioButton());
			this->p24 = (gcnew System::Windows::Forms::RadioButton());
			this->p25 = (gcnew System::Windows::Forms::RadioButton());

			this->p31 = (gcnew System::Windows::Forms::RadioButton());
			this->p32 = (gcnew System::Windows::Forms::RadioButton());
			this->p33 = (gcnew System::Windows::Forms::RadioButton());
			this->p34 = (gcnew System::Windows::Forms::RadioButton());
			this->p35 = (gcnew System::Windows::Forms::RadioButton());

			this->p41 = (gcnew System::Windows::Forms::RadioButton());
			this->p42 = (gcnew System::Windows::Forms::RadioButton());
			this->p43 = (gcnew System::Windows::Forms::RadioButton());
			this->p44 = (gcnew System::Windows::Forms::RadioButton());
			this->p45 = (gcnew System::Windows::Forms::RadioButton());

			this->p51 = (gcnew System::Windows::Forms::RadioButton());
			this->p52 = (gcnew System::Windows::Forms::RadioButton());
			this->p53 = (gcnew System::Windows::Forms::RadioButton());
			this->p54 = (gcnew System::Windows::Forms::RadioButton());
			this->p55 = (gcnew System::Windows::Forms::RadioButton());

			this->p61 = (gcnew System::Windows::Forms::RadioButton());
			this->p62 = (gcnew System::Windows::Forms::RadioButton());
			this->p63 = (gcnew System::Windows::Forms::RadioButton());
			this->p64 = (gcnew System::Windows::Forms::RadioButton());
			this->p65 = (gcnew System::Windows::Forms::RadioButton());

			this->przeliczaj = (gcnew System::Windows::Forms::Button());

			this->pytanie1->SuspendLayout();
			this->pytanie2->SuspendLayout();
			this->pytanie3->SuspendLayout();
			this->pytanie4->SuspendLayout();
			this->pytanie5->SuspendLayout();
			this->pytanie6->SuspendLayout();
			this->przeliczaj->SuspendLayout();
			this->SuspendLayout();



			int GBH = 70;//groubbox height
			int GBW = 200;
			int RBW = 30;


			/////////////////////

			//deklaracja okna

			////////////////

			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(600, 800);
			this->Text = L"Test";
			this->MaximizeBox = false;
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Location = System::Drawing::Point(0, 200);
			this->Controls->Add(this->pytanie1);
			this->Controls->Add(this->pytanie2);
			this->Controls->Add(this->pytanie3);
			this->Controls->Add(this->pytanie4);
			this->Controls->Add(this->pytanie5);
			this->Controls->Add(this->pytanie6);
			this->Controls->Add(this->przeliczaj);


			//pytanie 1


			this->pytanie1->Controls->Add(this->p11);
			this->pytanie1->Controls->Add(this->p12);
			this->pytanie1->Controls->Add(this->p13);
			this->pytanie1->Controls->Add(this->p14);
			this->pytanie1->Controls->Add(this->p15);
			this->pytanie1->Location = System::Drawing::Point(800/4, 600/20);
			this->pytanie1->Name = L"pytanie1";
			this->pytanie1->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie1->TabIndex = 0;
			this->pytanie1->TabStop = false;
			this->pytanie1->Text = L"Czy chcesz mieæ psa aktywnego?";



			//pytanie 2



			this->pytanie2->Controls->Add(this->p21);
			this->pytanie2->Controls->Add(this->p22);
			this->pytanie2->Controls->Add(this->p23);
			this->pytanie2->Controls->Add(this->p24);
			this->pytanie2->Controls->Add(this->p25);
			this->pytanie2->Location = System::Drawing::Point(800 / 4, 600 / (10) + 40);
			this->pytanie2->Name = L"pytanie2";
			this->pytanie2->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie2->TabIndex = 0;
			this->pytanie2->TabStop = false;
			this->pytanie2->Text = L"Potrzebujesz dobrego stró¿a?";



			//pytanie 3



			this->pytanie3->Controls->Add(this->p31);
			this->pytanie3->Controls->Add(this->p32);
			this->pytanie3->Controls->Add(this->p33);
			this->pytanie3->Controls->Add(this->p34);
			this->pytanie3->Controls->Add(this->p35);
			this->pytanie3->Location = System::Drawing::Point(800 / 4, 600 / (10) + 120);
			this->pytanie3->Name = L"pytanie3";
			this->pytanie3->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie3->TabIndex = 0;
			this->pytanie3->TabStop = false;
			this->pytanie3->Text = L"Czy chcesz mieæ psa obronnego?";





			//pytanie4




			this->pytanie4->Controls->Add(this->p41);
			this->pytanie4->Controls->Add(this->p42);
			this->pytanie4->Controls->Add(this->p43);
			this->pytanie4->Controls->Add(this->p44);
			this->pytanie4->Controls->Add(this->p45);
			this->pytanie4->Location = System::Drawing::Point(800 / 4, 600 / (10) + 200);
			this->pytanie4->Name = L"pytanie4";
			this->pytanie4->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie4->TabIndex = 0;
			this->pytanie4->TabStop = false;
			this->pytanie4->Text = L"Czy chcesz mieæ psa inteligentnego?";

			//pytanie 5



			this->pytanie5->Controls->Add(this->p51);
			this->pytanie5->Controls->Add(this->p52);
			this->pytanie5->Controls->Add(this->p53);
			this->pytanie5->Controls->Add(this->p54);
			this->pytanie5->Controls->Add(this->p55);
			this->pytanie5->Location = System::Drawing::Point(800 / 4, 600 / (10) + 280);
			this->pytanie5->Name = L"pytanie5";
			this->pytanie5->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie5->TabIndex = 0;
			this->pytanie5->TabStop = false;
			this->pytanie5->Text = L"Czy ma on siê daæ ³atwo tresowaæ?";

			//pytanie 6


			this->pytanie6->Controls->Add(this->p61);
			this->pytanie6->Controls->Add(this->p62);
			this->pytanie6->Controls->Add(this->p63);
			this->pytanie6->Controls->Add(this->p64);
			this->pytanie6->Controls->Add(this->p65);
			this->pytanie6->Location = System::Drawing::Point(800 / 4, 600 / (10) + 360);
			this->pytanie6->Name = L"pytanie6";
			this->pytanie6->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie6->TabIndex = 0;
			this->pytanie6->TabStop = false;
			this->pytanie6->Text = L"Czy zapewnisz mu potrzeby socjalne?";

			//radiobuttony odpowiadajace odpowiednim waroscia
		
			//do pytania 1
			this->p11->AutoSize = true;
			this->p11->Location = System::Drawing::Point(pytanie1->Width / (5) - 20, pytanie1->Height / (2));
			this->p11->Name = L"p11";
			this->p11->Size = System::Drawing::Size(30, 30);
			this->p11->TabIndex = 0;
			this->p11->TabStop = false;//deklaracja zaznaczenia rudiobuttona
			this->p11->Text = L"1";//wartosc
			this->p11->UseVisualStyleBackColor = true;

			this->p12->AutoSize = true;
			this->p12->Location = System::Drawing::Point(pytanie1->Width / (5) + 15, pytanie1->Height / (2));
			this->p12->Name = L"p12";
			this->p12->Size = System::Drawing::Size(30, 30);
			this->p12->TabIndex = 0;
			this->p12->TabStop = false;
			this->p12->Text = L"2";//wartosc
			this->p12->UseVisualStyleBackColor = true;

			this->p13->AutoSize = true;
			this->p13->Location = System::Drawing::Point(pytanie1->Width / (5) + 50, pytanie1->Height / (2));
			this->p13->Name = L"p13";
			this->p13->Size = System::Drawing::Size(30, 30);
			this->p13->TabIndex = 0;
			this->p13->TabStop = false;
			this->p13->Text = L"3";//wartosc
			this->p13->UseVisualStyleBackColor = true;

			this->p14->AutoSize = true;
			this->p14->Location = System::Drawing::Point(pytanie1->Width / (5) + 85, pytanie1->Height / (2));
			this->p14->Name = L"p14";
			this->p14->Size = System::Drawing::Size(30, 30);
			this->p14->TabIndex = 0;
			this->p14->TabStop = false;
			this->p14->Text = L"4";//wartosc
			this->p14->UseVisualStyleBackColor = true;
		
			this->p15->AutoSize = true;
			this->p15->Location = System::Drawing::Point(pytanie1->Width / (5) + 120, pytanie1->Height / (2));
			this->p15->Name = L"p15";
			this->p15->Size = System::Drawing::Size(30, 30);
			this->p15->TabIndex = 0;
			this->p15->TabStop = false;
			this->p15->Text = L"5";//wartosc
			this->p15->UseVisualStyleBackColor = true;





			//do pytania 2




			this->p21->AutoSize = true;
			this->p21->Location = System::Drawing::Point(pytanie2->Width / (5) - 20, pytanie2->Height / (2));
			this->p21->Name = L"p21";
			this->p21->Size = System::Drawing::Size(30, 30);
			this->p21->TabIndex = 0;
			this->p21->TabStop = false;
			this->p21->Text = L"1";//wartosc
			this->p21->UseVisualStyleBackColor = true;

			this->p22->AutoSize = true;
			this->p22->Location = System::Drawing::Point(pytanie2->Width / (5) + 15, pytanie2->Height / (2));
			this->p22->Name = L"p22";
			this->p22->Size = System::Drawing::Size(30, 30);
			this->p22->TabIndex = 0;
			this->p22->TabStop = false;
			this->p22->Text = L"2";//wartosc
			this->p22->UseVisualStyleBackColor = true;

			this->p23->AutoSize = true;
			this->p23->Location = System::Drawing::Point(pytanie2->Width / (5) + 50, pytanie2->Height / (2));
			this->p23->Name = L"p23";
			this->p23->Size = System::Drawing::Size(30, 30);
			this->p23->TabIndex = 0;
			this->p23->TabStop = false;
			this->p23->Text = L"3";//wartosc
			this->p23->UseVisualStyleBackColor = true;

			this->p24->AutoSize = true;
			this->p24->Location = System::Drawing::Point(pytanie2->Width / (5) + 85, pytanie2->Height / (2));
			this->p24->Name = L"p24";
			this->p24->Size = System::Drawing::Size(30, 30);
			this->p24->TabIndex = 0;
			this->p24->TabStop = false;
			this->p24->Text = L"4";//wartosc
			this->p24->UseVisualStyleBackColor = true;

			this->p25->AutoSize = true;
			this->p25->Location = System::Drawing::Point(pytanie2->Width / (5) + 120, pytanie2->Height / (2));
			this->p25->Name = L"p25";
			this->p25->Size = System::Drawing::Size(30, 30);
			this->p25->TabIndex = 0;
			this->p25->TabStop = false;
			this->p25->Text = L"5";//wartosc
			this->p25->UseVisualStyleBackColor = true;





			//do pytania 3




			this->p31->AutoSize = true;
			this->p31->Location = System::Drawing::Point(pytanie3->Width / (5) - 20, pytanie3->Height / (2));
			this->p31->Name = L"p31";
			this->p31->Size = System::Drawing::Size(30, 30);
			this->p31->TabIndex = 0;
			this->p31->TabStop = false;
			this->p31->Text = L"1";//wartosc
			this->p31->UseVisualStyleBackColor = true;

			this->p32->AutoSize = true;
			this->p32->Location = System::Drawing::Point(pytanie3->Width / (5) + 15, pytanie3->Height / (2));
			this->p32->Name = L"p32";
			this->p32->Size = System::Drawing::Size(30, 30);
			this->p32->TabIndex = 0;
			this->p32->TabStop = false;
			this->p32->Text = L"3";//wartosc
			this->p32->UseVisualStyleBackColor = true;

			this->p33->AutoSize = true;
			this->p33->Location = System::Drawing::Point(pytanie3->Width / (5) + 50, pytanie3->Height / (2));
			this->p33->Name = L"p33";
			this->p33->Size = System::Drawing::Size(30, 30);
			this->p33->TabIndex = 0;
			this->p33->TabStop = false;
			this->p33->Text = L"3";//wartosc
			this->p33->UseVisualStyleBackColor = true;

			this->p34->AutoSize = true;
			this->p34->Location = System::Drawing::Point(pytanie3->Width / (5) + 85, pytanie3->Height / (2));
			this->p34->Name = L"p34";
			this->p34->Size = System::Drawing::Size(30, 30);
			this->p34->TabIndex = 0;
			this->p34->TabStop = false;
			this->p34->Text = L"4";//wartosc
			this->p34->UseVisualStyleBackColor = true;

			this->p35->AutoSize = true;
			this->p35->Location = System::Drawing::Point(pytanie3->Width / (5) + 120, pytanie3->Height / (2));
			this->p35->Name = L"p35";
			this->p35->Size = System::Drawing::Size(30, 30);
			this->p35->TabIndex = 0;
			this->p35->TabStop = false;
			this->p35->Text = L"5";//wartosc
			this->p35->UseVisualStyleBackColor = true;





			//do pytania 4




			this->p41->AutoSize = true;
			this->p41->Location = System::Drawing::Point(pytanie4->Width / (5) - 20, pytanie4->Height / (2));
			this->p41->Name = L"p41";
			this->p41->Size = System::Drawing::Size(30, 30);
			this->p41->TabIndex = 0;
			this->p31->TabStop = false;
			this->p41->Text = L"1";//wartosc
			this->p41->UseVisualStyleBackColor = true;

			this->p42->AutoSize = true;
			this->p42->Location = System::Drawing::Point(pytanie4->Width / (5) + 15, pytanie4->Height / (2));
			this->p42->Name = L"p42";
			this->p42->Size = System::Drawing::Size(30, 30);
			this->p42->TabIndex = 0;
			this->p32->TabStop = false;
			this->p42->Text = L"3";//wartosc
			this->p42->UseVisualStyleBackColor = true;

			this->p43->AutoSize = true;
			this->p43->Location = System::Drawing::Point(pytanie4->Width / (5) + 50, pytanie4->Height / (2));
			this->p43->Name = L"p43";
			this->p43->Size = System::Drawing::Size(30, 30);
			this->p43->TabIndex = 0;
			this->p33->TabStop = false;
			this->p43->Text = L"3";//wartosc
			this->p43->UseVisualStyleBackColor = true;

			this->p44->AutoSize = true;
			this->p44->Location = System::Drawing::Point(pytanie4->Width / (5) + 85, pytanie4->Height / (2));
			this->p44->Name = L"p44";
			this->p44->Size = System::Drawing::Size(30, 30);
			this->p44->TabIndex = 0;
			this->p34->TabStop = false;
			this->p44->Text = L"4";//wartosc
			this->p44->UseVisualStyleBackColor = true;
			
			this->p45->AutoSize = true;
			this->p45->Location = System::Drawing::Point(pytanie4->Width / (5) + 120, pytanie4->Height / (2));
			this->p45->Name = L"p45";
			this->p45->Size = System::Drawing::Size(30, 30);
			this->p45->TabIndex = 0;
			this->p35->TabStop = false;
			this->p45->Text = L"5";//wartosc
			this->p45->UseVisualStyleBackColor = true;

			//////////////////////////////////////////
			//do pytania 5
			///////

			this->p51->AutoSize = true;
			this->p51->Location = System::Drawing::Point(pytanie5->Width / (5) - 20, pytanie5->Height / (2));
			this->p51->Name = L"p51";
			this->p51->Size = System::Drawing::Size(30, 30);
			this->p51->TabIndex = 0;
			this->p31->TabStop = false;
			this->p51->Text = L"1";//wartosc
			this->p51->UseVisualStyleBackColor = true;

			this->p52->AutoSize = true;
			this->p52->Location = System::Drawing::Point(pytanie5->Width / (5) + 15, pytanie5->Height / (2));
			this->p52->Name = L"p52";
			this->p52->Size = System::Drawing::Size(30, 30);
			this->p52->TabIndex = 0;
			this->p32->TabStop = false;
			this->p52->Text = L"3";//wartosc
			this->p52->UseVisualStyleBackColor = true;

			this->p53->AutoSize = true;
			this->p53->Location = System::Drawing::Point(pytanie5->Width / (5) + 50, pytanie5->Height / (2));
			this->p53->Name = L"p53";
			this->p53->Size = System::Drawing::Size(30, 30);
			this->p53->TabIndex = 0;
			this->p33->TabStop = false;
			this->p53->Text = L"3";//wartosc
			this->p53->UseVisualStyleBackColor = true;

			this->p54->AutoSize = true;
			this->p54->Location = System::Drawing::Point(pytanie5->Width / (5) + 85, pytanie5->Height / (2));
			this->p54->Name = L"p54";
			this->p54->Size = System::Drawing::Size(30, 30);
			this->p54->TabIndex = 0;
			this->p34->TabStop = false;
			this->p54->Text = L"4";//wartosc
			this->p54->UseVisualStyleBackColor = true;

			this->p55->AutoSize = true;
			this->p55->Location = System::Drawing::Point(pytanie5->Width / (5) + 120, pytanie5->Height / (2));
			this->p55->Name = L"p55";
			this->p55->Size = System::Drawing::Size(30, 30);
			this->p55->TabIndex = 0;
			this->p35->TabStop = false;
			this->p55->Text = L"5";//wartosc
			this->p55->UseVisualStyleBackColor = true;



			//////////////////////////////////////////
			//do pytania 6
			///////

			this->p61->AutoSize = true;
			this->p61->Location = System::Drawing::Point(pytanie6->Width / (5) - 20, pytanie6->Height / (2));
			this->p61->Name = L"p61";
			this->p61->Size = System::Drawing::Size(30, 30);
			this->p61->TabIndex = 0;
			this->p31->TabStop = false;
			this->p61->Text = L"1";//wartosc
			this->p61->UseVisualStyleBackColor = true;

			this->p62->AutoSize = true;
			this->p62->Location = System::Drawing::Point(pytanie6->Width / (5) + 15, pytanie6->Height / (2));
			this->p62->Name = L"p62";
			this->p62->Size = System::Drawing::Size(30, 30);
			this->p62->TabIndex = 0;
			this->p32->TabStop = false;
			this->p62->Text = L"3";//wartosc
			this->p62->UseVisualStyleBackColor = true;

			this->p63->AutoSize = true;
			this->p63->Location = System::Drawing::Point(pytanie6->Width / (5) + 50, pytanie6->Height / (2));
			this->p63->Name = L"p63";
			this->p63->Size = System::Drawing::Size(30, 30);
			this->p63->TabIndex = 0;
			this->p33->TabStop = false;
			this->p63->Text = L"3";//wartosc
			this->p63->UseVisualStyleBackColor = true;

			this->p64->AutoSize = true;
			this->p64->Location = System::Drawing::Point(pytanie6->Width / (5) + 85, pytanie6->Height / (2));
			this->p64->Name = L"p64";
			this->p64->Size = System::Drawing::Size(30, 30);
			this->p64->TabIndex = 0;
			this->p34->TabStop = false;
			this->p64->Text = L"4";//wartosc
			this->p64->UseVisualStyleBackColor = true;

			this->p65->AutoSize = true;
			this->p65->Location = System::Drawing::Point(pytanie6->Width / (5) + 120, pytanie6->Height / (2));
			this->p65->Name = L"p65";
			this->p65->Size = System::Drawing::Size(30, 30);
			this->p65->TabIndex = 0;
			this->p35->TabStop = false;
			this->p65->Text = L"5";//wartosc
			this->p65->UseVisualStyleBackColor = true;


			///przycisk przeliczania danych



			this->przeliczaj->Location = System::Drawing::Point(600/3, 550);
			this->przeliczaj->Name = L"przeliczaj";
			this->przeliczaj->Size = System::Drawing::Size(pytanie6->Width, 100);
			this->przeliczaj->TabIndex = 1;
			this->przeliczaj->Text = L"przelicz";
			this->przeliczaj->UseVisualStyleBackColor = true;
			this->przeliczaj->Click += gcnew System::EventHandler(this, &Test::przeliczaj_Click);

		}
#pragma endregion
			/*if (this->p11->TabStop = true || this->p12->TabStop = true || this->p13->TabStop = true ||
			this->p14->TabStop = true || this->p14->TabStop = true){*/
			private: System::Void przeliczaj_Click(System::Object^  sender, System::EventArgs^  e){
						
						 Form^ wynik = gcnew Form;
						 wynik->MaximizeBox = false;
						 wynik->ShowDialog();
					}
	
	//}
		
	};
}

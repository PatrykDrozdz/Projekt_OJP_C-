#pragma once

namespace Testspace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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

	private: System::Windows::Forms::GroupBox^ pytanie1 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie2 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie3 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie4 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie5 = gcnew GroupBox;
	private: System::Windows::Forms::GroupBox^ pytanie6 = gcnew GroupBox;
			 /*
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
	*/

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
			this->pytanie2 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie3 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie4 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie5 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie6 = (gcnew System::Windows::Forms::GroupBox());
			this->pytanie1->SuspendLayout();
			this->pytanie2->SuspendLayout();
			this->pytanie3->SuspendLayout();
			this->pytanie4->SuspendLayout();
			this->pytanie5->SuspendLayout();
			this->pytanie6->SuspendLayout();
			this->SuspendLayout();

			int GBH = 70;//groubbox height
			int GBW = 200;
			int RBW = 30;

			this->components = gcnew System::ComponentModel::Container();
			this->Size = System::Drawing::Size(600, 800);
			this->Text = L"Test";
			this->Padding = System::Windows::Forms::Padding(0);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->pytanie1);
			this->Controls->Add(this->pytanie2);
			this->Controls->Add(this->pytanie3);
			this->Controls->Add(this->pytanie4);
			this->Controls->Add(this->pytanie5);
			this->Controls->Add(this->pytanie6);


			this->pytanie1->Location = System::Drawing::Point(800/4, 600/20);
			this->pytanie1->Name = L"pytanie1";
			this->pytanie1->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie1->TabIndex = 0;
			this->pytanie1->TabStop = false;
			this->pytanie1->Text = L"Czy chcesz mieæ psa aktywnego?";

			this->pytanie2->Location = System::Drawing::Point(800 / 4, 600 / (10) + 40);
			this->pytanie2->Name = L"pytanie2";
			this->pytanie2->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie2->TabIndex = 0;
			this->pytanie2->TabStop = false;
			this->pytanie2->Text = L"Potrzebujesz dobrego stró¿a?";

			this->pytanie3->Location = System::Drawing::Point(800 / 4, 600 / (10) + 120);
			this->pytanie3->Name = L"pytanie3";
			this->pytanie3->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie3->TabIndex = 0;
			this->pytanie3->TabStop = false;
			this->pytanie3->Text = L"Czy chcesz mieæ psa obronnego?";

			this->pytanie4->Location = System::Drawing::Point(800 / 4, 600 / (10) + 200);
			this->pytanie4->Name = L"pytanie4";
			this->pytanie4->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie4->TabIndex = 0;
			this->pytanie4->TabStop = false;
			this->pytanie4->Text = L"Czy chcesz mieæ psa inteligentnego?";

			this->pytanie5->Location = System::Drawing::Point(800 / 4, 600 / (10) + 280);
			this->pytanie5->Name = L"pytanie5";
			this->pytanie5->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie5->TabIndex = 0;
			this->pytanie5->TabStop = false;
			this->pytanie5->Text = L"Czy ma on siê daæ ³atwo tresowaæ?";

			this->pytanie6->Location = System::Drawing::Point(800 / 4, 600 / (10) + 360);
			this->pytanie6->Name = L"pytanie6";
			this->pytanie6->Size = System::Drawing::Size(GBW, GBH);
			this->pytanie6->TabIndex = 0;
			this->pytanie6->TabStop = false;
			this->pytanie6->Text = L"Czy zapewnisz mu potrzeby socjalne?";


			


			/*
			this->p11->Location = Point(pytanie1->Width / (5) - 20, pytanie1->Height / (2));
			this->p11->Width = RBW;
			this->p11->Text = "1";
			this->pytanie1->Controls->Add(this->p11);

			
			this->p12->Location = Point(pytanie1->Width / (5) + 15, pytanie1->Height / (2));
			this->p12->Width = RBW;
			this->p12->Text = "2";
			this->pytanie1->Controls->Add(this->p12);

			
			this->p13->Location = Point(pytanie1->Width / (5) + 50, pytanie1->Height / (2));
			this->p13->Width = RBW;
			this->p13->Text = "3";
			this->pytanie1->Controls->Add(this->p13);

			
			this->p14->Location = Point(pytanie1->Width / (5) + 85, pytanie1->Height / (2));
			this->p14->Width = RBW;
			this->p14->Text = "4";
			this->pytanie1->Controls->Add(this->p14);

			
			this->p15->Location = Point(pytanie1->Width / (5) + 120, pytanie1->Height / (2));
			this->p15->Width = RBW;
			this->p15->Text = "5";
			this->pytanie1->Controls->Add(this->p15);

			this->p21->Location = Point(pytanie2->Width / (5) - 20, pytanie2->Height / (2));
			this->p21->Width = RBW;
			this->p21->Text = "1";
			this->pytanie2->Controls->Add(this->p21);

			this->p22->Location = Point(pytanie2->Width / (5) + 15, pytanie2->Height / (2));
			this->p22->Width = RBW;
			this->p22->Text = "2";
			this->pytanie2->Controls->Add(this->p22);


			this->p23->Location = Point(pytanie2->Width / (5) + 50, pytanie2->Height / (2));
			this->p23->Width = RBW;
			this->p23->Text = "3";
			this->pytanie2->Controls->Add(this->p23);



			this->p24->Location = Point(pytanie2->Width / (5) + 85, pytanie2->Height / (2));
			this->p24->Width = RBW;
			this->p24->Text = "4";
			this->pytanie2->Controls->Add(this->p24);


			this->p25->Location = Point(pytanie2->Width / (5) + 120, pytanie2->Height / (2));
			this->p25->Width = RBW;
			this->p25->Text = "5";
			this->pytanie2->Controls->Add(this->p25);


			this->p31->Location = Point(pytanie3->Width / (5) - 20, pytanie3->Height / (2));
			this->p31->Width = RBW;
			this->p31->Text = "1";
			this->pytanie3->Controls->Add(this->p31);
			

			this->p32->Location = Point(pytanie3->Width / (5) + 15, pytanie3->Height / (2));
			this->p32->Width = RBW;
			this->p32->Text = "2";
			this->pytanie3->Controls->Add(this->p32);


			this->p33->Location = Point(pytanie3->Width / (5) + 50, pytanie3->Height / (2));
			this->p33->Width = RBW;
			this->p33->Text = "3";
			this->pytanie3->Controls->Add(this->p33);


			this->p34->Location = Point(this->pytanie3->Width / (5) + 85, pytanie3->Height / (2));
			this->p34->Width = RBW;
			this->p34->Text = "4";
			this->pytanie3->Controls->Add(this->p34);


			this->p35->Location = Point(pytanie3->Width / (5) + 120, pytanie3->Height / (2));
			this->p35->Width = RBW;
			this->p35->Text = "5";
			this->pytanie3->Controls->Add(this->p35);


			this->p41->Location = Point(pytanie4->Width / (5) - 20, pytanie4->Height / (2));
			this->p41->Width = RBW;
			this->p41->Text = "1";
			this->pytanie4->Controls->Add(this->p41);


			this->p42->Location = Point(pytanie4->Width / (5) + 15, pytanie4->Height / (2));
			this->p42->Width = RBW;
			this->p42->Text = "2";
			this->pytanie4->Controls->Add(this->p42);


			this->p43->Location = Point(pytanie4->Width / (5) + 50, pytanie4->Height / (2));
			this->p43->Width = RBW;
			this->p43->Text = "3";
			this->pytanie4->Controls->Add(this->p43);


			this->p44->Location = Point(pytanie4->Width / (5) + 85, pytanie4->Height / (2));
			this->p44->Width = RBW;
			this->p44->Text = "4";
			this->pytanie4->Controls->Add(this->p44);


			this->p45->Location = Point(pytanie4->Width / (5) + 120, pytanie4->Height / (2));
			this->p45->Width = RBW;
			this->p45->Text = "5";
			this->pytanie4->Controls->Add(this->p45);

			this->p51->Location = Point(pytanie5->Width / (5) - 20, pytanie5->Height / (2));
			this->p51->Width = RBW;
			this->p51->Text = "1";
			this->pytanie5->Controls->Add(this->p51);


			this->p52->Location = Point(pytanie5->Width / (5) + 15, pytanie5->Height / (2));
			this->p52->Width = RBW;
			this->p52->Text = "2";
			this->pytanie5->Controls->Add(this->p52);

			
			this->p53->Location = Point(pytanie5->Width / (5) + 50, pytanie5->Height / (2));
			this->p53->Width = RBW;
			this->p53->Text = "3";
			this->pytanie5->Controls->Add(this->p53);


			this->p54->Location = Point(pytanie5->Width / (5) + 85, pytanie5->Height / (2));
			this->p54->Width = RBW;
			this->p54->Text = "4";
			this->pytanie5->Controls->Add(this->p54);


			this->p55->Location = Point(pytanie5->Width / (5) + 120, pytanie5->Height / (2));
			this->p55->Width = RBW;
			this->p55->Text = "5";
			this->pytanie5->Controls->Add(this->p55);



			this->p61->Location = Point(pytanie6->Width / (5) - 20, pytanie6->Height / (2));
			this->p61->Width = RBW;
			this->p61->Text = "1";
			this->pytanie6->Controls->Add(this->p61);


			this->p62->Location = Point(pytanie6->Width / (5) + 15, pytanie6->Height / (2));
			this->p62->Width = RBW;
			this->p62->Text = "2";
			this->pytanie6->Controls->Add(this->p62);


			this->p63->Location = Point(pytanie6->Width / (5) + 50, pytanie6->Height / (2));
			this->p63->Width = RBW;
			this->p63->Text = "3";
			this->pytanie6->Controls->Add(this->p63);


			this->p64->Location = Point(pytanie6->Width / (5) + 85, pytanie6->Height / (2));
			this->p64->Width = RBW;
			this->p64->Text = "4";
			this->pytanie6->Controls->Add(this->p64);


			this->p65->Location = Point(pytanie6->Width / (5) + 120, pytanie6->Height / (2));
			this->p65->Width = RBW;
			this->p65->Text = "5";
			this->pytanie6->Controls->Add(this->p65);


			this->przeliczaj->Width = pytanie6->Width;
			this->przeliczaj->Height = 100;
			this->przeliczaj->Location = Point(test->Width / 4, 550);
			this->przeliczaj->Text = "Przelicz";
			this->Controls->Add(this->przeliczaj);
			*/

		}
#pragma endregion
	};
}

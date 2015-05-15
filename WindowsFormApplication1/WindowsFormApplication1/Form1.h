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
	private: System::Windows::Forms::Button^  wyj�cie;
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
			this->wyj�cie = (gcnew System::Windows::Forms::Button());
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
			// wyj�cie
			// 
			this->wyj�cie->Location = System::Drawing::Point(234, 263);
			this->wyj�cie->Name = L"wyj�cie";
			this->wyj�cie->Size = System::Drawing::Size(155, 64);
			this->wyj�cie->TabIndex = 2;
			this->wyj�cie->Text = L"Wyj�cie";
			this->wyj�cie->UseVisualStyleBackColor = true;
			this->wyj�cie->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
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
			this->Controls->Add(this->wyj�cie);
			this->Controls->Add(this->help);
			this->Controls->Add(this->test);
			this->Name = L"Form1";
			this->Text = L"Doggy test";
			this->ResumeLayout(false);

		}
#pragma endregion
		//char **tlo_pomoc = (char**)malloc(1 * sizeof(char*));

		

		//tlo_pomoc[0] = "t�o test.jpg";

		//ImageList
	//zamknij
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
	}
	//pomoc
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ pomoc = gcnew Form;
				 Label^ tekst_opis = gcnew Label;
				
				 pomoc->Show();
				 pomoc->Width = 600;
				 pomoc->Height = 600;
				 pomoc->Text = "O programie";
				 //pomoc->BackgroundImage = "t�o test.jpg";;

				 tekst_opis->Location = Point((pomoc->Width) / 2, (pomoc->Height) / 2);
				 tekst_opis->Text = "Aplikacja, kt�ra ma na celu ustalenie, jaka rasa psa pasuje do Ciebie najbardziej";

				 pomoc->Controls->Add(tekst_opis);
	}
	private: System::Void test_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form^ test = gcnew Form;

				 GroupBox^ pytanie1 = gcnew GroupBox;
				 GroupBox^ pytanie2 = gcnew GroupBox;
				 GroupBox^ pytanie3 = gcnew GroupBox;
				 GroupBox^ pytanie4 = gcnew GroupBox;
				 GroupBox^ pytanie5 = gcnew GroupBox;
				 GroupBox^ pytanie6 = gcnew GroupBox;

				 int GBW = 70;

				 test->Show();
				 test->Width = 600;
				 test->Height = 800;
				 //test->BackgroundImage = "";
				 

				 pytanie1->Location=Point((test->Width / 4), (test->Height / 20));
				 pytanie1->Text = "Czy chcesz mie� psa aktywnego?";
				 pytanie1->Height = GBW;
				 test->Controls->Add(pytanie1);

				 pytanie2->Location = Point((test->Width / 4), (test->Height / (10)+40));
				 pytanie2->Text = "Potrzebujesz dobrego str�a?";
				 pytanie2->Height = GBW;
				 test->Controls->Add(pytanie2);
				 
				 pytanie3->Location = Point((test->Width / 4), (test->Height / (10)+120));
				 pytanie3->Text = "Czy chcesz mie� psa obronnego?";
				 pytanie3->Height = GBW;
				 test->Controls->Add(pytanie3);

				 pytanie4->Location = Point((test->Width / 4), (test->Height / (10)+200));
				 pytanie4->Text = "Czy chcesz mie� psa inteligentnego?";
				 pytanie4->Height = GBW;
				 test->Controls->Add(pytanie4);

				 pytanie5->Location = Point((test->Width / 4), (test->Height / (10) + 280));
				 pytanie5->Text = "Czy ma on si� da� �atwo tresowa�?";
				 pytanie5->Height = GBW;
				 test->Controls->Add(pytanie5);

				 pytanie6->Location = Point((test->Width / 4), (test->Height / (10) + 360));
				 pytanie6->Text = "Czy zapewnisz mu potrzeby socjalne?";
				 pytanie6->Height = GBW;
				 test->Controls->Add(pytanie6);
	}
};
}

#pragma once
#include"test.h"
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
			this->test->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
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
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(547, 442);
			this->Controls->Add(this->wyjœcie);
			this->Controls->Add(this->help);
			this->Controls->Add(this->test);
			this->Location = System::Drawing::Point(700, 200);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
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

				 Graphics^ tlo = this->CreateGraphics();
				 Image^ ob = Image::FromFile("tlotest.jpg");
				 tlo->DrawImage(ob, 325, 25);

				 Form^ pomoc = gcnew Form;

				 Label^ tekst_opis1 = gcnew Label;

				 

				 
				 pomoc->Width = 600;
				 pomoc->Height = 600;
				 pomoc->Text = "O programie";
				 pomoc->MaximizeBox = false;
				

				 tekst_opis1->Location = Point((pomoc->Width)/4, (pomoc->Height) / 2);
				 tekst_opis1->Width = pomoc->Width / 2;
				 tekst_opis1->Height = pomoc->Height / 2;
				 tekst_opis1->Text = "Aplikacja, która ma na celu ustalenie, jaka rasa psa pasuje do Ciebie najbardziej. Program dzia³a na zasadzie ankiety: wypelnia siê ""radiobuttony"" z liczbami 1-5 Bêdzie to ocena pod wzglêdem: inteligencji, aktywnoœci, strózowania, obrony, potrzeb socjalnych psa oraz tresowalnoœci. Mi³ego testu :)";

				 pomoc->Controls->Add(tekst_opis1);

				 pomoc->ShowDialog();
	}
	//otworz okno testu
	private: System::Void test_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Form^ test = gcnew Form;
				 Testspace::Test ^ test = gcnew Testspace::Test;
				 
				 test->ShowDialog();
				
	}
};
}


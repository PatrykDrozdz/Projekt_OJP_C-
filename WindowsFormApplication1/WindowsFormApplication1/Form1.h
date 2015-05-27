#pragma once

#include"test.h"
#include"pomoc1.h"

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		
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

	private: System::ComponentModel::IContainer^  components;
	protected:

	protected:



	private:
		


#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->test = (gcnew System::Windows::Forms::Button());
			this->help = (gcnew System::Windows::Forms::Button());
			this->wyjœcie = (gcnew System::Windows::Forms::Button());
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
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
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
		
	//zamknij
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			Close();
	}
	//pomoc
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

				 WindowsFormApplication1::Pomoc^ pomoc = gcnew WindowsFormApplication1::Pomoc;

				 pomoc->ShowDialog();
	}
	//otworz okno testu
	private: System::Void test_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 WindowsFormApplication1::Test ^ test = gcnew WindowsFormApplication1::Test;
				 
				 test->ShowDialog();
				
	}
};
}


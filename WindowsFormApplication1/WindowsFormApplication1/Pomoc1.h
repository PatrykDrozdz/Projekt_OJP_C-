#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pomoc
	/// </summary>
	public ref class Pomoc : public System::Windows::Forms::Form
	{
	public:
		Pomoc(void)
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
		~Pomoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  opis;
	protected:

	protected:


	protected:


	protected:


	protected:

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
			this->opis = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// opis
			// 
			this->opis->AutoSize = true;
			this->opis->Location = System::Drawing::Point(149, 326);
			this->opis->Name = L"opis";
			this->opis->Size = System::Drawing::Size(35, 13);
			this->opis->TabIndex = 0;
			this->opis->Text = "Aplikacja, kt�ra ma na celu ustalenie, jaka rasa psa\npasuje do Ciebie najbardziej.Program dzia�a na zasadzie ankiety :\nwypelnia si� radiobuttony z liczbami 1 - 5 B�dzie to ocena pod\nwzgl�dem : inteligencji, aktywno�ci, str�zowania, obrony, potrzeb\nsocjalnych psa oraztresowalno�ci.Mi�ego testu : )";
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 498);
			this->Controls->Add(this->opis);
			this->MaximizeBox = false;
			this->Name = L"Pomoc";
			this->Text = L"Pomoc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

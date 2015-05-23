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
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pomoc::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 306);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = "Aplikacja, która ma na celu ustalenie, jaka rasa psa\n pasuje do Ciebie najbardziej.Program dzia³a na zasadzie ankiety :\nwypelnia siê radiobuttony z liczbami 1 - 5 Bêdzie to ocena pod\nwzglêdem : inteligencji, aktywnoœci, strózowania, obrony, potrzeb\nsocjalnych psa oraztresowalnoœci.Mi³ego testu : )";
			// 
			// Pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 498);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Pomoc";
			this->Text = L"Pomoc";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

#pragma once

namespace PractycumLB22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(79, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"катет = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(298, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(223, 176);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(203, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"гіпотенузу =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(106, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 65);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Знайти протилежний катет";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(298, 75);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(144, 65);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Знайти площу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(127, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Відповідь =";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(142, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 23);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(323, 222);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Вихід";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(563, 271);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Кучер Євгеній ІПЗ-23-1";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double katet1, hypotenuse;

		String^ inputKatet1 = textBox1->Text;
		String^ inputHypotenuse = textBox2->Text;
		// Знаходження значення протилежного катета прямокутного трикутника
		if (!Double::TryParse(inputKatet1, katet1) || !Double::TryParse(inputHypotenuse, hypotenuse)) {
			MessageBox::Show(this, "Ви ввели не те значення!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			katet1 = Convert::ToDouble(textBox1->Text);
			hypotenuse = Convert::ToDouble(textBox2->Text);
			textBox3->Text = Convert::ToString(Math::Sqrt(Math::Pow(hypotenuse, 2) - Math::Pow(katet1, 2)));
		}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double katet1, katet2, hypotenuse;

	String^ inputKatet1 = textBox1->Text;
	String^ inputHypotenuse = textBox2->Text;
	// Знаходження значення площи прямокутного трикутника
	if (!Double::TryParse(inputKatet1, katet1) || !Double::TryParse(inputHypotenuse, hypotenuse)) {
		MessageBox::Show(this, "Ви ввели не те значення!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		katet1 = Convert::ToDouble(textBox1->Text);
		hypotenuse = Convert::ToDouble(textBox2->Text);
		katet2 = Convert::ToDouble(Math::Sqrt(Math::Pow(hypotenuse, 2) - Math::Pow(katet1, 2)));
		textBox3->Text = Convert::ToString((katet1 * katet2) / 2);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear(); textBox2->Clear(); textBox3->Clear();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}

#pragma once
#include <cstdlib>

namespace LB3Practycum {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//

		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íîâèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåäàãóâàííÿToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^ ğîçğàõóíîêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğîçğàõóâàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ toolStripButtonInput;


	private: System::Windows::Forms::ToolStripMenuItem^ ñòåğòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBoxInput;
	private: System::Windows::Forms::TextBox^ textBoxOutput;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem;



	private: System::ComponentModel::IContainer^ components;








	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ñòåğòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íîâèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàãóâàííÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîçğàõóíîêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğîçğàõóâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->âèõ³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripTextBoxInput = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButtonInput = (gcnew System::Windows::Forms::ToolStripButton());
			this->textBoxOutput = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(15, 184);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(286, 329);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(265, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 44);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ğîçğàõóíîê";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(141, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Çíà÷åííÿ z:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Çíà÷åííÿ Q:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(531, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Ôóíêö³ÿ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ContextMenuStrip = this->contextMenuStrip1;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(470, 76);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(395, 79);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ñòåğòèToolStripMenuItem,
					this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(255, 80);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// ñòåğòèToolStripMenuItem
			// 
			this->ñòåğòèToolStripMenuItem->Name = L"ñòåğòèToolStripMenuItem";
			this->ñòåğòèToolStripMenuItem->Size = System::Drawing::Size(254, 24);
			this->ñòåğòèToolStripMenuItem->Text = L"Ïîêàçàòè çîîáğàæåííÿ";
			this->ñòåğòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ô³âToolStripMenuItem_Click);
			// 
			// ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem
			// 
			this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem->Name = L"ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem";
			this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem->Size = System::Drawing::Size(254, 24);
			this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem->Text = L"Ïğèõîâàòè çîîáğàæåííÿ";
			this->ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(347, 155);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(707, 358);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ôàéëToolStripMenuItem,
					this->ğåäàãóâàííÿToolStripMenuItem, this->äîâ³äêàToolStripMenuItem, this->ğîçğàõóíîêToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1094, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íîâèéToolStripMenuItem,
					this->â³äêğèòèToolStripMenuItem, this->toolStripSeparator1, this->âèõ³äToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			this->ôàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôàéëToolStripMenuItem_Click);
			// 
			// íîâèéToolStripMenuItem
			// 
			this->íîâèéToolStripMenuItem->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->íîâèéToolStripMenuItem->Name = L"íîâèéToolStripMenuItem";
			this->íîâèéToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->íîâèéToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->íîâèéToolStripMenuItem->Text = L"Íîâèé";
			this->íîâèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::íîâèéToolStripMenuItem_Click);
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(150, 6);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(153, 26);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
			// 
			// ğåäàãóâàííÿToolStripMenuItem
			// 
			this->ğåäàãóâàííÿToolStripMenuItem->Name = L"ğåäàãóâàííÿToolStripMenuItem";
			this->ğåäàãóâàííÿToolStripMenuItem->Size = System::Drawing::Size(110, 24);
			this->ğåäàãóâàííÿToolStripMenuItem->Text = L"Ğåäàãóâàííÿ";
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// ğîçğàõóíîêToolStripMenuItem
			// 
			this->ğîçğàõóíîêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->î÷èñòèòèToolStripMenuItem,
					this->ğîçğàõóâàòèToolStripMenuItem, this->toolStripSeparator2, this->âèõ³ToolStripMenuItem
			});
			this->ğîçğàõóíîêToolStripMenuItem->Name = L"ğîçğàõóíîêToolStripMenuItem";
			this->ğîçğàõóíîêToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->ğîçğàõóíîêToolStripMenuItem->Text = L"Ğîçğàõóíîê";
			this->ğîçğàõóíîêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğîçğàõóíîêToolStripMenuItem_Click);
			// 
			// î÷èñòèòèToolStripMenuItem
			// 
			this->î÷èñòèòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"î÷èñòèòèToolStripMenuItem.Image")));
			this->î÷èñòèòèToolStripMenuItem->Name = L"î÷èñòèòèToolStripMenuItem";
			this->î÷èñòèòèToolStripMenuItem->ShortcutKeyDisplayString = L"Alt + O";
			this->î÷èñòèòèToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->î÷èñòèòèToolStripMenuItem->Text = L"Î÷èñòèòè";
			this->î÷èñòèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::î÷èñòèòèToolStripMenuItem_Click);
			// 
			// ğîçğàõóâàòèToolStripMenuItem
			// 
			this->ğîçğàõóâàòèToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ğîçğàõóâàòèToolStripMenuItem.Image")));
			this->ğîçğàõóâàòèToolStripMenuItem->Name = L"ğîçğàõóâàòèToolStripMenuItem";
			this->ğîçğàõóâàòèToolStripMenuItem->ShortcutKeyDisplayString = L"Ctrl + Alt + C";
			this->ğîçğàõóâàòèToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->ğîçğàõóâàòèToolStripMenuItem->Text = L"Ğîçğàõóâàòè";
			this->ğîçğàõóâàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğîçğàõóâàòèToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(271, 6);
			// 
			// âèõ³ToolStripMenuItem
			// 
			this->âèõ³ToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"âèõ³ToolStripMenuItem.Image")));
			this->âèõ³ToolStripMenuItem->Name = L"âèõ³ToolStripMenuItem";
			this->âèõ³ToolStripMenuItem->ShortcutKeyDisplayString = L"Alt + F4";
			this->âèõ³ToolStripMenuItem->Size = System::Drawing::Size(274, 26);
			this->âèõ³ToolStripMenuItem->Text = L"Âèõ³ä";
			this->âèõ³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³ToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripLabel1,
					this->toolStripTextBoxInput, this->toolStripButtonInput
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1094, 27);
			this->toolStrip1->TabIndex = 11;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(103, 24);
			this->toolStripLabel1->Text = L"Ââåä³òü íàçâó";
			// 
			// toolStripTextBoxInput
			// 
			this->toolStripTextBoxInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBoxInput->Name = L"toolStripTextBoxInput";
			this->toolStripTextBoxInput->Size = System::Drawing::Size(100, 27);
			// 
			// toolStripButtonInput
			// 
			this->toolStripButtonInput->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButtonInput->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButtonInput.Image")));
			this->toolStripButtonInput->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButtonInput->Name = L"toolStripButtonInput";
			this->toolStripButtonInput->Size = System::Drawing::Size(29, 24);
			this->toolStripButtonInput->Text = L"toolStripButton1";
			this->toolStripButtonInput->Click += gcnew System::EventHandler(this, &MyForm::toolStripButtonInput_Click);
			// 
			// textBoxOutput
			// 
			this->textBoxOutput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxOutput->Location = System::Drawing::Point(436, 33);
			this->textBoxOutput->Name = L"textBoxOutput";
			this->textBoxOutput->ReadOnly = true;
			this->textBoxOutput->Size = System::Drawing::Size(235, 34);
			this->textBoxOutput->TabIndex = 12;
			this->textBoxOutput->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxOutput_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1094, 551);
			this->Controls->Add(this->textBoxOutput);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->Name = L"MyForm";
			this->Text = L"Ëàáîğàòîğíà ôîğìà";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*double a = -10;
		double b = 10;
		double h = 0.1;
		double x = a;
		this->chart1->Series[0]->Points->Clear();
		while (x <= b) {
			double y = Math::Cos(x);
			this->chart1->Series[0]->Points->AddXY(x, y);
			x += h;
		}*/
		double Xn = -3;
		double Xk = 3;
		double Dx = 0.3;
		double x = Xn;
		double z, Q;
		double A[20][2];
		int i = 0;
		int j = 0;
		
		String^ Inputz = textBox1->Text;
		String^ InputQ = textBox2->Text;
		if (!Double::TryParse(Inputz, z) || !Double::TryParse(InputQ, Q))
			MessageBox::Show(this, "Âè ââåëè íå òå çíà÷åííÿ!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		z = Convert::ToDouble(textBox1->Text);
		Q = Convert::ToDouble(textBox2->Text);

		//if (Q > )


		//Çàäàºòüñÿ ê³ëüê³ñòü ñòîâïö³â ³ ğÿäê³â
		dataGridView1->ColumnCount = 2;
		dataGridView1->RowCount = 20;

		//Çàäàºòñüÿ íàçâà ñòîâïö³â
		dataGridView1->Columns[0]->Name = "x";
		dataGridView1->Columns[1]->Name = "y";
		//Î÷èùåííÿ ãğàô³êà ïåğåä ğîáîòîş
		this->chart1->Series[0]->Points->Clear();
		//Áóäîâà ãğàô³êà
		while (Math::Abs(x - Xk) > 1e-6) {
			if (x > Q) {
				double y = Math::Pow(41 * x, 1.0 / 3);
				this->chart1->Series[0]->Points->AddXY(x, y);
				//Çàïèñ ÷èñåë â ìàñèâ äëÿ òàáëèö³
				A[i][j] = x;
				A[i][j + 1] = y;
				x += Dx;
			}
			else if (x <= Q) {
				double y = (z - x) * Math::Cos(x);
				this->chart1->Series[0]->Points->AddXY(x, y);
				//Çàïèñ ÷èñåë â ìàñèâ äëÿ òàáëèö³
				A[i][j] = x;
				A[i][j + 1] = y;
				x += Dx;
			}
			i++;
		}
		//Âèâ³ä òàáëèö³
		for (int rows = 0; rows < 20; rows++) 
			for (int columns = 0; columns < 2; columns++) 
				dataGridView1->Rows[rows]->Cells[columns]->Value = Convert::ToString(A[rows][columns]);
	}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { 
}
private: System::Void ôàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void âèõ³äToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
	this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(152, 22);
	this->âèõ³äToolStripMenuItem->Text = L"Âè&õ³ä";
	this->âèõ³äToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèõ³äToolStripMenuItem_Click);
}
private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void íîâèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ğîçğàõóíîêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void âèõ³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ô³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Show();
}
private: System::Void î÷èñòèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->chart1->Series[0]->Points->Clear();
	this->textBox1->Clear();
	this->textBox2->Clear();
}
private: System::Void ñòåğòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ğîçğàõóâàòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
}
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {

}
private: System::Void toolStripButtonInput_Click(System::Object^ sender, System::EventArgs^ e) {
	if (toolStripTextBoxInput->Text == "") {
		MessageBox::Show("Âè íå ââåëè òåñò!", "Ïîìèëêà");
		return;
	}
	textBoxOutput->Text = toolStripTextBoxInput->Text;
}
private: System::Void textBoxOutput_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ïğèõîâàòèÇîîáğàæåííÿToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Hide();
}
};
}

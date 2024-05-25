#pragma once
#include <cstdlib>
#include<ctime>

int a[100]; int n, m,  i, j, dop, max;

namespace Project1 {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ заповнитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ заповнитиВипадковимиЧисламиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сортуванняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ методомToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ найбільшийЕлементМасивуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проАвтораToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ рожевийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ жовтийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очищенняToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиВсеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ синійToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ чорнийToolStripMenuItem;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->заповнитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->заповнитиВипадковимиЧисламиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сортуванняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->методомToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->найбільшийЕлементМасивуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очищенняToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиВсеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проАвтораToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->рожевийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->жовтийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->синійToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->чорнийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(379, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введіть кількість елементів  масиву n=";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(463, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 34);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(305, 146);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(399, 30);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(77, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(185, 66);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(77, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(185, 68);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Сортувати масив";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(77, 327);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(185, 68);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Найбільший елемент масиву";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(305, 249);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(399, 30);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(305, 342);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(104, 34);
			this->textBox4->TabIndex = 8;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->заповнитиToolStripMenuItem,
					this->сортуванняToolStripMenuItem, this->проПрограмуToolStripMenuItem, this->очищенняToolStripMenuItem, this->довідкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(757, 28);
			this->menuStrip1->TabIndex = 9;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// заповнитиToolStripMenuItem
			// 
			this->заповнитиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->заповнитиВипадковимиЧисламиToolStripMenuItem });
			this->заповнитиToolStripMenuItem->Name = L"заповнитиToolStripMenuItem";
			this->заповнитиToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->заповнитиToolStripMenuItem->Text = L"Заповнити";
			// 
			// заповнитиВипадковимиЧисламиToolStripMenuItem
			// 
			this->заповнитиВипадковимиЧисламиToolStripMenuItem->Name = L"заповнитиВипадковимиЧисламиToolStripMenuItem";
			this->заповнитиВипадковимиЧисламиToolStripMenuItem->Size = System::Drawing::Size(330, 26);
			this->заповнитиВипадковимиЧисламиToolStripMenuItem->Text = L"Заповнити випадковими числами";
			this->заповнитиВипадковимиЧисламиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// сортуванняToolStripMenuItem
			// 
			this->сортуванняToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->методомToolStripMenuItem });
			this->сортуванняToolStripMenuItem->Name = L"сортуванняToolStripMenuItem";
			this->сортуванняToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->сортуванняToolStripMenuItem->Text = L"Сортування";
			// 
			// методомToolStripMenuItem
			// 
			this->методомToolStripMenuItem->Name = L"методомToolStripMenuItem";
			this->методомToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->методомToolStripMenuItem->Text = L"Методом обміну";
			this->методомToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->найбільшийЕлементМасивуToolStripMenuItem });
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(109, 24);
			this->проПрограмуToolStripMenuItem->Text = L"Обчислення";
			// 
			// найбільшийЕлементМасивуToolStripMenuItem
			// 
			this->найбільшийЕлементМасивуToolStripMenuItem->Name = L"найбільшийЕлементМасивуToolStripMenuItem";
			this->найбільшийЕлементМасивуToolStripMenuItem->Size = System::Drawing::Size(295, 26);
			this->найбільшийЕлементМасивуToolStripMenuItem->Text = L"Найбільший елемент масиву";
			// 
			// очищенняToolStripMenuItem
			// 
			this->очищенняToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->очиститиВсеToolStripMenuItem });
			this->очищенняToolStripMenuItem->Name = L"очищенняToolStripMenuItem";
			this->очищенняToolStripMenuItem->Size = System::Drawing::Size(97, 24);
			this->очищенняToolStripMenuItem->Text = L"Очищення";
			// 
			// очиститиВсеToolStripMenuItem
			// 
			this->очиститиВсеToolStripMenuItem->Name = L"очиститиВсеToolStripMenuItem";
			this->очиститиВсеToolStripMenuItem->Size = System::Drawing::Size(184, 26);
			this->очиститиВсеToolStripMenuItem->Text = L"Очистити все";
			this->очиститиВсеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// довідкаToolStripMenuItem
			// 
			this->довідкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->проАвтораToolStripMenuItem,
					this->проПрограмуToolStripMenuItem1
			});
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			// 
			// проАвтораToolStripMenuItem
			// 
			this->проАвтораToolStripMenuItem->Name = L"проАвтораToolStripMenuItem";
			this->проАвтораToolStripMenuItem->Size = System::Drawing::Size(196, 26);
			this->проАвтораToolStripMenuItem->Text = L"Про автора:";
			this->проАвтораToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проАвтораToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem1
			// 
			this->проПрограмуToolStripMenuItem1->Name = L"проПрограмуToolStripMenuItem1";
			this->проПрограмуToolStripMenuItem1->Size = System::Drawing::Size(196, 26);
			this->проПрограмуToolStripMenuItem1->Text = L"Про програму:";
			this->проПрограмуToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(514, 395);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(190, 61);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Очищення";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->рожевийToolStripMenuItem,
					this->жовтийToolStripMenuItem, this->синійToolStripMenuItem, this->чорнийToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(160, 100);
			// 
			// рожевийToolStripMenuItem
			// 
			this->рожевийToolStripMenuItem->Name = L"рожевийToolStripMenuItem";
			this->рожевийToolStripMenuItem->Size = System::Drawing::Size(159, 24);
			this->рожевийToolStripMenuItem->Text = L"Рожевий";
			this->рожевийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::рожевийToolStripMenuItem_Click);
			// 
			// жовтийToolStripMenuItem
			// 
			this->жовтийToolStripMenuItem->Name = L"жовтийToolStripMenuItem";
			this->жовтийToolStripMenuItem->Size = System::Drawing::Size(159, 24);
			this->жовтийToolStripMenuItem->Text = L"Жовтий";
			this->жовтийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::жовтийToolStripMenuItem_Click);
			// 
			// синійToolStripMenuItem
			// 
			this->синійToolStripMenuItem->Name = L"синійToolStripMenuItem";
			this->синійToolStripMenuItem->Size = System::Drawing::Size(159, 24);
			this->синійToolStripMenuItem->Text = L"Фіолетовий";
			this->синійToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::фіолетовийToolStripMenuItem_Click);
			// 
			// чорнийToolStripMenuItem
			// 
			this->чорнийToolStripMenuItem->Name = L"чорнийToolStripMenuItem";
			this->чорнийToolStripMenuItem->Size = System::Drawing::Size(159, 24);
			this->чорнийToolStripMenuItem->Text = L"Блакитний";
			this->чорнийToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::блакитнийToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(757, 507);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->button4);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(time(NULL));
		n = Convert::ToDouble(textBox1->Text);
		textBox2->Clear();
		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 50;
			textBox2->AppendText(a[i] + " ");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		for (i = 0; i < n; i++) {
			for (j = 0; j < n - 1; j++) {
				for (int i = 0; i < n - j - 1; i++) {
					if (a[i] < a[i + 1]) {
						dop = a[i + 1];
						a[i + 1] = a[i];
						a[i] = dop;
					}
				}
			}
		}
		textBox4->Clear();
		for (i = 0; i < n; i++) {

			textBox3
				->AppendText(Convert::ToString(a[i])
					+ " ");
		};
	}
	private: System::Void проАвтораToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Автор: Чорна Любов\n Електронна адреса: chornaluiba18@gmail.com");
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
	}
	private: System::Void проПрограмуToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Програма яка виконує таке завдання:\n Знайти найбільший елемент одновимірного масиву. Виконати сортування елементів масиву за спаданням, використовуючи метод обміну.");
	}
	private: System::Void рожевийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::LightPink;
	}
	private: System::Void жовтийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::Yellow;
	}

	private: System::Void фіолетовийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::BlueViolet;
	}

	private: System::Void блакитнийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::AliceBlue;
	}
    private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int max = a[0]; // Початкове значення максимуму - перший елемент масиву
	for (int i = 1; i < n; i++) // Починаємо з першого індексу, оскільки максимум вже взяли за початкове значення
	{
		if (a[i] > max) // Порівнюємо поточний елемент з максимумом
		{
			max = a[i]; // Якщо поточний елемент більший за максимум, змінюємо максимум
		}
	}
	textBox4->Text = max.ToString(); // Виводимо максимум у textBox4
}
};
}
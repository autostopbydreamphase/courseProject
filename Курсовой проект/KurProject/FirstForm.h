#pragma once
#include "Offers.h"
namespace KurProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FirstForm
	/// </summary>
	public ref class FirstForm : public System::Windows::Forms::Form
	{
	private:
		bool aOpened; // Ссылка на форму O
		Offers^ o; // Поле класса для хранения ссылки на форму "a"
	private: System::Windows::Forms::ToolStripMenuItem^ изменениеЯзыкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ русскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ английскийToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ белорусскийToolStripMenuItem;
		   bool oOpened; // Ссылка на форму O
	public:
		FirstForm(String^ value1, String^ value2)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			SetFirstSelectedValues(value1, value2);
			o = nullptr;
			oOpened = false;
			if (value1 == "Английский") {
				this->label1->Text = "    Medical\r\n  indications\r\n";
				this->label2->Text = "  Place an \r\n    Order";
				this->label4->Text = "Choose the massage you need";
				this->белорусскийToolStripMenuItem->Text = "Belorussian";
				this->английскийToolStripMenuItem->Text = "English";
				this->русскийToolStripMenuItem->Text = "Russian";
				this->изменениеЯзыкаToolStripMenuItem->Text = "Change language";
				this->изменениеЦветаToolStripMenuItem->Text = "Change background color";
				this->мятныйToolStripMenuItem->Text = "Mint";
				this->оливковыйToolStripMenuItem->Text = "Olive";
				this->лавандовыйToolStripMenuItem->Text = "Lavanda";
				listBox1->Items->Clear();
				listBox1->Items->Add("Classic");
				listBox1->Items->Add("Child");
				listBox1->Items->Add("Therapeutic");
				listBox1->Items->Add("Cosmetological");
				listBox1->Items->Add("Honey");
				listBox1->Items->Add("Sports");
				listBox1->Items->Add("Trigger point");
				listBox1->Items->Add("Mechanical");
				listBox1->Items->Add("Aromatherapy");
				listBox1->Items->Add("Stone therapy");
			}
			if (value1 == "Русский") {
				this->label1->Text = "Медицинские\r\n  показания\r\n";
				this->label2->Text = "Оформить\r\n    заказ";
				this->label4->Text = "Выберите нужный вам массаж";
				this->белорусскийToolStripMenuItem->Text = "Белорусский";
				this->английскийToolStripMenuItem->Text = "Английский";
				this->русскийToolStripMenuItem->Text = "Русский";
				this->изменениеЯзыкаToolStripMenuItem->Text = "Изменение языка";
				this->изменениеЦветаToolStripMenuItem->Text = "Изменение цвета";
				this->мятныйToolStripMenuItem->Text = "Мятный";
				this->оливковыйToolStripMenuItem->Text = "Оливковый";
				this->лавандовыйToolStripMenuItem->Text = "Лавандовый";
				listBox1->Items->Clear();
				listBox1->Items->Add("Классический");
				listBox1->Items->Add("Детский");
				listBox1->Items->Add("Лечебный");
				listBox1->Items->Add("Косметологический");
				listBox1->Items->Add("Медовый");
				listBox1->Items->Add("Спортивный");
				listBox1->Items->Add("Точечный");
				listBox1->Items->Add("Аппаратный");
				listBox1->Items->Add("Аромамассаж");
				listBox1->Items->Add("Стоун-терапия");
			}
			if (value1 == "Белорусский") {
				this->label1->Text = "Медыцынскія\r\n  сведчанні\r\n";
				this->label2->Text = "  Аформіць\r\n     заказ";
				this->label4->Text = "Абярыце патрэбны вам масаж";
				this->белорусскийToolStripMenuItem->Text = "Беларускі";
				this->английскийToolStripMenuItem->Text = "Англійскi";
				this->русскийToolStripMenuItem->Text = "Рускі";
				this->изменениеЯзыкаToolStripMenuItem->Text = "Змяненне мовы";
				this->изменениеЦветаToolStripMenuItem->Text = "Змяненне колеру";
				this->мятныйToolStripMenuItem->Text = "Мятны";
				this->оливковыйToolStripMenuItem->Text = "Аліўковы";
				this->лавандовыйToolStripMenuItem->Text = "Лавандовы";
				listBox1->Items->Clear();
				listBox1->Items->Add("Класічны");
				listBox1->Items->Add("Дзіцячы");
				listBox1->Items->Add("Лячэбны");
				listBox1->Items->Add("Касметалагічны");
				listBox1->Items->Add("Мёдавы");
				listBox1->Items->Add("Спартыўны");
				listBox1->Items->Add("Кропкавы");
				listBox1->Items->Add("Механічны");
				listBox1->Items->Add("Ароматэрапія");
				listBox1->Items->Add("Камянявая тэрапія");
			}
			if (value2 == "Мятный")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstMint.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
					static_cast<System::Int32>(static_cast<System::Byte>(151)));
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
					static_cast<System::Int32>(static_cast<System::Byte>(151)));
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
					static_cast<System::Int32>(static_cast<System::Byte>(172)));
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(240)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(240)));
				this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
					static_cast<System::Int32>(static_cast<System::Byte>(172)));
				this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
					static_cast<System::Int32>(static_cast<System::Byte>(172)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));*///кнопка
					/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
						static_cast<System::Int32>(static_cast<System::Byte>(240)));*///фон
			}
			if (value2 == "Лавандовый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstLavanda.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
					static_cast<System::Int32>(static_cast<System::Byte>(176)));
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));
				this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
					static_cast<System::Int32>(static_cast<System::Byte>(176)));
				this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
					static_cast<System::Int32>(static_cast<System::Byte>(176)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));*///кнопка
					/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
						static_cast<System::Int32>(static_cast<System::Byte>(226)));*///фон
			}
			if (value2 == "Оливковый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstOlive.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));
				this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));
				this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));*///кнопка
					/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
						static_cast<System::Int32>(static_cast<System::Byte>(226)));*///фон

			}
		}

		//void ShowForm2() {
		//	Form2^ form2 = gcnew Form2();
		//	form2->Show();

		//	this->Hide();
		//}

		//void ShowForm1() {
		//	this->Show();
		//}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FirstForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ изменениеЦветаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ лавандовыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оливковыйToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ мятныйToolStripMenuItem;
	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FirstForm::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->изменениеЦветаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лавандовыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оливковыйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->мятныйToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменениеЯзыкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->русскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->английскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->белорусскийToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 14));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 25;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Классический", L"Детский", L"Лечебный", L"Косметологический",
					L"Медовый", L"Спортивный", L"Точечный", L"Аппаратный", L"Аромамассаж", L"Стоун-терапия"
			});
			this->listBox1->Location = System::Drawing::Point(0, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(283, 300);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &FirstForm::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(28, 449);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Медицинские\r\n  показания\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &FirstForm::label1_Click);
			this->label1->MouseEnter += gcnew System::EventHandler(this, &FirstForm::label1_MouseEnter);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &FirstForm::label1_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(38, 510);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 38);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Оформить\r\n    заказ";
			this->label2->Click += gcnew System::EventHandler(this, &FirstForm::label2_Click);
			this->label2->MouseEnter += gcnew System::EventHandler(this, &FirstForm::label2_MouseEnter);
			this->label2->MouseLeave += gcnew System::EventHandler(this, &FirstForm::label2_MouseLeave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 32));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->label3->Location = System::Drawing::Point(-39, 558);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(188, 59);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Аккаунт\r\n";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.5F));
			this->label4->Location = System::Drawing::Point(163, 393);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(359, 317);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Выберите нужный вам массаж\r\n";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->изменениеЦветаToolStripMenuItem,
					this->изменениеЯзыкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 29);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// изменениеЦветаToolStripMenuItem
			// 
			this->изменениеЦветаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->лавандовыйToolStripMenuItem,
					this->оливковыйToolStripMenuItem, this->мятныйToolStripMenuItem
			});
			this->изменениеЦветаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.5F));
			this->изменениеЦветаToolStripMenuItem->Name = L"изменениеЦветаToolStripMenuItem";
			this->изменениеЦветаToolStripMenuItem->Size = System::Drawing::Size(155, 25);
			this->изменениеЦветаToolStripMenuItem->Text = L"Изменение цвета";
			// 
			// лавандовыйToolStripMenuItem
			// 
			this->лавандовыйToolStripMenuItem->Name = L"лавандовыйToolStripMenuItem";
			this->лавандовыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->лавандовыйToolStripMenuItem->Text = L"Лавандовый";
			this->лавандовыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::лавандовыйToolStripMenuItem_Click);
			// 
			// оливковыйToolStripMenuItem
			// 
			this->оливковыйToolStripMenuItem->Name = L"оливковыйToolStripMenuItem";
			this->оливковыйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->оливковыйToolStripMenuItem->Text = L"Оливковый";
			this->оливковыйToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::оливковыйToolStripMenuItem_Click);
			// 
			// мятныйToolStripMenuItem
			// 
			this->мятныйToolStripMenuItem->Name = L"мятныйToolStripMenuItem";
			this->мятныйToolStripMenuItem->Size = System::Drawing::Size(175, 26);
			this->мятныйToolStripMenuItem->Text = L"Мятный";
			this->мятныйToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::мятныйToolStripMenuItem_Click);
			// 
			// изменениеЯзыкаToolStripMenuItem
			// 
			this->изменениеЯзыкаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->русскийToolStripMenuItem,
					this->английскийToolStripMenuItem, this->белорусскийToolStripMenuItem
			});
			this->изменениеЯзыкаToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 11.5F));
			this->изменениеЯзыкаToolStripMenuItem->Name = L"изменениеЯзыкаToolStripMenuItem";
			this->изменениеЯзыкаToolStripMenuItem->Size = System::Drawing::Size(156, 25);
			this->изменениеЯзыкаToolStripMenuItem->Text = L"Изменение языка";
			// 
			// русскийToolStripMenuItem
			// 
			this->русскийToolStripMenuItem->Name = L"русскийToolStripMenuItem";
			this->русскийToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->русскийToolStripMenuItem->Text = L"Русский";
			this->русскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::русскийToolStripMenuItem_Click);
			// 
			// английскийToolStripMenuItem
			// 
			this->английскийToolStripMenuItem->Name = L"английскийToolStripMenuItem";
			this->английскийToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->английскийToolStripMenuItem->Text = L"Английский";
			this->английскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::английскийToolStripMenuItem_Click);
			// 
			// белорусскийToolStripMenuItem
			// 
			this->белорусскийToolStripMenuItem->Name = L"белорусскийToolStripMenuItem";
			this->белорусскийToolStripMenuItem->Size = System::Drawing::Size(180, 26);
			this->белорусскийToolStripMenuItem->Text = L"Белорусский";
			this->белорусскийToolStripMenuItem->Click += gcnew System::EventHandler(this, &FirstForm::белорусскийToolStripMenuItem_Click);
			// 
			// FirstForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(550, 800);
			this->MinimumSize = System::Drawing::Size(550, 800);
			this->Name = L"FirstForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Type of massage";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
private:
	String^ FirstSelectedLanguage;
	String^ FirstSelectedColor;
public:
	void SetFirstSelectedValues(String^ value1, String^ value2)
	{
		FirstSelectedLanguage = value1;
		FirstSelectedColor = value2;
	}


	public: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e)/*Offers*/ {
	if (!oOpened) {
		String^ selectedType = listBox1->SelectedItem != nullptr ? listBox1->SelectedItem->ToString() : nullptr;
		o = gcnew Offers(FirstSelectedLanguage, FirstSelectedColor,selectedType);
		o->FormClosed += gcnew FormClosedEventHandler(this, &FirstForm::FormClosedHandlerB);// Подписываемся на событие FormClosed для "b"
		if (listBox1->SelectedItem != nullptr) {
			// Получаем значение выбранного элемента в переменную типа String^
			String^ selectedValue = listBox1->SelectedItem != nullptr ? listBox1->SelectedItem->ToString() : nullptr;

			// Передаем значение второй форме через ее свойство или метод
			//o->SetSelectedValue(selectedValue);

			// Открываем Form2
			o->Show();
		}
		oOpened = true;
	}
	else {
		MessageBox::Show("Экземпляр уже открыт.", "Предупреждение", MessageBoxButtons::OK);
	}
	}
	void FormClosedHandlerB(System::Object^ sender, FormClosedEventArgs^ e) {
		oOpened = false; // Изменяем значение bOpened на false при закрытии формы "b"
	}

	private: System::Void label2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = Color::DarkSlateGray;
	}
	private: System::Void label2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label2->ForeColor = Color::White;
	}
	private: System::Void label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::DarkSlateGray;
	}
	private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::White;
	}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		// Получение выбранного значения из списка
		String^ selectedValue = listBox1->SelectedItem != nullptr ? listBox1->SelectedItem->ToString() : nullptr;
		if (selectedValue == nullptr)
		{
			MessageBox::Show("Выберите тип массажа", "Ошибка", MessageBoxButtons::OK);
		}
		// Изменение текста в метке в зависимости от выбранного значения
		if (selectedValue == "Классический") {
			label4->Text = "Классический массаж - это один из самых распространенных видов массажа, который широко применяется в медицине, спорте и сфере релаксации. Он выполняется с использованием различных приемов и техник, направленных на улучшение общего состояния организма, снятие напряжения и стресса, улучшение кровообращения и общей мышечной тонуса.";
		}
		else if (selectedValue == "Детский") {
			label4->Text = "Детский массаж - это специальная форма массажа, которая применяется для улучшения здоровья и благополучия детей. Он основан на нежных и мягких прикосновениях, а также на техниках, направленных на стимуляцию развития ребенка и его физического, эмоционального и психологического благополучия.";
		}
		else if (selectedValue == "Лечебный") {
			label4->Text = "Лечебный массаж - это вид массажа, осуществляемый с целью лечения различных заболеваний и состояний. Он выполняется специально обученными массажистами или физиотерапевтами и может применяться в медицинских учреждениях, реабилитационных центрах или у врачей-массажистов.";
		}
		else if (selectedValue == "Косметологический") {
			label4->Text = "Косметологический массаж - это процедура, выполняемая специалистом в области косметологии с целью улучшения состояния кожи лица и тела. Он направлен на стимуляцию кровообращения, улучшение обмена веществ, укрепление мышц, повышение тонуса и улучшение общего внешнего вида кожи.";
		}
		else if (selectedValue == "Медовый") {
			label4->Text = "Медовый массаж - это вид массажа, в котором используется мед в качестве основного ингредиента. При выполнении медового массажа, массажист наносит мед на кожу и затем проводит различные массажные приемы, такие как разминание, поглаживание и вибрация.Мед обладает рядом полезных свойств, таких как антисептическое, противовоспалительное и увлажняющее действие.Он способствует улучшению кровообращения, разогревает ткани, помогает удалить шлаки и токсины из организма.";
		}
		else if (selectedValue == "Спортивный") {
			label4->Text = "Спортивный массаж - это специальный вид массажа, который применяется в спортивной медицине для подготовки спортсменов к физическим нагрузкам, улучшения их спортивных результатов и восстановления после тренировок или соревнований.Он выполняется специалистом - массажистом, обладающим знаниями о физиологии и особенностях спортивных тренировок.";
		}
		else if (selectedValue == "Точечный") {
			label4->Text = "Точечный массаж, также известный как акупрессура или точечное давление, является техникой массажа, при которой на определенные точки тела оказывается давление для достижения определенных эффектов. Эта методика основана на принципах традиционной китайской медицины и акупунктуры.";
		}
		else if (selectedValue == "Аппаратный") {
			label4->Text = "Аппаратный массаж - это вид массажа, при котором используются специальные массажные аппараты или приборы для осуществления массажных воздействий на ткани тела. Этот вид массажа позволяет достичь глубокого и точечного воздействия на мышцы, суставы и другие ткани.";
		}
		else if (selectedValue == "Аромамассаж") {
			label4->Text = "Аромамассаж - это вид массажа, который сочетает в себе техники массажа с использованием ароматических масел или эфирных масел. Он предлагает не только физическое, но и ароматическое воздействие на организм, создавая приятную и расслабляющую атмосферу.";
		}
		else if (selectedValue == "Стоун-терапия") {
			label4->Text = "Стоун-терапия, также известная как горячий камень массаж, является видом массажа, в котором используются гладкие и нагретые камни для достижения расслабления и терапевтического эффекта. Этот метод массажа является одним из старейших и распространенных в мире.";
		}
		if (selectedValue == "Classic") {
			label4->Text = "Classic massage is one of the most common types of massage that is widely used in medicine, sports, and relaxation. It involves various techniques aimed at improving the overall well-being, relieving tension and stress, enhancing blood circulation, and muscle tone.";
		}
		else if (selectedValue == "Child") {
			label4->Text = "Child massage is a special form of massage that is applied to improve the health and well-being of children. It is based on gentle and soft touches, as well as techniques aimed at stimulating the child's development and their physical, emotional, and psychological well-being.";
		}
		else if (selectedValue == "Therapeutic") {
			label4->Text = "Therapeutic massage is a type of massage performed for the treatment of various conditions and ailments. It is carried out by specially trained massage therapists or physiotherapists and can be applied in medical institutions, rehabilitation centers, or by massage therapists.";
		}
		else if (selectedValue == "Cosmetological") {
			label4->Text = "Cosmetological massage is a procedure performed by a specialist in the field of cosmetology to improve the condition of the facial and body skin. It aims to stimulate blood circulation, improve metabolism, strengthen muscles, enhance tone, and enhance the overall appearance of the skin.";
		}
		else if (selectedValue == "Honey") {
			label4->Text = "Honey massage is a type of massage where honey is used as the main ingredient. During honey massage, the masseur applies honey to the skin and performs various massage techniques such as rubbing, stroking, and vibration. Honey has several beneficial properties, such as antiseptic, anti-inflammatory, and moisturizing effects. It helps improve blood circulation, warms tissues, and helps remove toxins and waste products from the body.";
		}
		else if (selectedValue == "Sports") {
			label4->Text = "Sports massage is a specialized type of massage used in sports medicine to prepare athletes for physical exertion, improve their athletic performance, and aid in recovery after training or competitions. It is performed by a specialist massage therapist with knowledge of physiology and the specific demands of sports training.";
		}
		else if (selectedValue == "Trigger point") {
			label4->Text = "Trigger point massage, also known as acupressure or pressure point massage, is a massage technique that applies pressure to specific points on the body to achieve certain effects. This technique is based on the principles of traditional Chinese medicine and acupuncture.";
		}
		else if (selectedValue == "Mechanical") {
			label4->Text = "Mechanical massage is a type of massage that utilizes special massage devices or equipment to apply massage techniques to the body tissues. This type of massage allows for deep and targeted manipulation of muscles, joints, and other tissues.";
		}
		else if (selectedValue == "Aromatherapy") {
			label4->Text = "Aromatherapy massage is a type of massage that combines massage techniques with the use of aromatic or essential oils. It offers not only physical but also aromatic effects on the body, creating a pleasant and relaxing atmosphere.";
		}
		else if (selectedValue == "Stone therapy") {
			label4->Text = "Stone therapy, also known as hot stone massage, is a type of massage that uses smooth and heated stones to induce relaxation and therapeutic effects. This massage method is one of the oldest and most widespread in the world.";
		}
		if (selectedValue == "Класічны") {
			label4->Text = "Класічны масаж - гэта адзін з найбольш распаўсюджаных відаў масажу, шырока ўжываны ў медыцыне, спорце і сферы рэлаксацыі. Ён выконваецца з выкарыстаннем розных прыёмаў і тэхнік, якія маюць на мэту палепшэнне агульнага стану арганізма, сняцце напружанасці і стрэсу, палепшэнне крывааблоўлення і агульнага мускульнага тонусу.";
		}
		else if (selectedValue == "Дзіцячы") {
			label4->Text = "Дзіцячы масаж - гэта спецыяльная форма масажу, якая прымяняецца для палепшэння здароўя і дабрабыту дзяцей. Ён аснованы на няжных і мяккіх кранках, а таксама на тэхніках, якія маюць на мэту стымуляцыю развіцця дзіцяці і яго фізічнага, эмоцыянальнага і псіхалагічнага дабрабыту.";
		}
		else if (selectedValue == "Лячэбны") {
			label4->Text = "Лячэбны масаж - гэта від масажу, які здзейсняецца з мэтай лячэння розных захворванняў і станоў. Яго здзейсняюць спецыяльна абучаныя масажысты або фізіятэрапевты, і ён можа ўжывацца ў медыцынскіх установах, рэабілітацыйных цэнтрах або масажыстамі.";
		}
		else if (selectedValue == "Касметалагічны") {
			label4->Text = "Касметалагічны масаж - гэта працэдура, якую здзейсняе спецыяліст у галіне касметалогіі для палепшэння стану тваровай і целавай скуры. Ён мае на мэту стымуляцыю крывааблоўлення, палепшэнне метабалізму, умацаванне мышцаў, павышэнне тонусу і агульнай выгляду скуры.";
		}
		else if (selectedValue == "Мёдавы") {
			label4->Text = "Мёдавы масаж - гэта від масажу, пры якім выкарыстоўваецца мёд як асноўны кампанент. Пры мёдавым масажы масажыст накладае мёд на скуру і выконвае розныя масажныя тэхнікі, такія як тарце, размяшчэнне і вібрацыя. Мёд мае шматлікія карысныя ўплывы, такія як антисептычныя, антызапальныя і звялічваючыя эфекты. Ён дапамагае палепшыць крывааблоўленне, абагрэвае тканкі і дапамагае вывяршаць токсіны і адходныя прадукты з арганізма.";
		}
		else if (selectedValue == "Спартыўны") {
			label4->Text = "Спартыўны масаж - гэта спецыялізаваны від масажу, які выкарыстоўваецца ў спорце і медыцыне, каб падрыхтаваць спартсменаў да фізічных нагрузак, палепшыць іх спартыўную вытрымку і дапамагчы ў аднаўленні пасля трэніроўкі або змаганняў. Яго здзейсняе спецыяліст масажыст, які валодае ведамі пра фізіялогію і канкрэтныя патрабаванні спорту.";
		}
		else if (selectedValue == "Кропкавы") {
			label4->Text = "Масаж трыгерных кропак, таксама вядомы як акапунктура ці масаж пунктаў націску, гэта тэхніка масажу, пры якой на асаблівыя пункты націску на целе ўздзейнічаецца натыск. Гэтая тэхніка аснована на прынцыпах традыцыйнай кітайскай медыцыны і акупунктуры.";
		}
		else if (selectedValue == "Механічны") {
			label4->Text = "Механічны масаж - гэта від масажу, пры якім выкарыстоўваюцца спецыяльныя прылады ці прылады для прымянення масажных тэхнік на тканінах цела. Гэты тып масажу дазваляе прадстаўляць глыбокую і цэльнаправленую маніпуляцыю мускуламі, суставамі і іншымі тканінамі.";
		}
		else if (selectedValue == "Ароматэрапія") {
			label4->Text = "Ароматэрапевтычны масаж - гэта від масажу, які аб'ядноўвае масажныя тэхнікі з выкарыстаннем араматычных або эсэнцыяльных масел. Ён надае не толькі фізічныя, але і араматычныя эфекты на арганізм, ствараючы прыемную і рэлаксуючую атмасферу.";
		}
		else if (selectedValue == "Камянявая тэрапія") {
			label4->Text = "Камянёвы масаж, таксама вядомы як масаж гарачымі камянямі, гэта від масажу, пры якім выкарыстоўваюцца гладкія і абагрэтыя камяні для дасягнення рэлаксацыі і лячэбных эфектаў. Гэты метад масажу з'яўляецца адным з самых старажытных і шырока ўжываных у свеце.";
		}
	}
public: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)/*Med*/ {
		// Получение выбранного значения из списка
		String^ selectedValue = listBox1->SelectedItem != nullptr ? listBox1->SelectedItem->ToString() : nullptr;
		// Изменение текста в метке в зависимости от выбранного значения
		if (selectedValue == nullptr)
		{
			MessageBox::Show("Выберите тип массажа", "Ошибка", MessageBoxButtons::OK);
		}
		if (selectedValue == "Классический") {
			MessageBox::Show("Классический массаж может быть рекомендован в следующих медицинских случаях:\n1. Мышечные напряжения и спазмы\n2. Болевые синдромы\n3. Реабилитация после травмы или операции", selectedValue);
		}
		else if (selectedValue == "Детский") {
			MessageBox::Show("Детский массаж может быть рекомендован в следующих медицинских случаях:\n1. Сонные расстройства\n2. Развитие координации и двигательных навыков\n3. Стимуляция нервной системы", selectedValue);
		}
		else if (selectedValue == "Лечебный") {
			MessageBox::Show(selectedValue+"массаж может быть рекомендован в следующих медицинских случаях:\n1. Заболевания опорно-двигательной системы\n2. Ослабление иммунной системы\n3. Боли в мышцах и суставах",selectedValue);
		}
		else if (selectedValue == "Косметологический") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Улучшение упругости и тонуса кожи\n2. Стимуляция кровообращения\n3. Улучшение состояния кожи", selectedValue);
		}
		else if (selectedValue == "Медовый") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Проблемы с мышцами и суставами\n2. Проблемы с кожей\n3. Респираторные проблемы", selectedValue);
		}
		else if (selectedValue == "Спортивный") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Улучшение кровообращения\n2. Повышение гибкости и подвижности\n3. Повреждения мышц и тканей", selectedValue);
		}
		else if (selectedValue == "Точечный") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Хроническая усталость и энергетический дисбаланс\n2. Расстройства пищеварения\n3. Боли в мышцах и суставах", selectedValue);
		}
		else if (selectedValue == "Аппаратный") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Реабилитация после травм и операций\n2. Целлюлит и проблемы с кожей\n3. Заболевания опорно-двигательной системы: артрит, артроз, остеохондроз, радикулит, мышечные спазмы и напряжение", selectedValue);
		}
		else if (selectedValue == "Аромамассаж") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Стресс и тревога\n2. Головные боли и мигрень\n3. Бессонница", selectedValue);
		}
		else if (selectedValue == "Стоун-терапия") {
			MessageBox::Show(selectedValue + "массаж может быть рекомендован в следующих медицинских случаях:\n1. Хронические мышечные боли и напряжение\n2. Ревматические заболевания и артрит\n3. Проблемы с кровообращением и лимфатической системой", selectedValue);
		}
		if (selectedValue == "Classic") {
			MessageBox::Show("Classic massage may be recommended in the following medical cases:\n1. Muscle tension and spasms\n2. Pain syndromes\n3. Rehabilitation after injury or surgery", selectedValue);
		}
		else if (selectedValue == "Child") {
			MessageBox::Show("Children's massage may be recommended in the following medical cases:\n1. Sleep disorders\n2. Development of coordination and motor skills\n3. Stimulation of the nervous system", selectedValue);
		}
		else if (selectedValue == "Therapeutic") {
			MessageBox::Show("Therapeutic massage may be recommended in the following medical cases:\n1. Musculoskeletal disorders\n2. Weakened immune system\n3. Muscle and joint pain", selectedValue);
		}
		else if (selectedValue == "Cosmetological") {
			MessageBox::Show("Cosmetic massage may be recommended in the following medical cases:\n1. Improvement of skin elasticity and tone\n2. Stimulation of blood circulation\n3. Skin condition improvement", selectedValue);
		}
		else if (selectedValue == "Honey") {
			MessageBox::Show("Honey massage may be recommended in the following medical cases:\n1. Muscle and joint problems\n2. Skin issues\n3. Respiratory problems", selectedValue);
		}
		else if (selectedValue == "Sports") {
			MessageBox::Show("Sports massage may be recommended in the following medical cases:\n1. Improved blood circulation\n2. Increased flexibility and mobility\n3. Muscle and tissue injuries", selectedValue);
		}
		else if (selectedValue == "Trigger point") {
			MessageBox::Show("Trigger point massage may be recommended in the following medical cases:\n1. Chronic fatigue and energy imbalance\n2. Digestive disorders\n3. Muscle and joint pain", selectedValue);
		}
		else if (selectedValue == "Mechanical") {
			MessageBox::Show("Mechanical massage may be recommended in the following medical cases:\n1. Rehabilitation after injuries and surgeries\n2. Cellulite and skin problems\n3. Musculoskeletal disorders: arthritis, arthrosis, osteochondrosis, radiculitis, muscle spasms and tension", selectedValue);
		}
		else if (selectedValue == "Aromatherapy") {
			MessageBox::Show("Aromatherapy massage may be recommended in the following medical cases:\n1. Stress and anxiety\n2. Headaches and migraines\n3. Insomnia", selectedValue);
		}
		else if (selectedValue == "Stone therapy") {
			MessageBox::Show("Stone therapy massage may be recommended in the following medical cases:\n1. Chronic muscle pain and tension\n2. Rheumatic conditions and arthritis\n3. Circulatory and lymphatic system issues", selectedValue);
		}
		if (selectedValue == "Класічны") {
			MessageBox::Show("Класічны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Напружанасць і спазмы мышцаў\n2. Больныя сіндромы\n3. Рэабілітацыя пасля траўмы або аперацыі", selectedValue);
		}
		else if (selectedValue == "Дзіцячы") {
			MessageBox::Show("Дзіцячы масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Расстройствы сну\n2. Развіццё каардынацыі і рухавых навыкаў\n3. Стымуляцыя нервовай сістэмы", selectedValue);
		}
		else if (selectedValue == "Лячэбны") {
			MessageBox::Show("Лячэбны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Захворванні рухавай сістэмы\n2. Аслабленая імунная сістэма\n3. Боль у мышцах і суставах", selectedValue);
		}
		else if (selectedValue == "Касметалагічны") {
			MessageBox::Show("Касметалагічны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Палепшэнне эластычнасці і тонусу скóры\n2. Стымуляцыя цыркуляцыі крыві\n3. Палепшэнне стану скóры", selectedValue);
		}
		else if (selectedValue == "Мёдавы") {
			MessageBox::Show("Мёдавы масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Праблемы з мышцамі і суставамі\n2. Праблемы з скóрай\n3. Рэспіраторныя праблемы", selectedValue);
		}
		else if (selectedValue == "Спартыўны") {
			MessageBox::Show("Спартыўны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Палепшэнне цыркуляцыі крыві\n2. Павышэнне гібкасці і рухамасці\n3. Парушэнні мышцаў і тканін", selectedValue);
		}
		else if (selectedValue == "Кропкавы") {
			MessageBox::Show("Масаж актыўных тачкаў можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Хронічная утома і дысбаланс энергіі\n2. Парушэнні травянога тракту\n3. Боль у мышцах і суставах", selectedValue);
		}
		else if (selectedValue == "Механічны") {
			MessageBox::Show("Механічны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Рэабілітацыя пасля траўмаў і аперацый\n2. Целюліт і праблемы са скóрай\n3. Захворванні рухавай сістэмы: артрыты, артроз, астэахандроз, радыкуліт, мышцевыя спазмы і напружанасць", selectedValue);
		}
		else if (selectedValue == "Ароматэрапія") {
			MessageBox::Show("Ароматэрапевтычны масаж можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Стрэс і трывога\n2. Галоўныя болі і мігрэні\n3. Бессонне", selectedValue);
		}
		else if (selectedValue == "Камянявая тэрапія") {
			MessageBox::Show("Масаж камянямі можа быць рэкамендаваны ў наступных медыцынскіх выпадках:\n1. Хронічныя мышцевыя болі і напружанасць\n2. Рэўматычныя захворванні і артрыты\n3. Парадкулёзныя і цыркулятарныя праблемы", selectedValue);
		}
	}
private: System::Void русскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (value1 == "Русский") {
		this->label1->Text = "Медицинские\r\n  показания\r\n";
		this->label2->Text = "Оформить\r\n    заказ";
		this->label4->Text = "Выберите нужный вам массаж";
		this->белорусскийToolStripMenuItem->Text = "Белорусский";
		this->английскийToolStripMenuItem->Text = "Английский";
		this->русскийToolStripMenuItem->Text = "Русский";
		this->изменениеЯзыкаToolStripMenuItem->Text = "Изменение языка";
		this->изменениеЦветаToolStripMenuItem->Text = "Изменение цвета";
		this->мятныйToolStripMenuItem->Text = "Мятный";
		this->оливковыйToolStripMenuItem->Text = "Оливковый";
		this->лавандовыйToolStripMenuItem->Text = "Лавандовый";
		listBox1->Items->Clear();
		listBox1->Items->Add("Классический");
		listBox1->Items->Add("Детский");
		listBox1->Items->Add("Лечебный");
		listBox1->Items->Add("Косметологический");
		listBox1->Items->Add("Медовый");
		listBox1->Items->Add("Спортивный");
		listBox1->Items->Add("Точечный");
		listBox1->Items->Add("Аппаратный");
		listBox1->Items->Add("Аромамассаж");
		listBox1->Items->Add("Стоун-терапия");
	}*/
}
private: System::Void английскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (value1 == "Английский") {
		this->label1->Text = "    Medical\r\n  indications\r\n";
		this->label2->Text = "  Place an \r\n    Order";
		this->label4->Text = "Choose the massage you need";
		this->белорусскийToolStripMenuItem->Text = "Belorussian";
		this->английскийToolStripMenuItem->Text = "English";
		this->русскийToolStripMenuItem->Text = "Russian";
		this->изменениеЯзыкаToolStripMenuItem->Text = "Change language";
		this->изменениеЦветаToolStripMenuItem->Text = "Change background color";
		this->мятныйToolStripMenuItem->Text = "Mint";
		this->оливковыйToolStripMenuItem->Text = "Olive";
		this->лавандовыйToolStripMenuItem->Text = "Lavanda";
		listBox1->Items->Clear();
		listBox1->Items->Add("Classic");
		listBox1->Items->Add("Child");
		listBox1->Items->Add("Therapeutic");
		listBox1->Items->Add("Cosmetological");
		listBox1->Items->Add("Honey");
		listBox1->Items->Add("Sports");
		listBox1->Items->Add("Trigger point");
		listBox1->Items->Add("Mechanical");
		listBox1->Items->Add("Aromatherapy");
		listBox1->Items->Add("Stone therapy");
	}*/
}
private: System::Void белорусскийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (value1 == "Белорусский") {
		this->label1->Text = "Медыцынскія\r\n  сведчанні\r\n";
		this->label2->Text = "  Аформіць\r\n     заказ";
		this->label4->Text = "Абярыце патрэбны вам масаж";
		this->белорусскийToolStripMenuItem->Text = "Беларускі";
		this->английскийToolStripMenuItem->Text = "Англійскi";
		this->русскийToolStripMenuItem->Text = "Рускі";
		this->изменениеЯзыкаToolStripMenuItem->Text = "Змяненне мовы";
		this->изменениеЦветаToolStripMenuItem->Text = "Змяненне колеру";
		this->мятныйToolStripMenuItem->Text = "Мятны";
		this->оливковыйToolStripMenuItem->Text = "Аліўковы";
		this->лавандовыйToolStripMenuItem->Text = "Лавандовы";
		listBox1->Items->Clear();
		listBox1->Items->Add("Класічны");
		listBox1->Items->Add("Дзіцячы");
		listBox1->Items->Add("Лячэбны");
		listBox1->Items->Add("Касметалагічны");
		listBox1->Items->Add("Мёдавы");
		listBox1->Items->Add("Спартыўны");
		listBox1->Items->Add("Кропкавы");
		listBox1->Items->Add("Механічны");
		listBox1->Items->Add("Ароматэрапія");
		listBox1->Items->Add("Камянявая тэрапія");
	}*/
}
private: System::Void лавандовыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstLavanda.png");
		this->BackgroundImage = Image::FromFile(PngPath);
		this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
			static_cast<System::Int32>(static_cast<System::Byte>(121)));
		this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
			static_cast<System::Int32>(static_cast<System::Byte>(121)));
		this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
			static_cast<System::Int32>(static_cast<System::Byte>(176)));
		this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
			static_cast<System::Int32>(static_cast<System::Byte>(226)));
		this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
			static_cast<System::Int32>(static_cast<System::Byte>(226)));
		this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
			static_cast<System::Int32>(static_cast<System::Byte>(176)));
		this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(176)), static_cast<System::Int32>(static_cast<System::Byte>(176)),
			static_cast<System::Int32>(static_cast<System::Byte>(176)));
	}
private: System::Void оливковыйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)/*Olive*/ {
		String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstOlive.png");
		this->BackgroundImage = Image::FromFile(PngPath);
		this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
			static_cast<System::Int32>(static_cast<System::Byte>(141)));
		this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
			static_cast<System::Int32>(static_cast<System::Byte>(141)));
		this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
			static_cast<System::Int32>(static_cast<System::Byte>(141)));
		this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
			static_cast<System::Int32>(static_cast<System::Byte>(141)));
		this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
			static_cast<System::Int32>(static_cast<System::Byte>(226)));
		this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
			static_cast<System::Int32>(static_cast<System::Byte>(226)));
		this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
			static_cast<System::Int32>(static_cast<System::Byte>(141)));
	}
private: System::Void мятныйToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "FirstMint.png");
		this->BackgroundImage = Image::FromFile(PngPath);
		this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
			static_cast<System::Int32>(static_cast<System::Byte>(151)));
		this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(134)), static_cast<System::Int32>(static_cast<System::Byte>(152)),
			static_cast<System::Int32>(static_cast<System::Byte>(151)));
		this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)));
		this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
			static_cast<System::Int32>(static_cast<System::Byte>(240)));
		this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
			static_cast<System::Int32>(static_cast<System::Byte>(240)));
		this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)));
		this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
			static_cast<System::Int32>(static_cast<System::Byte>(172)));
	}
};
}

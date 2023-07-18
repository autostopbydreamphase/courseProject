#pragma once

namespace KurProject {

	using namespace System;
	using namespace System::Globalization;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SQLite;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Offers
	/// </summary>
	public ref class Offers : public System::Windows::Forms::Form
	{
	public:
		Offers(String^ value1, String^ value2,String^ value3)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			SetOffersSelectedValues(value1, value2, value3);
			if (value1 == "Английский")
			{
				this->button1->Text = L"Place\r\n  order";
				this->textBox2->Text = L"Enter date (DD-MM-YYYY)";
				this->textBox1->Text = L"Enter the number of sessions";
				this->textBox3->Text = L"Additional information";
			}
			if (value1 == "Русский")
			{
				this->button1->Text = L"Оформить\r\n  заказ";
				this->textBox2->Text = L"Введите дату (ДД-ММ-ГГГГ)";
				this->textBox1->Text = L"Введите кол-во сеансов";
				this->textBox3->Text = L"Время проведения уточняется у массажиста";
			}
			if (value1 == "Белорусский")
			{
				this->button1->Text = L"Аформіць\r\n  заказ";
				this->textBox2->Text = L"Увядзіце дату (ДД-ММ-ГГГГ)";
				this->textBox1->Text = L"Увядзіце колькасць сеансаў";
				this->textBox3->Text = L"Дадатковая інфармацыя";
			}
			if (value2 == "Мятный")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "OfferFormMint.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//фон
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//фон
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//фон
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//фон
				//226;243;240
			}
			if (value2 == "Лавандовый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "OfferFormLavanda.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//фон
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//фон
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//фон
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//фон
				//216;209;226
			}
			if (value2 == "Оливковый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "OfferFormOlive.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//фон
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//фон
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//фон
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//фон
				//239;243;226
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Offers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Offers::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9.5F));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(107, 291);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Оформить\r\n  заказ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Offers::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(31, 138);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(293, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"Введите дату (ДД-ММ-ГГГГ)";
			this->textBox2->Click += gcnew System::EventHandler(this, &Offers::textBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(31, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(293, 22);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Введите кол-во сеансов";
			this->textBox1->Click += gcnew System::EventHandler(this, &Offers::textBox1_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(31, 217);
			this->textBox3->MaximumSize = System::Drawing::Size(293, 36);
			this->textBox3->MinimumSize = System::Drawing::Size(293, 36);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(293, 36);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"Дополнительная информация";
			this->textBox3->Click += gcnew System::EventHandler(this, &Offers::textBox3_Click);
			// 
			// Offers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(550, 800);
			this->MinimumSize = System::Drawing::Size(550, 664);
			this->Name = L"Offers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Make Offer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Offers::Offers_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ OffersSelectedLanguage;
		String^ OffersSelectedColor;
		String^ TypeOfOffer;
	public:
		void SetOffersSelectedValues(String^ value1, String^ value2, String^ value3)
		{
			OffersSelectedLanguage = value1;
			OffersSelectedColor = value2;
			TypeOfOffer = value3;
		}

	private: System::Void Offers_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		this->Hide();
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = String::Empty;
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = String::Empty;
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ session_count = textBox1->Text;
		String^ date = textBox2->Text;
		String^ info = textBox3->Text;
		String^ type = TypeOfOffer;
		if (String::IsNullOrWhiteSpace(session_count) || session_count == "Введите кол-во сеансов" || date == "Введите дату (ДД-ММ-ГГГГ)" || String::IsNullOrWhiteSpace(date) || String::IsNullOrWhiteSpace(info))
		{
			if (OffersSelectedLanguage == nullptr)MessageBox::Show("Невернно введены данные!");
			if (OffersSelectedLanguage == "Русский")MessageBox::Show("Невернно введены данные!");
			if (OffersSelectedLanguage == "Английский")MessageBox::Show("Incorrect data entered!");
			if (OffersSelectedLanguage == "Белорусский") MessageBox::Show("Няправільна ўведзеныя даныя!");
		}
		String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
		SQLiteConnection^ connection = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");
		connection->Open();
		SQLiteCommand^ command = connection->CreateCommand();

		command->CommandText = "INSERT INTO Offers (session_count, date, info, type_of_offer) VALUES (@session_count, @date, @info, @type)";
		command->Parameters->Add("@session_count", System::Data::DbType::String)->Value = session_count;
		command->Parameters->Add("@date", System::Data::DbType::String)->Value = date;
		command->Parameters->Add("@info", System::Data::DbType::String)->Value = info;
		command->Parameters->Add("@type", System::Data::DbType::String)->Value = TypeOfOffer;

		command->ExecuteNonQuery();
		connection->Close();
		if (OffersSelectedLanguage == nullptr)
		{
			MessageBox::Show("Заказ был успешно создан", "Успех!", MessageBoxButtons::OK);
		}
		if (OffersSelectedLanguage == "Русский")
		{
			MessageBox::Show("Заказ был успешно создан", "Успех!", MessageBoxButtons::OK);
		}
		if (OffersSelectedLanguage == "Английский")
		{
			MessageBox::Show("Order has been created successfully", "Success!", MessageBoxButtons::OK);
		}
		if (OffersSelectedLanguage == "Белорусский")
		{
			MessageBox::Show("Замова была паспяхова створана", "Паспяхова!", MessageBoxButtons::OK);
		}
		this->Close();
	}
	private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox3->Text = String::Empty;
	}
};
}

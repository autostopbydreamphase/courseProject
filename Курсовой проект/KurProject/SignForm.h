#pragma once
#include "Log2Form.h"
#include <string>
namespace KurProject {

	using namespace System::Data::SQLite;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SignForm
	/// </summary>
	public ref class SignForm : public System::Windows::Forms::Form
	{
	public:
		SignForm(String^ value1, String^ value2)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			SetSignSelectedValues(value1, value2);
			if (value1 == "Английский")
			{
				this->textBox1->Text = L"Password";
				this->textBox2->Text = L"Email";
				this->textBox3->Text = L"Phone Number";
				this->button1->Text = L"Continue";
			}
			if (value1 == "Русский")
			{
				this->textBox1->Text = L"Пароль";
				this->textBox2->Text = L"Почта";
				this->textBox3->Text = L"Номер телефона";
				this->button1->Text = L"Продолжить";
			}
			if (value1 == "Белорусский")
			{
				this->textBox1->Text = L"Пароль";
				this->textBox2->Text = L"Адрас электроннай пошты";
				this->textBox3->Text = L"Нумар тэлефона";
				this->button1->Text = L"Працягнуць";
			}
			if (value2 == "Мятный")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "RegFormMint.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(240)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));*///кнопка
				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(240)));*///фон
			}
			if (value2 == "Лавандовый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "RegFormLavanda.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));*///кнопка
				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));*///фон
			}
			if (value2 == "Оливковый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "RegFormOlive.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));

				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));*///кнопка
				/*System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));*///фон

			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SignForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(95, 333);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(243, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Пароль";
			this->textBox1->Click += gcnew System::EventHandler(this, &SignForm::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(95, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(243, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Почта";
			this->textBox2->Click += gcnew System::EventHandler(this, &SignForm::textBox2_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(95, 415);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(243, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Номер телефона";
			this->textBox3->Click += gcnew System::EventHandler(this, &SignForm::textBox3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(145, 467);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 35);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &SignForm::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &SignForm::button1_MouseLeave);
			// 
			// SignForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(550, 800);
			this->MinimumSize = System::Drawing::Size(550, 800);
			this->Name = L"SignForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ SignSelectedLanguage;
	String^ SignSelectedColor;
public:
	void SetSignSelectedValues(String^ value1, String^ value2)
	{
		SignSelectedLanguage = value1;
		SignSelectedColor = value2;
	}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = String::Empty; textBox2->PasswordChar = '*';
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = String::Empty;
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = String::Empty;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ password = textBox1->Text;
	String^ email = textBox2->Text;
	String^ phone = textBox3->Text;

	///////////////////// Проверки на всё /////////////////////

	if (String::IsNullOrWhiteSpace(password) || password == "Пароль") {
		MessageBox::Show("Введите пароль", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	} 
	if (String::IsNullOrWhiteSpace(email) || email == "Почта") {
		MessageBox::Show("Введите адрес электронной почты", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrWhiteSpace(phone) || phone == "Номер телефона") {
		MessageBox::Show("Введите номер телефона", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrWhiteSpace(password)|| password->Contains(" ")) {
		MessageBox::Show("Введите пароль без пробелов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrWhiteSpace(email)|| email->Contains(" ")) {
		MessageBox::Show("Введите адрес электронной почты без пробелов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (String::IsNullOrWhiteSpace(phone)|| phone->Contains(" ")) {
		MessageBox::Show("Введите номер телефона без пробелов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	///////////////////// Проверки на всё /////////////////////

	String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
	SQLiteConnection^ connection = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");

	connection->Open();

	SQLiteCommand^ command = connection->CreateCommand();

	command->CommandText = "INSERT INTO Users (email, password, phone) VALUES (@email, @password, @phone)";
	command->Parameters->Add("@email", System::Data::DbType::String)->Value = email;
	command->Parameters->Add("@password", System::Data::DbType::String)->Value = password;
	command->Parameters->Add("@phone", System::Data::DbType::String)->Value = phone;

	command->ExecuteNonQuery();
	connection->Close();
	if(SignSelectedLanguage == "Русский")
	{
		MessageBox::Show("Пользователь добавлен в базу данных\r\nПройдите авторизацию","Успех!", MessageBoxButtons::OK);
	}
	if (SignSelectedLanguage == "Английский")
	{
		MessageBox::Show("User added to the database\r\nPlease proceed with authentication", "Successful!", MessageBoxButtons::OK);
	}
	if (SignSelectedLanguage == "Белорусский")
	{
		MessageBox::Show("Карыстальнік дададзены ў базу даных\r\nКалі ласка, правядзіце аўтэнтыфікацыю", "Паспяхова!", MessageBoxButtons::OK);
	}
	Log2Form^ r = gcnew Log2Form(SignSelectedLanguage, SignSelectedColor);
	this->Close();
	r->Show();
}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button1->ForeColor = Color::DarkSlateGray;
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->ForeColor = Color::Black;
}
};
}

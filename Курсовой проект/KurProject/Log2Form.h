#pragma once
#include "FirstForm.h"
namespace KurProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Сводка для LogForm
	/// </summary>
	public ref class Log2Form : public System::Windows::Forms::Form
	{
	public:
		Log2Form(String^ value1, String^ value2)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			SetLog2SelectedValues(value1, value2);
			if (value1 == "Английский")
			{
				this->textBox1->Text = L"Enter your ID";
				this->textBox2->Text = L"Enter your password";
				this->button1->Text = L"Continue";
			}
			if (value1 == "Русский")
			{
				this->textBox1->Text = L"Введите свой ID";
				this->textBox2->Text = L"Введите свой пароль";
				this->button1->Text = L"Продолжить";
			}
			if (value1 == "Белорусский")
			{
				this->textBox1->Text = L"Увядзіце свой ID";
				this->textBox2->Text = L"Увядзіце свой пароль";
				this->button1->Text = L"Працягнуць";
			}
			if (value2 == "Мятный")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "LogFormMint.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//кнопка
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
					static_cast<System::Int32>(static_cast<System::Byte>(200)));//кнопка
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(240)));//фон
				//226;243;240
			}
			if (value2 == "Лавандовый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "LogFormLavanda.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//кнопка
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));//кнопка
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(216)), static_cast<System::Int32>(static_cast<System::Byte>(209)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));//фон
				//216;209;226
			}
			if (value2 == "Оливковый")
			{
				String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "LogFormOlive.png");
				this->BackgroundImage = Image::FromFile(PngPath);
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//кнопка
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
					static_cast<System::Int32>(static_cast<System::Byte>(141)));//кнопка
				this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
					static_cast<System::Int32>(static_cast<System::Byte>(226)));//фон
				//239;243;226
			}
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Log2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Log2Form::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(236, 289);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(236, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Введите почту";
			this->textBox1->Click += gcnew System::EventHandler(this, &Log2Form::textBox1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(236, 371);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(236, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"Введите пароль";
			this->textBox2->Click += gcnew System::EventHandler(this, &Log2Form::textBox2_Click);
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
			this->button1->Location = System::Drawing::Point(273, 420);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 43);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Продолжить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Log2Form::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &Log2Form::button1_MouseEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &Log2Form::button1_MouseLeave);
			// 
			// Log2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(550, 800);
			this->MinimumSize = System::Drawing::Size(550, 800);
			this->Name = L"Log2Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorization";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Log2Form::LogForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Log2Form::LogForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ Log2SelectedLanguage;
	String^ Log2SelectedColor;
public:
	void SetLog2SelectedValues(String^ value1, String^ value2)
	{
		Log2SelectedLanguage = value1;
		Log2SelectedColor = value2;
	}
	public: System::Void LogForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	}
	private: System::Void LogForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = String::Empty;
		textBox2->PasswordChar = '*';
	}
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = String::Empty;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
		SQLiteConnection^ connection = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");
		connection->Open();

		String^ emailToCheck = textBox1->Text;
		String^ passwordToCheck = textBox2->Text;
		String^ query = "SELECT COUNT(*) FROM Users WHERE email = @email AND password = @password";
		SQLiteCommand^ command = gcnew SQLiteCommand(query, connection);
		command->Parameters->AddWithValue("@email", emailToCheck);
		command->Parameters->AddWithValue("@password", passwordToCheck);

		int result = Convert::ToInt32(command->ExecuteScalar());
		if (Log2SelectedLanguage == nullptr) {
			if (result > 0)
			{
				MessageBox::Show("Вход в аккаунт выполнен!", "Успех");
				FirstForm^ r = gcnew FirstForm(Log2SelectedLanguage, Log2SelectedColor);
				this->Close();
				r->Show();
			}
			else
			{
				MessageBox::Show("Неправильно введенные данные", "Ошибка");
			}

		}
		if (Log2SelectedLanguage == "Английский") {
			if (result > 0)
			{
				MessageBox::Show("Logged in successfully!", "Success");
				FirstForm^ r = gcnew FirstForm(Log2SelectedLanguage, Log2SelectedColor);
				this->Close();
				r->Show();
			}
			else
			{
				MessageBox::Show("Incorrect data entered", "Error");
			}
		}
		if (Log2SelectedLanguage == "Русский") {
			if (result > 0)
			{
				MessageBox::Show("Вход в аккаунт выполнен!", "Успех");
				FirstForm^ r = gcnew FirstForm(Log2SelectedLanguage, Log2SelectedColor);
				this->Close();
				r->Show();
			}
			else
			{
				MessageBox::Show("Неправильно введенные данные", "Ошибка");
			}

		}
		if (Log2SelectedLanguage == "Белорусский") {
			if (result > 0)
			{
				MessageBox::Show("Уваход у акаўнт паспяховы!", "Паспяхова");
				FirstForm^ r = gcnew FirstForm(Log2SelectedLanguage, Log2SelectedColor);
				this->Close();
				r->Show();
			}
			else
			{
				MessageBox::Show("Няправільна ўведзеныя дадзеныя", "Памылка");
			}
		}
		connection->Close();
	}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button1->ForeColor = Color::DarkOliveGreen;
}
private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button1->ForeColor = Color::Black;
}
};
}

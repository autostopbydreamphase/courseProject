#pragma once

namespace KurProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// —водка дл€ AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(String^ value1, String^ value2)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			SetAdminSelectedValues(value1, value2);
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lStartDate;
	protected:
	private: System::Windows::Forms::Label^ lEndDate;
	private: System::Windows::Forms::TextBox^ tbStartDate;
	private: System::Windows::Forms::TextBox^ tbEndDate;
	private: System::Windows::Forms::Button^ btnShowUsers;
	private: System::Windows::Forms::Button^ btnShowAllOffers;


	private: System::Windows::Forms::Button^ btnTakeReport;
	private: System::Windows::Forms::Label^ lNameCountOfSessions;
	private: System::Windows::Forms::Label^ lCountOfSessions;
	private: System::Windows::Forms::TextBox^ tbAllUsers;
	private: System::Windows::Forms::TextBox^ tbAllOffers;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->lStartDate = (gcnew System::Windows::Forms::Label());
			this->lEndDate = (gcnew System::Windows::Forms::Label());
			this->tbStartDate = (gcnew System::Windows::Forms::TextBox());
			this->tbEndDate = (gcnew System::Windows::Forms::TextBox());
			this->btnShowUsers = (gcnew System::Windows::Forms::Button());
			this->btnShowAllOffers = (gcnew System::Windows::Forms::Button());
			this->btnTakeReport = (gcnew System::Windows::Forms::Button());
			this->lNameCountOfSessions = (gcnew System::Windows::Forms::Label());
			this->lCountOfSessions = (gcnew System::Windows::Forms::Label());
			this->tbAllUsers = (gcnew System::Windows::Forms::TextBox());
			this->tbAllOffers = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lStartDate
			// 
			this->lStartDate->AutoSize = true;
			this->lStartDate->Location = System::Drawing::Point(12, 9);
			this->lStartDate->Name = L"lStartDate";
			this->lStartDate->Size = System::Drawing::Size(51, 13);
			this->lStartDate->TabIndex = 0;
			this->lStartDate->Text = L"start date";
			// 
			// lEndDate
			// 
			this->lEndDate->AutoSize = true;
			this->lEndDate->Location = System::Drawing::Point(12, 64);
			this->lEndDate->Name = L"lEndDate";
			this->lEndDate->Size = System::Drawing::Size(49, 13);
			this->lEndDate->TabIndex = 1;
			this->lEndDate->Text = L"end date";
			// 
			// tbStartDate
			// 
			this->tbStartDate->Location = System::Drawing::Point(15, 36);
			this->tbStartDate->Name = L"tbStartDate";
			this->tbStartDate->Size = System::Drawing::Size(100, 20);
			this->tbStartDate->TabIndex = 2;
			this->tbStartDate->TextChanged += gcnew System::EventHandler(this, &AdminForm::tbStartDate_TextChanged);
			// 
			// tbEndDate
			// 
			this->tbEndDate->Location = System::Drawing::Point(13, 81);
			this->tbEndDate->Name = L"tbEndDate";
			this->tbEndDate->Size = System::Drawing::Size(100, 20);
			this->tbEndDate->TabIndex = 3;
			// 
			// btnShowUsers
			// 
			this->btnShowUsers->Location = System::Drawing::Point(13, 126);
			this->btnShowUsers->Name = L"btnShowUsers";
			this->btnShowUsers->Size = System::Drawing::Size(75, 23);
			this->btnShowUsers->TabIndex = 4;
			this->btnShowUsers->Text = L"Show Users";
			this->btnShowUsers->UseVisualStyleBackColor = true;
			this->btnShowUsers->Click += gcnew System::EventHandler(this, &AdminForm::btnShowUsers_Click);
			// 
			// btnShowAllOffers
			// 
			this->btnShowAllOffers->Location = System::Drawing::Point(15, 409);
			this->btnShowAllOffers->Name = L"btnShowAllOffers";
			this->btnShowAllOffers->Size = System::Drawing::Size(75, 23);
			this->btnShowAllOffers->TabIndex = 5;
			this->btnShowAllOffers->Text = L"Show Offers";
			this->btnShowAllOffers->UseVisualStyleBackColor = true;
			this->btnShowAllOffers->Click += gcnew System::EventHandler(this, &AdminForm::btnShowAllOffers_Click);
			// 
			// btnTakeReport
			// 
			this->btnTakeReport->Location = System::Drawing::Point(146, 59);
			this->btnTakeReport->Name = L"btnTakeReport";
			this->btnTakeReport->Size = System::Drawing::Size(75, 23);
			this->btnTakeReport->TabIndex = 8;
			this->btnTakeReport->Text = L"Take Report";
			this->btnTakeReport->UseVisualStyleBackColor = true;
			this->btnTakeReport->Click += gcnew System::EventHandler(this, &AdminForm::btnTakeReport_Click);
			// 
			// lNameCountOfSessions
			// 
			this->lNameCountOfSessions->AutoSize = true;
			this->lNameCountOfSessions->Location = System::Drawing::Point(238, 39);
			this->lNameCountOfSessions->Name = L"lNameCountOfSessions";
			this->lNameCountOfSessions->Size = System::Drawing::Size(90, 13);
			this->lNameCountOfSessions->TabIndex = 9;
			this->lNameCountOfSessions->Text = L"Count of sessions";
			// 
			// lCountOfSessions
			// 
			this->lCountOfSessions->Location = System::Drawing::Point(238, 64);
			this->lCountOfSessions->MaximumSize = System::Drawing::Size(250, 70);
			this->lCountOfSessions->MinimumSize = System::Drawing::Size(250, 70);
			this->lCountOfSessions->Name = L"lCountOfSessions";
			this->lCountOfSessions->Size = System::Drawing::Size(250, 70);
			this->lCountOfSessions->TabIndex = 10;
			// 
			// tbAllUsers
			// 
			this->tbAllUsers->Location = System::Drawing::Point(13, 156);
			this->tbAllUsers->MaximumSize = System::Drawing::Size(509, 247);
			this->tbAllUsers->Multiline = true;
			this->tbAllUsers->Name = L"tbAllUsers";
			this->tbAllUsers->ReadOnly = true;
			this->tbAllUsers->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbAllUsers->Size = System::Drawing::Size(509, 247);
			this->tbAllUsers->TabIndex = 11;
			// 
			// tbAllOffers
			// 
			this->tbAllOffers->Location = System::Drawing::Point(13, 439);
			this->tbAllOffers->MaximumSize = System::Drawing::Size(509, 247);
			this->tbAllOffers->Multiline = true;
			this->tbAllOffers->Name = L"tbAllOffers";
			this->tbAllOffers->ReadOnly = true;
			this->tbAllOffers->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tbAllOffers->Size = System::Drawing::Size(509, 247);
			this->tbAllOffers->TabIndex = 12;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->tbAllOffers);
			this->Controls->Add(this->tbAllUsers);
			this->Controls->Add(this->lCountOfSessions);
			this->Controls->Add(this->lNameCountOfSessions);
			this->Controls->Add(this->btnTakeReport);
			this->Controls->Add(this->btnShowAllOffers);
			this->Controls->Add(this->btnShowUsers);
			this->Controls->Add(this->tbEndDate);
			this->Controls->Add(this->tbStartDate);
			this->Controls->Add(this->lEndDate);
			this->Controls->Add(this->lStartDate);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(550, 800);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administration";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private:
	String^ AdminSelectedLanguage;
	String^ AdminSelectedColor;
public:
	void SetAdminSelectedValues(String^ value1, String^ value2)
	{
		AdminSelectedLanguage = value1;
		AdminSelectedColor = value2;
	}

	private: System::Void btnShowUsers_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
			SQLiteConnection^ connection = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");
			connection->Open();

			String^ sqlQuery = "SELECT * FROM Users";
			SQLiteCommand^ command = gcnew SQLiteCommand(sqlQuery, connection);

			SQLiteDataReader^ reader = command->ExecuteReader();

			while (reader->Read())
			{
				String^ id = reader["id"]->ToString();
				String^ username = reader["email"]->ToString();
				String^ email = reader["password"]->ToString();
				String^ phone = reader["phone"]->ToString();
				String^ line = "ID: "+ id + "  Username: " + username + "  Email : " + email + "  Phone : "+ phone + "\r\n";

				tbAllUsers->Text += line;
			}

			reader->Close();
			connection->Close();
		}
		catch (SQLiteException^ ex)
		{
			MessageBox::Show("ќшибка при выполнении запроса: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void btnShowAllOffers_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
		SQLiteConnection^ connection = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");
		connection->Open();

		String^ sqlQuery = "SELECT * FROM Offers";
		SQLiteCommand^ command = gcnew SQLiteCommand(sqlQuery, connection);

		SQLiteDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			String^ id = reader["id"]->ToString();
			String^ session_count = reader["session_count"]->ToString();
			String^ date = reader["date"]->ToString();
			String^ info = reader["info"]->ToString();
			String^ type_of_offer = reader["type_of_offer"]->ToString();
			String^ line = "ID: " + id + "  Session count: " + session_count + "  Date : " + date + "  Info : " + info + "  Type of offer: "+ type_of_offer+ "\r\n";

			tbAllOffers->Text += line;
		}

		reader->Close();
		connection->Close();
	}
	catch (SQLiteException^ ex)
	{
		MessageBox::Show("ќшибка при выполнении запроса: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnTakeReport_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ databasePath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "new.db");
	SQLiteConnection^ connectionString = gcnew SQLiteConnection("Data Source=" + databasePath + ";Version=3;");
	int result = 0;
	String^ startDate = tbStartDate->Text;
	String^ endDate = tbEndDate->Text;
	try
	{
		SQLiteConnection^ connection = gcnew SQLiteConnection(connectionString);
		connection->Open();
		int session_count;
		/*String^ sqlQuery = "SELECT COUNT(*) FROM orders WHERE session_count = @sessionCount AND date BETWEEN @startDate AND @endDate";
		SQLiteCommand^ command = gcnew SQLiteCommand(sqlQuery, connection);*/

		String^ sqlQuery = "SELECT SUM(session_count) FROM offers WHERE date BETWEEN @startDate AND @endDate";
		SQLiteCommand^ command = gcnew SQLiteCommand(sqlQuery, connection);
		command->Parameters->AddWithValue("@startDate", startDate);
		command->Parameters->AddWithValue("@endDate", endDate);
		Object^ result = command->ExecuteScalar();
		session_count = Convert::ToInt32(result);
	//	session_count = Convert::ToInt32(command->ExecuteScalar());
		this->lCountOfSessions->Text = "Session count - "+session_count;
		connection->Close();
	}
	catch (SQLiteException^ ex)
	{
		MessageBox::Show("ќшибка при выполнении запроса: " + ex->Message);
	}
}
private: System::Void tbStartDate_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

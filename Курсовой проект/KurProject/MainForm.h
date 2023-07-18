#pragma once
#include "LogForm.h"
#include "SignForm.h"
#include "Log2Form.h"
#include "Offers.h"
#include "FirstForm.h"
namespace KurProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÖâåòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îëèâêîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ìÿòíûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ëàâàíäîâûéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüßçûêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíãëèéñêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ áåëîğóññêèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñïğàâêàToolStripMenuItem;



	protected:



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èçìåíèòüÖâåòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îëèâêîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ìÿòíûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ëàâàíäîâûéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüßçûêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíãëèéñêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->áåëîğóññêèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(68, 546);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Àâòîğèçîâàòüñÿ";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			this->label1->MouseEnter += gcnew System::EventHandler(this, &MainForm::label1_MouseEnter);
			this->label1->MouseLeave += gcnew System::EventHandler(this, &MainForm::label1_MouseLeave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(54, 632);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Çàğåãèñòğèğîâàòüñÿ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &MainForm::label3_Click);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &MainForm::label3_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &MainForm::label3_MouseLeave);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(239)), static_cast<System::Int32>(static_cast<System::Byte>(243)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->èçìåíèòüÖâåòToolStripMenuItem,
					this->èçìåíèòüßçûêToolStripMenuItem, this->ñïğàâêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(534, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èçìåíèòüÖâåòToolStripMenuItem
			// 
			this->èçìåíèòüÖâåòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îëèâêîâûéToolStripMenuItem,
					this->ìÿòíûéToolStripMenuItem, this->ëàâàíäîâûéToolStripMenuItem
			});
			this->èçìåíèòüÖâåòToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->èçìåíèòüÖâåòToolStripMenuItem->Name = L"èçìåíèòüÖâåòToolStripMenuItem";
			this->èçìåíèòüÖâåòToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->èçìåíèòüÖâåòToolStripMenuItem->Text = L"Èçìåíèòü öâåò";
			// 
			// îëèâêîâûéToolStripMenuItem
			// 
			this->îëèâêîâûéToolStripMenuItem->Name = L"îëèâêîâûéToolStripMenuItem";
			this->îëèâêîâûéToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->îëèâêîâûéToolStripMenuItem->Text = L"Îëèâêîâûé";
			this->îëèâêîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::îëèâêîâûéToolStripMenuItem_Click);
			// 
			// ìÿòíûéToolStripMenuItem
			// 
			this->ìÿòíûéToolStripMenuItem->Name = L"ìÿòíûéToolStripMenuItem";
			this->ìÿòíûéToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->ìÿòíûéToolStripMenuItem->Text = L"Ìÿòíûé";
			this->ìÿòíûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ìÿòíûéToolStripMenuItem_Click);
			// 
			// ëàâàíäîâûéToolStripMenuItem
			// 
			this->ëàâàíäîâûéToolStripMenuItem->Name = L"ëàâàíäîâûéToolStripMenuItem";
			this->ëàâàíäîâûéToolStripMenuItem->Size = System::Drawing::Size(148, 22);
			this->ëàâàíäîâûéToolStripMenuItem->Text = L"Ëàâàíäîâûé";
			this->ëàâàíäîâûéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ëàâàíäîâûéToolStripMenuItem_Click);
			// 
			// èçìåíèòüßçûêToolStripMenuItem
			// 
			this->èçìåíèòüßçûêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ğóññêèéToolStripMenuItem,
					this->àíãëèéñêèéToolStripMenuItem, this->áåëîğóññêèéToolStripMenuItem
			});
			this->èçìåíèòüßçûêToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->èçìåíèòüßçûêToolStripMenuItem->Name = L"èçìåíèòüßçûêToolStripMenuItem";
			this->èçìåíèòüßçûêToolStripMenuItem->Size = System::Drawing::Size(110, 20);
			this->èçìåíèòüßçûêToolStripMenuItem->Text = L"Èçìåíèòü ÿçûê";
			// 
			// ğóññêèéToolStripMenuItem
			// 
			this->ğóññêèéToolStripMenuItem->Name = L"ğóññêèéToolStripMenuItem";
			this->ğóññêèéToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->ğóññêèéToolStripMenuItem->Text = L"Ğóññêèé";
			this->ğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ğóññêèéToolStripMenuItem_Click);
			// 
			// àíãëèéñêèéToolStripMenuItem
			// 
			this->àíãëèéñêèéToolStripMenuItem->Name = L"àíãëèéñêèéToolStripMenuItem";
			this->àíãëèéñêèéToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->àíãëèéñêèéToolStripMenuItem->Text = L"Àíãëèéñêèé";
			this->àíãëèéñêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::àíãëèéñêèéToolStripMenuItem_Click);
			// 
			// áåëîğóññêèéToolStripMenuItem
			// 
			this->áåëîğóññêèéToolStripMenuItem->Name = L"áåëîğóññêèéToolStripMenuItem";
			this->áåëîğóññêèéToolStripMenuItem->Size = System::Drawing::Size(151, 22);
			this->áåëîğóññêèéToolStripMenuItem->Text = L"Áåëîğóññêèé";
			this->áåëîğóññêèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::áåëîğóññêèéToolStripMenuItem_Click);
			// 
			// ñïğàâêàToolStripMenuItem
			// 
			this->ñïğàâêàToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->ñïğàâêàToolStripMenuItem->Name = L"ñïğàâêàToolStripMenuItem";
			this->ñïğàâêàToolStripMenuItem->Size = System::Drawing::Size(66, 20);
			this->ñïğàâêàToolStripMenuItem->Text = L"Ñïğàâêà";
			this->ñïğàâêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::ñïğàâêàToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(534, 761);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(550, 800);
			this->MinimumSize = System::Drawing::Size(550, 800);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Massage at home";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:
	String^ FL;
	String^ FC;
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e)/*Log in*/ {
	LogForm^ logform = gcnew LogForm(FL,FC);
	logform->Show();
}
private: System::Void label1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Lavender;
}
private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::White;
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	SignForm^ s = gcnew SignForm(FL,FC);
	s->Show();
}
private: System::Void label3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	label3->ForeColor = Color::Lavender;
}
private: System::Void label3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	label3->ForeColor = Color::White;
}
private: System::Void îëèâêîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FC = "Îëèâêîâûé";
	String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "MainFormOlive.png");
	this->BackgroundImage = Image::FromFile(PngPath);
	this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
		static_cast<System::Int32>(static_cast<System::Byte>(141)));
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
		static_cast<System::Int32>(static_cast<System::Byte>(141)));
	this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(162)), static_cast<System::Int32>(static_cast<System::Byte>(166)),
		static_cast<System::Int32>(static_cast<System::Byte>(141)));
	//162; 166; 141
}
private: System::Void ìÿòíûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FC = "Ìÿòíûé";
	String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "MainFormMint.png");
	this->BackgroundImage = Image::FromFile(PngPath);
	this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(212)),
		static_cast<System::Int32>(static_cast<System::Byte>(200)));
	//160; 212; 200
}
private: System::Void ëàâàíäîâûéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FC = "Ëàâàíäîâûé";
	String^ PngPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "MainFormLavanda.png");
	this->BackgroundImage = Image::FromFile(PngPath);
	this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
		static_cast<System::Int32>(static_cast<System::Byte>(121)));
	this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
		static_cast<System::Int32>(static_cast<System::Byte>(121)));
	this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(89)),
		static_cast<System::Int32>(static_cast<System::Byte>(121)));
	//103; 89; 121
}
private: System::Void ğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FL = "Ğóññêèé";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëîğóññêèé";
	this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãëèéñêèé";
	this->ğóññêèéToolStripMenuItem->Text = "Ğóññêèé";
	this->èçìåíèòüßçûêToolStripMenuItem->Text = "Èçìåíèòü ÿçûê";
	this->èçìåíèòüÖâåòToolStripMenuItem->Text = "Èçìåíèòü öâåò";
	this->ìÿòíûéToolStripMenuItem->Text = "Ìÿòíûé";
	this->îëèâêîâûéToolStripMenuItem->Text = "Îëèâêîâûé";
	this->ëàâàíäîâûéToolStripMenuItem->Text = "Ëàâàíäîâûé";
	this->label1->Text = "Àâòîğèçîâàòüñÿ";
	this->label3->Text = "Çàğåãèñòğèğîâàòüñÿ";
	this->label3->Location = System::Drawing::Point(54, 632);
	this->label1->Location = System::Drawing::Point(68, 546);
}
private: System::Void àíãëèéñêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FL = "Àíãëèéñêèé";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Belarusian";
	this->àíãëèéñêèéToolStripMenuItem->Text = "English";
	this->ğóññêèéToolStripMenuItem->Text = "Russian";
	this->èçìåíèòüßçûêToolStripMenuItem->Text = "Change Language";
	this->èçìåíèòüÖâåòToolStripMenuItem->Text = "Change Color";
	this->ìÿòíûéToolStripMenuItem->Text = "Mint";
	this->îëèâêîâûéToolStripMenuItem->Text = "Olive";
	this->ëàâàíäîâûéToolStripMenuItem->Text = "Lavender";
	this->label1->Text = "Authenticate";
	this->label3->Text = "Register";
	this->label1->Location = System::Drawing::Point(96, 547);
	this->label3->Location = System::Drawing::Point(120, 633);
}
private: System::Void áåëîğóññêèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FL = "Áåëîğóññêèé";
	this->áåëîğóññêèéToolStripMenuItem->Text = "Áåëàğóñê³";
	this->àíãëèéñêèéToolStripMenuItem->Text = "Àíãë³éñêi";
	this->ğóññêèéToolStripMenuItem->Text = "Ğóñê³";
	this->èçìåíèòüßçûêToolStripMenuItem->Text = "Çìÿíåííå ìîâû";
	this->èçìåíèòüÖâåòToolStripMenuItem->Text = "Çìÿíåííå êîëåğó";
	this->ìÿòíûéToolStripMenuItem->Text = "Ìÿòíû";
	this->îëèâêîâûéToolStripMenuItem->Text = "Àë³¢êîâû";
	this->ëàâàíäîâûéToolStripMenuItem->Text = "Ëàâàíäîâû";
	this->label1->Text = "À¢òàğûçàâàööà";
	this->label3->Text = "Çàğıã³ñòğàâàööà";
	this->label3->Location = System::Drawing::Point(68, 632);
	this->label1->Location = System::Drawing::Point(68, 546);
}
private: System::Void ñïğàâêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ HelpPath = System::IO::Path::Combine(AppDomain::CurrentDomain->BaseDirectory, "Ñïğàâêà.chm");
	Help::ShowHelp(nullptr, HelpPath); 
}
};
}

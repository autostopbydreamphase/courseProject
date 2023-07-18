#include "MainForm.h"
#include<Windows.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	KurProject::MainForm form;
	Application::Run(% form);
}


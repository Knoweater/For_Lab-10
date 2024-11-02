#include "MyForm.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	LB3Practycum::MyForm form; 
	Application::Run(% form);
}
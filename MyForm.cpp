#include "MyForm.h"
#include <iostream>
#include <cmath>
#include <vector>

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
int Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Graph::MyForm form;
	Application::Run(% form);

	return 0;
}

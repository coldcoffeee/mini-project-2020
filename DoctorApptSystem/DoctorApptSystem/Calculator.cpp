#include "Calculator.h"
#include<cstdlib>
#include<fstream>
#include<iostream>
#include<string>



using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DoctorApptSystem::Calculator frm1;
	Application::Run(% frm1);
}
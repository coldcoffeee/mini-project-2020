#include "Frontend.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main1(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	DoctorApptSystem::Frontend frm;
	Application::Run(% frm);
}
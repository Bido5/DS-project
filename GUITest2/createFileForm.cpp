#include "createFileForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main1() {

	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);
	//Application::Run(gcnew GUITest2::MyForm);

	GUITest2::createFileForm mainComponent;
	mainComponent.ShowDialog();
}

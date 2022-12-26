#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main() {
	
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);
	//Application::Run(gcnew GUITest2::MyForm);
	

	GUITest2::MyForm mainComponent;
	mainComponent.ShowDialog();
}





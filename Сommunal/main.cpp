#include "MainWindow.h"

using namespace Ñommunal;

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MainWindow());
}
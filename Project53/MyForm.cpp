#include "MyForm.h"
#include <windows.h>
#include <stdio.h>      /* printf */
#include <math.h>
using namespace Project53;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
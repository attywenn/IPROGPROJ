#include "gui.h"
#include "Applicant.h"
#include "Students.h"
#include "Administrator.h"

using namespace proj;

[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew gui());

	return 0;
}
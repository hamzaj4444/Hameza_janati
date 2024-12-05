#include "MyForm.h"

using namespace System;
using namespace classApplication;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Initialize the application
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create and run the form
    Application::Run(gcnew MyForm());

    return 0;
}

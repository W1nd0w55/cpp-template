#pragma once

  /////////////////
 // Entry point //
/////////////////
int main()
{
    // App creation
    MyApp::Core::Application* app = new MyApp::Core::Application;
    int exitCode = app->Run();

    // Cleanup (destructor is called here)
    delete app;
    return exitCode;
}

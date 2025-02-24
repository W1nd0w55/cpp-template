#include <Core>

int main(int argc, char** argv)
{
	MyApp::Core::Application* app = new MyApp::Core::Application;
	int exitCode = app->Run();

	delete app;
	return exitCode;
}

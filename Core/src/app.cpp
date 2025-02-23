#include "app.hpp"
#include <iostream>

namespace MyApp
{

    namespace Core
    {

        Application::Application()
        {

            // Initialization

        } // Application::Application()

        Application::~Application()
        {

            // Cleanup

        } // Application::~Application()

        int Application::Run()
        {

            /* Running code:
             * game loop,
             * app functionality.
             */

            std::cout << "Hello, World!\n";

            // Wait...
            std::cin.get();
            return 0;

        } // Application::Run()

    } // namespace Core
    
} // namespace MyApp


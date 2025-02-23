#pragma once
#include "core.hpp"

// Everything for this app goes here.
namespace MyApp
{

    /* Please put everything from the Core library here,
     * especially if you have the project as multiple libraries.
     */
    namespace Core
    {
        
        // Our application class
        class MY_API Application
        {
        
        // Available members
        public:

            // Initialization code goes here.
            Application();
            // Cleanup code goes here
            ~Application();

            // Running code goes here.
            int Run();

        }; // class Application

    } // namespace Core

} // namespace MyApp

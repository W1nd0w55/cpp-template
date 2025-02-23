#pragma once

// __declspec if a Windows-only thing
#ifdef WINDOWS

    // For Core (defined in CMake)
    #ifdef BUILDING_CORE

        // DLL exporting
        #define MY_API __declspec(dllexport)

    // For everything else
    #else

        // DLL importing
        #define MY_API __declspec(dllimport)

    #endif

// We don't need to do anything
#else

    #define MY_API 

#endif

# MyApp CMake file.
# EVERYTHING LINKS HERE!!!!!!!!!!!!!!!!!

# Important!
add_executable(MyApp "main.cpp")

# Library include directories
target_include_directories(MyApp PRIVATE "../Core/")

# Links
target_link_directories(MyApp PRIVATE "../build/Core/")

target_link_libraries(MyApp PRIVATE "Core")

# Preprocessor definitions
if(WIN32)
    target_compile_definitions(MyApp PRIVATE WINDOWS)
endif()

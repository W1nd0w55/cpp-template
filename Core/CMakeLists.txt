# Core CMake file.

# Source directory definition
file(GLOB src "src/**")

# Important!
add_library(Core SHARED "${src}")

# Include directories
target_include_directories(Core PRIVATE "include/")

# Preprocessor definitions
target_compile_definitions(Core PRIVATE BUILDING_CORE)

if(WIN32)
    target_compile_definitions(Core PRIVATE WINDOWS)
endif()

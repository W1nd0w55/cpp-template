# Core CMake file.

# Source directory definition
file(GLOB src "src/**")

# Important!
add_library(Core SHARED "${src}")

# Include directories
target_include_directories(Core PRIVATE "include/")

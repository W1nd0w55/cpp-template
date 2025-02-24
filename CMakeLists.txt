# Root CMake file.

# Make sure you have CMake 3.20
cmake_minimum_required(VERSION 3.20)

# CMake project (solution for VS)
project("MyApp")

# Our projects
add_subdirectory("Core")
add_subdirectory("MyApp")

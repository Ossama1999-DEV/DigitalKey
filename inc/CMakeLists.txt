# Minimum version of CMake
cmake_minimum_required(VERSION 3.15)

# Project name and version
project(DigitalKey VERSION 1.0 LANGUAGES C)

# Set default build type to Release if not specified
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Define output directories for libraries and executables
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add subdirectories
add_subdirectory(src)   # Compile source files into libDigitKey.so
add_subdirectory(test)  # Compile tests
set(CMAKE_EXE_LINKER_FLAGS "-mconsole")
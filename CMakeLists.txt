cmake_minimum_required(VERSION 3.22)

project(CheckPrime LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define the main source files
set(SOURCES
    src/main.cpp
    lib/PrimeChecker.cpp
)

# Include the header files
include_directories(include/)

# Create the executable for the main application
add_executable(app ${SOURCES})

# Create the executable for the test suite
add_executable(tests tests/test_prime.cpp lib/PrimeChecker.cpp)


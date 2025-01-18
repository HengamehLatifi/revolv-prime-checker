cmake_minimum_required(VERSION 3.22)
project(CheckPrime LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Main
add_executable(primary-checker
    src/main.cpp
    lib/prime_checker.cpp
)
target_include_directories(primary-checker PRIVATE include)

# Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.8.0
)
FetchContent_MakeAvailable(Catch2)

# Test
add_executable(tests
    tests/test_prime.cpp
    lib/prime_checker.cpp
)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# CTest
enable_testing()
add_test(NAME RunTests COMMAND tests)


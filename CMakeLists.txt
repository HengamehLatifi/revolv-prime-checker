cmake_minimum_required(VERSION 3.22)
project(CheckPrime LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

# Main
add_executable(app src/main.cpp lib/PrimeChecker.cpp)
target_include_directories(app PRIVATE include)

# Catch2
include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v3.3.2
)
FetchContent_MakeAvailable(Catch2)

# Tests
add_executable(tests tests/test_prime.cpp lib/PrimeChecker.cpp)
target_include_directories(tests PRIVATE include)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# Remove or comment out the automatic discovery:
# include(Catch)
# catch_discover_tests(tests)

# Register the test explicitly:
add_test(NAME RunTests COMMAND tests)



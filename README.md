# Prime Checker

A C++ project to check if a number is prime, demonstrating static class functions, custom range checks, and optional binary path installation. Includes hints for optimizing performance using inline assembly.


## Prerequisites

Ensure you have the following installed:

- **C++ Compiler:** A C++20 compliant compiler (e.g., GCC 10+, Clang 10+, or MSVC 2019+).
- **CMake:** Version 3.22 or higher.
- **Git:** To clone the repository.

## Build and Installation

Follow these steps to clone, build, and run the project:

1. Clone the Repository:

   ```bash
   git clone https://github.com/HengamehLatifi/revolv-prime-checker.git
   cd revolv-prime-checker

2. Create a Build Directory and Configure the Project:

    ```bash
    mkdir build
    cd build
    cmake ..

3. Build the Project:
   
    ```bash
    cmake --build .

4. Run the Executable:
    ```bash
    ./primary-checker

## Installing to a Binary Path

To make the primary_check executable accessible from anywhere:

1. Copy the executable to a directory in your PATH:
    ```bash
    sudo cp primary-checker /usr/local/bin/


2. Verify installation:

    ```bash
    primary-checker

## Speeding Up the Process with Inline Assembly

You may speed up certain parts of the code using inline assembly. Inline assembly can be integrated into the source to optimize critical sections.


## Commit Convention

This project follows the Conventional Commits standard. Using meaningful commit messages following this style:

    <type>(<scope>): <description>
Common types in the conventional commit format are:

    feat: Introducing a new feature.
    fix: Fixing a bug.
    docs: Updating documentation.
    style: Changes that do not affect the meaning of the code (e.g., formatting, missing semicolons).
    refactor: Code changes that neither fix a bug nor add a feature.
    perf: Code changes that improve performance.
    test: Adding or updating tests.
    build: Changes that affect the build system or external dependencies (e.g., CMakeLists.txt updates).
    ci: Changes to CI configuration files and scripts.
    chore: Other changes that do not modify src or test files.

Examples:

    feat(core): add custom range check for input
    fix(build): update CMakeLists.txt for executable name change

#include <iostream>
#include <cstdlib>
#include "PrimeChecker.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <number>\n";
        return 1;
    }

    int number = std::atoi(argv[1]);
    PrimeChecker checker;

    if (checker.isPrime(number)) {
        std::cout << number << " is a prime number.\n";
    } else {
        std::cout << number << " is not a prime number.\n";
    }

    return 0;
}


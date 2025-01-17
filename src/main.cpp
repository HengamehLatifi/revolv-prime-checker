#include <iostream>
#include "PrimeChecker.hpp"

int main() {
    PrimeChecker checker;
    int number;

    std::cout << "Enter a number to check if it is prime: ";
    std::cin >> number;

    if(checker.isPrime(number)) {
        std::cout << number << " is a prime number.\n";
    } else {
        std::cout << number << " is not a prime number.\n";
    }

    return 0;
}


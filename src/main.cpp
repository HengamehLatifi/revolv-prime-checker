
#include <iostream>
#include <cstdlib>
#include "prime_checker.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <number>\n";
        return 1;
    }

    int number;
    try {
        number = std::stoi(argv[1]);
    } catch (const std::invalid_argument& e) {
        std::cout << "Invalid input: is not a valid integer!\n";
        return 1;
    } catch (const std::out_of_range& e) {
        std::cout << "Invalid input: number is too large!\n";
        return 1;
    }

    PrimeChecker checker;

    if (checker.isPrime(number)) {
        std::cout << number << " is a prime number.\n";
    } else {
        std::cout << number << " is not a prime number.\n";
    }

    return 0;
}


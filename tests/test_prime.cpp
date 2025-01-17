#include <iostream>
#include "PrimeChecker.hpp"

void runTest(const int testNum, bool result) {
    if(result) {
        std::cout << "Test " << testNum << " passed.\n";
    } else {
        std::cerr << "Test " << testNum << " failed.\n";
    }
}

int main() {
    PrimeChecker toCheck;
    int failedTests = 0;

    // Test cases
    runTest(1, !toCheck.isPrime(-5));   // Negative numbers not prime
    runTest(2, !toCheck.isPrime(0));      // 0 is not prime
    runTest(3, !toCheck.isPrime(1));      // 1 is not prime
    runTest(4, toCheck.isPrime(2));       // 2 is prime
    runTest(5, toCheck.isPrime(3));       // 3 is prime
    runTest(6, !toCheck.isPrime(4));      // 4 is not prime
    runTest(7, toCheck.isPrime(17));      // 17 is prime
    runTest(8, !toCheck.isPrime(18));     // 18 is not prime


    return 0;
}


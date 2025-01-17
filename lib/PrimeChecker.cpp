#include "PrimeChecker.hpp"
#include <cmath>

bool PrimeChecker::isPrime(int number) const {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    int limit = static_cast<int>(std::sqrt(number));
    for (int i = 3; i <= limit; i += 2) {
        if (number % i == 0)
            return false;
    }
    return true;
}


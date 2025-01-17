#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include "PrimeChecker.hpp"

TEST_CASE("PrimeChecker basic tests", "[PrimeChecker]") {
    PrimeChecker toCheck;

    SECTION("Negative numbers are not prime") {
        REQUIRE_FALSE(toCheck.isPrime(-5));
    }

    SECTION("0 is not prime") {
        REQUIRE_FALSE(toCheck.isPrime(0));
    }

    SECTION("1 is not prime") {
        REQUIRE_FALSE(toCheck.isPrime(1));
    }

    SECTION("2 is prime") {
        REQUIRE(toCheck.isPrime(2));
    }

    SECTION("3 is prime") {
        REQUIRE(toCheck.isPrime(3));
    }

    SECTION("4 is not prime") {
        REQUIRE_FALSE(toCheck.isPrime(4));
    }

    SECTION("17 is prime") {
        REQUIRE(toCheck.isPrime(17));
    }

    SECTION("18 is not prime") {
        REQUIRE_FALSE(toCheck.isPrime(18));
    }
}


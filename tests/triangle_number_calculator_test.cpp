#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/triangle_number_calculator.hpp"

TEST_CASE("TriangleNumberCalculator::value calculates triangular numbers correctly") {
    TriangleNumberCalculator calculator;

    REQUIRE(calculator.value(1) == 1);
    REQUIRE(calculator.value(2) == 3);
    REQUIRE(calculator.value(3) == 6);
    REQUIRE(calculator.value(4) == 10);
    REQUIRE(calculator.value(5) == 15);
    REQUIRE(calculator.value(0) == 0);
    REQUIRE(calculator.value(10) == 55);
    REQUIRE(calculator.value(20) == 210);
    REQUIRE(calculator.value(100) == 5050);
}

TEST_CASE("TriangleNumberCalculator::add adds triangular numbers correctly") {
    TriangleNumberCalculator calculator;

    REQUIRE(calculator.add(1, 1) == 2);
    REQUIRE(calculator.add(2, 3) == 9);
    REQUIRE(calculator.add(4, 2) == 13);
    REQUIRE(calculator.add(5, 5) == 30);
}

TEST_CASE("TriangleNumberCalculator::subtract subtracts triangular numbers correctly") {
    TriangleNumberCalculator calculator;

    REQUIRE(calculator.subtract(1, 1) == 0);
    REQUIRE(calculator.subtract(2, 3) == -3);
    REQUIRE(calculator.subtract(4, 2) == 7);
    REQUIRE(calculator.subtract(10, 5) == 40);
}

TEST_CASE("TriangleNumberCalculator::multiply multiplies triangular numbers correctly") {
    TriangleNumberCalculator calculator;

    REQUIRE(calculator.multiply(1, 1) == 1);
    REQUIRE(calculator.multiply(2, 3) == 18);
    REQUIRE(calculator.multiply(4, 2) == 30);
    REQUIRE(calculator.multiply(5, 4) == 150);
}

TEST_CASE("TriangleNumberCalculator::divide divides triangular numbers correctly") {
    TriangleNumberCalculator calculator;

    REQUIRE(calculator.divide(1, 1) == 1.0);
    REQUIRE(calculator.divide(2, 3) == 0.5);
    REQUIRE(calculator.divide(6, 3) == 3.5);
    REQUIRE(calculator.divide(10, 2) == 55.0 / 3.0);
}
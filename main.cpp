#include <iostream>

#include "src/triangle_number_calculator.hpp"

int main() {
  TriangleNumberCalculator calculator;

  std::cout << calculator.value(1); // This should print out 1
  std::cout << calculator.value(2); // This should print out 3
  std::cout << calculator.value(4); // This should print out 10

  std::cout << calculator.add(1, 1); // This should print out 2
  std::cout << calculator.add(2, 3); // This should print out 9
  std::cout << calculator.add(4, 2); // This should print out 13

  std::cout << calculator.subtract(1, 1); // This should print out 0
  std::cout << calculator.subtract(2, 3); // This should print out -3
  std::cout << calculator.subtract(4, 2); // This should print out 7
}

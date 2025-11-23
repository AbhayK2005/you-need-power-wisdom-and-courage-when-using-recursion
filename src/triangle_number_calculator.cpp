#include "triangle_number_calculator.hpp"

int TriangleNumberCalculator::value(int n) {
   if (n <= 0) {
      return 0;
   }
   if (n == 1) {
      return 1;
   }
   return n + value(n - 1);
}

int TriangleNumberCalculator::add(int n, int m) {
   return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
   return value(n) - value(m);
}

int TriangleNumberCalculator::multiply(int n, int m) {
   return value(n) * value(m);
}

double TriangleNumberCalculator::divide(int n, int m) {
   return static_cast<double>(value(n)) / static_cast<double>(value(m));
}
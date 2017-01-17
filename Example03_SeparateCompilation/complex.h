//
// Header file for the Complex class
//
// In this file we include all the declarations for functions related to the
// Complex number class.
//
// Lines 10, 11 and 34 contain "guards" which prevent included this file more
// than once in a single compilation unit.
//
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

// A basic complex number class
class Complex {
 private:
  double real_;
  double imag_;

 public:
  Complex(double real, double imag);
  Complex();
  double get_real();
  double get_imag();
};

// Operator overloads for the complex number class
std::ostream& operator<<(std::ostream& os, Complex z);  // Printing
Complex operator+(Complex lhs, Complex rhs);            // Addition
Complex operator*(Complex lhs, Complex rhs);            // Multiplication

#endif  // COMPLEX_H

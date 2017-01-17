//
// Implementation file for the Complex class.
//
// Here we include all the definitions of functions used by the complex number
// class. We need to include all headers used by the functions even if they are
// also included in main.cpp. The very first header is complex.h which contains
// the declarations of the functions we are about to define.
//
#include "complex.h"
#include <iostream>

// Implementation of operator overloads
std::ostream& operator<<(std::ostream& os, Complex z) {
  os << z.get_real() << " + " << z.get_imag() << "i";
  return os;
}
Complex operator+(Complex lhs, Complex rhs) {
  return Complex(lhs.get_real() + rhs.get_real(),
                 lhs.get_imag() + rhs.get_imag());
}

Complex operator*(Complex lhs, Complex rhs) {
  return Complex(
      lhs.get_real() * rhs.get_real() - lhs.get_imag() * rhs.get_imag(),
      lhs.get_imag() * rhs.get_real() + lhs.get_real() * rhs.get_imag());
}

// Implementation of Complex class methods
Complex::Complex(double real, double imag) {
  real_ = real;
  imag_ = imag;
}

Complex::Complex() {
  real_ = 0;
  imag_ = 0;
}

double Complex::get_real() { return real_; }

double Complex::get_imag() { return imag_; }

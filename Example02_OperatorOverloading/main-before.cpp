//
// Example 02: A complex number class
//
// In this example we will create a complex number class. The purpose of this
// example is to become familiar with operator overloading, and should not be
// used in practice as C++ already has a complex number class.
//
// For a list of the common arithmetic operators see:
//     http://en.cppreference.com/w/cpp/language/operator_arithmetic
//

#include <iostream>
using namespace std;

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
// TODO

// Start of test program
int main() {
  // TODO
  return 0;
}

// Implementation of operator over loads
// TODO

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

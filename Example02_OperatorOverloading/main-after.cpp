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
ostream& operator<<(ostream& os, Complex z);  // Printing
Complex operator+(Complex lhs, Complex rhs);  // Addition
Complex operator*(Complex lhs, Complex rhs);  // Multiplication

// Start of test program
int main() {
  Complex z(3, 2);
  Complex w(2, 2);
  cout << "z = " << z << endl
       << "w = " << w << endl
       << "z + w = " << z + w << endl
       << "z * w = " << z * w << endl;

  Complex i(0,1);
  cout << "i = " << i << endl << "i^2 = " << i * i << endl;

  return 0;
}

// Implementation of operator overloads
ostream& operator<<(ostream& os, Complex z) {
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

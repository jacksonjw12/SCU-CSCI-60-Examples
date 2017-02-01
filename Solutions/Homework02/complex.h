//
// Header file for the Complex class
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
  Complex conj();
  void operator+=(Complex rhs);
  void operator-=(Complex rhs);
  void operator*=(Complex rhs);
  void operator/=(Complex rhs);
};

// Operator overloads for the complex number class
std::ostream& operator<<(std::ostream& os, Complex z);
Complex operator+(Complex lhs, Complex rhs);
Complex operator-(Complex lhs, Complex rhs);
Complex operator*(Complex lhs, Complex rhs);
Complex operator/(Complex lhs, Complex rhs);

bool operator==(Complex lhs, Complex rhs);
bool operator!=(Complex lhs, Complex rhs);

Complex operator+(Complex z);
Complex operator-(Complex z);

#endif  // COMPLEX_H

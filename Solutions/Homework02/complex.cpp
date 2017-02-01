//
// Implementation file for the Complex class.
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

Complex operator-(Complex lhs, Complex rhs) {
  Complex z = lhs;
  z -= rhs;
  return z;
}

Complex operator*(Complex lhs, Complex rhs) {
  return Complex(
      lhs.get_real() * rhs.get_real() - lhs.get_imag() * rhs.get_imag(),
      lhs.get_imag() * rhs.get_real() + lhs.get_real() * rhs.get_imag());
}

Complex operator/(Complex lhs, Complex rhs) {
  Complex z = lhs;
  z /= rhs;
  return z;
}

bool operator==(Complex lhs, Complex rhs) {
  return lhs.get_real() == rhs.get_real() && lhs.get_imag() == rhs.get_imag();
}

bool operator!=(Complex lhs, Complex rhs) { return !(lhs == rhs); }

Complex operator+(Complex z) { return z; }

Complex operator-(Complex z) { return Complex(z.get_real(), -z.get_imag()); }

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

Complex Complex::conj() { return Complex(real_, -imag_); }

void Complex::operator+=(Complex rhs) {
  real_ += rhs.real_;
  imag_ += rhs.imag_;
}

void Complex::operator-=(Complex rhs) {
  real_ -= rhs.real_;
  imag_ -= rhs.imag_;
}

void Complex::operator*=(Complex rhs) {
  real_ = real_ * rhs.real_ - imag_ * rhs.imag_;
  imag_ = imag_ * rhs.real_ + real_ * rhs.imag_;
}

void Complex::operator/=(Complex rhs) {
  double rhs_mag = rhs.real_ * rhs.real_ + rhs.imag_ * rhs.imag_;
  double temp_real = real_ * rhs.real_ + imag_ * rhs.imag_;
  double temp_imag = imag_ * rhs.real_ - real_ * rhs.imag_;
  real_ = temp_real / rhs_mag;
  imag_ = temp_imag / rhs_mag;
}

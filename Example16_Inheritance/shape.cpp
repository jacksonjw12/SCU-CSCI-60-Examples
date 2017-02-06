#include "shape.h"

double Shape::y() const { return y_; }

void Shape::setY(double y) { y_ = y; }

double Shape::x() const { return x_; }

void Shape::setX(double x) { x_ = x; }

Shape::Shape() {}

Shape::Shape(double x, double y) : x_(x), y_(y) {}

std::ostream &operator<<(std::ostream &os, Shape s) {
  os << "X = " << s.x() << " Y = " << s.y();
  return os;
}

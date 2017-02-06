#include "rectangle.h"

double Rectangle::height() const { return height_; }

void Rectangle::setHeight(double height) { height_ = height; }

double Rectangle::width() const { return width_; }

void Rectangle::setWidth(double width) { width_ = width; }

Rectangle::Rectangle() {}

Rectangle::Rectangle(double x, double y, double width, double height)
    : Shape(x, y), width_(width), height_(height) {}

std::ostream &operator<<(std::ostream &os, Rectangle r) {
  os << "X = " << r.x() << " Y = " << r.y() << std::endl
     << "H = " << r.height() << " W = " << r.width();
  return os;
}

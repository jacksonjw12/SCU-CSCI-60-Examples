#include "square.h"

Square::Square() {}

Square::Square(double x, double y, double side) : Rectangle(x, y, side, side) {}

double Square::side() { return height(); }

void Square::setSide(double side) {
  Rectangle::setHeight(side);
  Rectangle::setWidth(side);
}

std::ostream &operator<<(std::ostream &os, Square s) {
  os << "X = " << s.x() << " Y = " << s.y() << std::endl
     << "H = " << s.height() << " W = " << s.width();
  return os;
}

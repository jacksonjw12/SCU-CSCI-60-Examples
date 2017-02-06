#include "square.h"

Square::Square() {}

Square::Square(double x, double y, double side) : Rectangle(x, y, side, side) {}

double Square::side() { return height(); }

void Square::setSide(double side) { setHeight(side); }

// Uses Rectangle's setHeight and setWidth
void Square::setHeight(double side) {
  Rectangle::setHeight(side);
  Rectangle::setWidth(side);
}

void Square::setWidth(double side) { setHeight(side); }

std::ostream &operator<<(std::ostream &os, Square s) {
  os << "X = " << s.x() << " Y = " << s.y() << std::endl
     << "H = " << s.height() << " W = " << s.width();
  return os;
}

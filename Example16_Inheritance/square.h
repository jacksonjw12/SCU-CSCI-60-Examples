#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

// To create the class square we will inherit from the class rectangle. For
// square we will force the member functions setSide, setHeight and setWidth to
// all do the same thing.
class Square : public Rectangle {
 public:
  Square();
  Square(double x, double y, double side);
  double side();
  void setSide(double side);
  void setHeight(double side);
  void setWidth(double side);
};

std::ostream& operator<<(std::ostream& os, Square s);

#endif  // SQUARE_H

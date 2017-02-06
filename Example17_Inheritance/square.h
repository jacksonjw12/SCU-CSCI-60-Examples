#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

// To create the class square we will inherit from the class rectangle.
// Instead of changing the implementation of setHeight and setWidth, as we
// did in the last example, we just remove them.
class Square : public Rectangle {
 public:
  Square();
  Square(double x, double y, double side);
  double side();
  void setSide(double side);
  void setHeight(double side) = delete;  // Remove the inherited member function
  void setWidth(double side) = delete;   // Remove the inherited member function
};

std::ostream& operator<<(std::ostream& os, Square s);

#endif  // SQUARE_H

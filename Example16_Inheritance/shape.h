#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

// The Shape class will server as a starting point from which we will build
// the additional classes: Rectangle and Square.
class Shape {
 private:
  double x_;
  double y_;

 public:
  Shape();
  Shape(double x, double y);

  double y() const;
  void setY(double y);
  double x() const;
  void setX(double x);
};

std::ostream& operator<<(std::ostream& os, Shape s);

#endif  // SHAPE_H

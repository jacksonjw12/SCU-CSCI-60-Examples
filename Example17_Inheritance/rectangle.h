#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

// The class Rectangle inherits from the class Shape. In this situation we say
// that Shape is the base class and Rectangle is the derived class.
class Rectangle : public Shape {
 private:
  double width_;
  double height_;

 public:
  Rectangle();
  Rectangle(double x, double y, double width, double height);

  double height() const;
  void setHeight(double height);
  double width() const;
  void setWidth(double width);
};

std::ostream& operator<<(std::ostream& os, Rectangle r);

#endif  // RECTANGLE_H

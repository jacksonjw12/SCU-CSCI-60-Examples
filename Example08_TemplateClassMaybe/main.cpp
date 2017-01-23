//
// Example08: Maybe class
//
// In this example we will create a template class called Maybe. This class is
// used to represent a value that may or may not exists. Commonly such a type
// is used as a return type for functions that may fail.
//
// A more full featured version of our maybe class will be included in C++17,
// as std::optional
//
#include <iostream>
#include "maybe.h"

int main() {
  Maybe<int> t(3);
  std::cout << t.has_value() << std::endl << t.value() << std::endl;
  Maybe<int> s;
  std::cout << s.has_value() << std::endl << s.value() << std::endl;
  return 0;
}

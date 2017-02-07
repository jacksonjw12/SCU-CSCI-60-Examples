//
// Example 20: What calls who
//
// The purpose of this example is to show what constructors and operators get
// called when you work with objects. This is worth spending some time on, as
// many performance problems in C++ can be traced back to making too many
// copies.
//
#include <iostream>

class Simple {
 public:
  Simple() { std::cout << "Called default constructor: Simple()" << std::endl; }

  Simple(const Simple& that) {
    std::cout << "Called copy constructor: Simple(const Simple& that)"
              << std::endl;
  }

  void operator=(const Simple& that) {
    std::cout
        << "Called assignment operator: void operator=(const Simple &that)"
        << std::endl;
  }
};

Simple func1(Simple s) { return s; }

Simple func2(Simple& s) { return s; }

Simple& func3(Simple& s) { return s; }

int main() {
  // Example 1
  std::cout << "Example 1" << std::endl;
  Simple a;
  std::cout << std::endl;

  // Example 2
  std::cout << "Example 2" << std::endl;
  Simple b(a);
  std::cout << std::endl;

  // Example 3
  std::cout << "Example 3" << std::endl;
  Simple c = b;
  std::cout << std::endl;

  // Example 4
  std::cout << "Example 4" << std::endl;
  a = b;
  std::cout << std::endl;

  // Example 5
  std::cout << "Example 5" << std::endl;
  Simple x = func1(a);
  std::cout << std::endl;

  // Example 6
  std::cout << "Example 6" << std::endl;
  x = func1(a);
  std::cout << std::endl;

  // Example 7
  std::cout << "Example 7" << std::endl;
  Simple y = func2(a);
  std::cout << std::endl;

  // Example 8
  std::cout << "Example 8" << std::endl;
  y = func2(a);
  std::cout << std::endl;

  // Example 9
  std::cout << "Example 9" << std::endl;
  Simple z = func3(a);
  std::cout << std::endl;

  // Example 10
  std::cout << "Example 10" << std::endl;
  z = func3(a);
  std::cout << std::endl;

  return 0;
}

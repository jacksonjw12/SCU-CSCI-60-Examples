//
// Example 20: What calls who two
//
// In this example we see that destructors are called as soon as an object
// goes out of scope.
//
#include <iostream>
#include <string>

template <char Name>
class Simple {
 public:
  // Default Constructor
  Simple() {
    std::cout << Name << " : Default constructor: Simple()" << std::endl;
  }

  // Copy Constructor
  Simple(const Simple& that) {
    std::cout << Name << " : Copy constructor: Simple(const Simple& that)"
              << std::endl;
  }

  // Destructor
  ~Simple() { std::cout << Name << " : Destructor: ~Simple()" << std::endl; }

  // Assignment operator
  void operator=(const Simple& that) {
    std::cout << Name
              << " : Assignment operator: void operator=(const Simple &that)"
              << std::endl;
  }
};

int main() {
  Simple<'A'> r;
  Simple<'B'> s;
  {
    Simple<'C'> t;
    Simple<'D'> u;
  }
  Simple<'E'> v;
  Simple<'F'> w;
  return 0;
}

//
// Example 07: Template return types
//
// Template type deduction does not work for return types automatically. In
// this example we will see how to work around this limitation in C++98 and
// C++11 (and beyond).
//
#include <iostream>
#include <string>

//
// C++98 Version
//
// We have written a template function that sums two values of possibly
// different types. This creates a problem for the return type, as we would
// link int+int to return an int and double+int to return a double.
//
// In this version we will use a third type parameter for the return value and
// specify this type when we call the function.
//
template <typename R, typename T1, typename T2>
R old_sum(T1 a, T2 b) {
  return a + b;
}

//
// C++11 (and beyond)
//
// In this version we will use the 'decltype' keyword for the return type. In
// decltype of an expression is equal to the type of the expression. For this
// to work I need to using trailing return syntax, so that the arguments a and
// b are in scope.
//
template <typename T1, typename T2>
auto new_sum(T1 a, T2 b) -> decltype(a + b) {
  return a + b;
}

int main() {
  int x = 5;
  double y = 7.7;
  std::string s = "AA";
  std::string t = "BB";

  // When using old_sum we need to specify the return type
  std::cout << old_sum<double>(x, y) << std::endl
            << old_sum<std::string>(s, t) << std::endl;

  // When using new_sum the return type is automatically deduced
  std::cout << new_sum(x, y) << std::endl << new_sum(s, t) << std::endl;

  return 0;
}

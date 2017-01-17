//
// Example 05: Type inference with auto (modern)
//
// In this example we will see some of the ways that the 'auto' keyword can be
// used to infer types in the C++11 and C++14 standards. To compile this
// example you will need to set your C++ standard to C++14.
//
#include <iostream>

//
// Trailing return types (valid in C++11 and beyond)
//
// It is now possible to specify the return type at the end of the function
// declaration. To do this we specify the return type as 'auto' and then place
// '-> TYPE' at the end of the function declaration.
//
auto half(int n) -> int {  // The return type here is specified as int
  return n / 2;
}

//
// Return type inference (valid in C++14 and beyond)
//
// If the compiler can determine the return type of a function it can, be
// omitted entirely!
//
auto fun_sum(int a, int b) {  // The return type is inferred as int
  return a + b;
}

int main() {
  //
  // Variable type inference
  //
  // We can use the 'auto' key word to infer the type of variables too!
  //
  auto x = 7;              // type can be: int, long int, long long int
  auto y = 8;              // type can be: int, long int, long long int
  auto s = fun_sum(x, y);  // type is same as x and y
  auto h = half(x);        // type is same as x
  std::cout << "s = " << s << std::endl << "h = " << h << std::endl;

  auto name = "Michael J. Bannister";  // type is char*, i.e. a C-string
  std::cout << "name= " << name << std::endl;

  using namespace std::string_literals;  // Enables string literals
  auto subject = "Computer Science"s;    // Use string literal make C++ string
  std::cout << "subject = " << subject << std::endl
            << "length = " << subject.length();

  auto score = 40.7;  // type is double
  std::cout << "score = " << score << std::endl;

  return 0;
}

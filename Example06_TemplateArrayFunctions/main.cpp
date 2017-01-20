//
// Example 06: Template array functions
//
// Here we create a template sum_array function that will sum the elements in
// any array, assuming the types overload += and have a default constructor.
//
#include <iostream>
#include <string>

template <typename T>
T sum_array(T A[], int size) {
  // Initialize sum to its default value
  //
  // In class I wrote
  //   T sum();
  // unfortunately this will not work as the parser will interpret that line
  // as a function declaration, but the following line will work.
  T sum = T();
  for (int i = 0; i < size; i++) sum += A[i];
  return sum;
}

int main() {
  const int msg_sz = 4;
  std::string msg[msg_sz] = {"Hello", " ", "world", "!"};
  std::string output = sum_array(msg, msg_sz);
  std::cout << output << std::endl;
  return 0;
}

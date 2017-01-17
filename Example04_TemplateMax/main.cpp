#include <iostream>
#include <string>

//
// A family of max functions in C style
//
// In C two functions cannot have the same name so function that do essentially
// the same thing, but differ in their input argument names need different
// name.
//
int max_i(int a, int b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}
double max_d(double a, double b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}
std::string max_s(std::string a, std::string b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}

//
// A family of max function in C++ style
//
// In C++ things are slightly better, as we can now use the same name for all
// of the max functions.
//
int better_max(int a, int b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}
double better_max(double a, double b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}
std::string better_max(std::string a, std::string b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}

//
// A single template max function for all types
//
// Using the C++ template meta-language we can write a single template
// function for all current and future types that support comparison.
//
template <typename T>
T best_max(T a, T b) {
  if (a < b) {
    return b;
  } else {
    return a;
  }
}

int main() {
  // Calling the functions for int type
  int a = 2;
  int b = 9;
  std::cout << max_i(a, b) << std::endl
            << better_max(a, b) << std::endl
            << best_max(a, b) << std::endl;

  // Calling the function for double type
  double x = 2.8;
  double y = 9.3;
  std::cout << max_d(x, y) << std::endl
            << better_max(x, y) << std::endl
            << best_max(x, y) << std::endl;

  // Calling the function for string type
  std::string s = "dog";
  std::string t = "cat";
  std::cout << max_s(s, t) << std::endl
            << better_max(s, t) << std::endl
            << best_max(s, t) << std::endl;

  return 0;
}

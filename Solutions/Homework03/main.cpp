#include <iostream>
#include <tuple>  // Needed for std::tie later

// Problem 1
template <typename T>
T my_dist(T a, T b) {
  auto d1 = a - b;
  auto d2 = b - a;
  return d1 < d2 ? d2 : d1;
}

// Problem 2
template <typename T, typename S>  // Also OK to just use int for sizes here
T my_product(T arr[], S sz) {
  auto p = arr[0];  // I am assuming here that sz > 0...
  for (S i = 1; i < sz; i++) p *= arr[i];
  return p;
}

// Problem 3
template <typename T>
void my_swap(T& a, T& b) {
  // Normal solutions:
  //   auto temp = a;
  //   a = b;
  //   b = temp;

  // Improved(?) solution using modern C++
  std::tie(a, b) = std::make_pair(b, a);
}

// Problem 4
template <typename T, typename S>  // Also OK to just use int for sizes here
S my_mismatch(T arr1[], T arr2[], S sz) {
  S i = 0;
  while (i < sz && arr1[i] != arr2[i]) i++;
  return i;
}

int main() {
  double x = 11.8;
  double y = 77.1;
  std::cout << my_dist(x, y) << std::endl << std::endl;

  int a[5] = {1, 2, 3, 4, 5};
  std::cout << my_product(a, 5) << std::endl << std::endl;

  my_swap(x, y);
  std::cout << "x = " << x << "  y = " << y << std::endl << std::endl;

  return 0;
}

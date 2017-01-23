//
// Example10: The C++ array class, std::array
//
// The container type std::array is used when you need a fixed size array and
// you know the size of the array when writing the program.
//
// Read more about std::array: http://en.cppreference.com/w/cpp/container/array
//
#include <array>
#include <iostream>

void f(std::array<int, 5> A);

int main() {
  // Here we create an array of size 5
  std::array<int, 5> arr = {0, 1, 2, 3, 4};

  // std::arrays behave like typically values in C++, which means they obey the
  // usual pass-by-copy behavior, unlike C style arrays. So if you want a
  // function to modify a std::array you will need to use pass by reference.
  std::cout << "arr[0] = " << arr[0] << std::endl;
  f(arr);
  std::cout << "arr[0] = " << arr[0] << std::endl;

  // std::arrays know there own size, unlike C style arrays
  std::cout << "arr.size() = " << arr.size() << std::endl;

  // Like strings std::array has .at() which check bounds! Uncomment the
  // following line and you will get an informative error when you run the
  // program.
  // std::cout << arr.at(10) << std::endl;

  // Another nice feature is the so called range-for-loop, which loops over the
  // values of the array without need an index.
  for (auto x : arr) {
    std::cout << x << " ";
  }
  std::cout << std::endl;

  // By default the range-for-loop creates a copy of each value in the array
  // so you cannot modify the array values. If we want to modify the values,
  // then we use a reference like with functions.
  for (auto& x : arr) {
    x = 10;
  }

  for (auto x : arr) {
    std::cout << x << " ";
  }
  std::cout << std::endl;

  // We can also prevent write and prevent copies at the same time by using
  // const-refs. Uncomment the next three line for a fun compiler error!
  // for (const auto& x : arr) {
  //   x = 0;
  // }

  return 0;
}

void f(std::array<int, 5> A) { A[0] = 1000; }

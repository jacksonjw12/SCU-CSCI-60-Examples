//
// Example 11: Vectors
//
// This example cover the most important vector operations. After understanding
// this example you should be able to for the most part use vectors whenever
// you would have used an array in the past.
//
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  // Create a vector, vec1, with no elements
  std::vector<int> vec1;
  // Add the elements 1,2,3 to vec1
  vec1.push_back(1);
  vec1.push_back(2);
  vec1.push_back(3);
  // Print the size of the vector
  std::cout << "vec1 has " << vec1.size() << " many elements." << std::endl;
  // Print out the vector
  for (auto x : vec1) std::cout << x << " ";
  std::cout << std::endl;
  // Print just the element at spot 1
  std::cout << "vec1[1] = " << vec1[1] << std::endl;
  // Print just the element at spot 1 with bounds checking
  std::cout << "vec1.at(1) = " << vec1.at(1) << std::endl;

  // Remove the last element
  vec1.pop_back();
  for (auto x : vec1) std::cout << x << " ";
  std::cout << std::endl;

  // Create a vector of length 10 with each cell having a 7 in it
  std::vector<int> vec2(10, 7);
  for (auto x : vec2) std::cout << x << " ";
  std::cout << std::endl;

  // Initialize a vector using an array literal
  std::vector<int> vec3 = {6, 2, 1, 2, 9, 3, 1, 2, 1, 6, 0, 5, 6, 4, 1, 9};
  for (auto x : vec3) std::cout << x << " ";
  std::cout << std::endl;

  // Sort a vector in increasing order
  std::sort(vec3.begin(), vec3.end());
  for (auto x : vec3) std::cout << x << " ";
  std::cout << std::endl;

  // In class we also talked about reverse sorting using lambda expressions.
  // We will come back to that topic later in the class...
  //
  // The following is a lambda expression:
  //   [](int x, int y) -> bool {return x > y;}
  //
  // In has the same meaning as the function, but has no name:
  //   bool compare(int x, int y) {
  //     return x > y;
  //  }
  std::sort(vec3.begin(), vec3.end(),
            [](int x, int y) -> bool { return x > y; });
  for (auto x : vec3) std::cout << x << " ";
  std::cout << std::endl;

  return 0;
}

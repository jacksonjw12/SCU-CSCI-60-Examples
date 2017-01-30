//
// Example 13: Sets
//
// The set data structure stores a collection of objects subject to the
// rule that duplicates are not stored more than once.
//
#include <iostream>
#include <set>

int main() {
  // Create an empty set of strings
  std::set<std::string> string_set;

  // Add four strings
  string_set.insert("Apple");
  string_set.insert("Orange");
  string_set.insert("Lemon");
  string_set.insert("Orange");

  std::cout << "The size of the string set is " << string_set.size()
            << std::endl;

  std::cout << "The set contains: ";
  for (auto x : string_set) std::cout << x << " ";
  std::cout << std::endl;

  return 0;
}

//
// Example 12: Maps
//
// A map (also called a dictionary) is data structure that allows you to
// associate keys with values. The rules are like those of functions in
// mathematics, i.e., every key is associated with a unique value. The syntax
// for maps is the same as the syntax for arrays, but instead of just int
// value for indices we can use just about anything!
//
// This example show that basics on how we can use maps.
//
#include <iostream>
#include <map>
#include <vector>

int main() {
  // Create a map with string for keys and ints for values
  std::map<std::string, int> name_to_age;

  // Add some associations to the map
  name_to_age["Bob Smith"] = 19;
  name_to_age["John Doe"] = 34;
  name_to_age["Jane Doe"] = 37;

  // We can work with maps just like arrays
  name_to_age["Jane Doe"]++;

  // To check if a key is in the map we use the count function
  std::vector<std::string> names = {"Bob Smyth", "Jane Doe"};
  for (auto x : names) {
    if (name_to_age.count(x) > 0) {
      std::cout << x << " is " << name_to_age[x] << " years old." << std::endl;
    } else {
      std::cout << "I don't know how old " << x << " is!" << std::endl;
    }
  }
  return 0;
}

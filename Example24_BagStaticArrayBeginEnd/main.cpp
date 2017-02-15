//
// Example 24: Supporting Range-For-Loops
//
// In this example we extend the Bag class from Example 19 so that it can be
// used in a range-for-loop.
//
#include <cassert>
#include <iostream>
#include "bag.h"

using namespace std;

int main() {
  Bag<int> bag;
  bag.debug_info("bag");

  for (int i = 0; i < 10; ++i) bag.insert(i % 4);
  bag.debug_info("bag");

  cout << "bag.size() = " << bag.size() << endl;
  cout << "bag.count(0) = " << bag.count(0) << endl;

  bag.erase_one(0);
  bag.debug_info("bag");

  cout << bag.erase(1) << endl;
  bag.debug_info("bag");

  Bag<int> bag2 = bag;
  bag2.insert(9);

  bag.debug_info("bag");
  bag2.debug_info("bag2");

  bag2 = bag;
  bag2.debug_info("bag2");

  Bag<int> bag3;
  for (int i = 10; i < 20; ++i) bag3.insert(i);
  bag3.debug_info("bag3");
  bag += bag3;
  bag.debug_info("bag");

  Bag<int> bag4 = bag + bag2;
  bag4.debug_info("bag4");

  // Using a range-for-loop to print a bag
  for (auto e : bag4) std::cout << e << std::endl;

  return 0;
}

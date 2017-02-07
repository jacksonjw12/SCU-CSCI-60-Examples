//
// Example 19: Bag implemented with a static array
//
// In this example, we implement the Bag data structure using a static
// (fixed-size) array.
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

  return 0;
}

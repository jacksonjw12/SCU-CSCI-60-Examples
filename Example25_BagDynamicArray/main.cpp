//
// Example 25: Bag implemented with a dynamic array
//
// In this example we modify out Bag based on a static array to one based on a
// dynamic array. That means we can now have Bags of unbounded size!
//
#include <cassert>
#include <iostream>
#include "bag.h"

using namespace std;

int main() {
  Bag<int> bag;
  for (int i = -10; i < 10; ++i) bag.insert(i);
  bag.debug_info("bag");

  Bag<int> b1 = bag;  // Copy constructor
  b1.debug_info("b1");

  // Should add more testing...

  return 0;
}

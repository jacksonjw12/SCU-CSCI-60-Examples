//
// Example 03: Separate compilation
//
// In this example we take the code from Example 02 and divide it into
// separate header and implementation files. Additionally, we remove the
// use of 'using namespace std'.
//

#include <iostream>
#include "complex.h"

// Start of test program
int main() {
  Complex z(3, 2);
  Complex w(2, 2);
  std::cout << "z = " << z << std::endl
            << "w = " << w << std::endl
            << "z + w = " << z + w << std::endl
            << "z * w = " << z * w << std::endl;

  Complex i(0, 1);
  std::cout << "i = " << i << std::endl << "i^2 = " << i * i << std::endl;

  return 0;
}

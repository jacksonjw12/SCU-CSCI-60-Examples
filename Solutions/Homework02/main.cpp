
#include <iostream>
#include "complex.h"

// Start of test program
int main() {
  Complex z(3, 2);
  Complex w(2, 2);
  std::cout << "z = " << z << std::endl
            << "w = " << w << std::endl
            << "z + w = " << z + w << std::endl
            << "z * w = " << z * w << std::endl
            << "z - w = " << z - w << std::endl
            << "z / w = " << z / w << std::endl
            << "z == w " << (z == w) << std::endl
            << "z != w " << (z != w) << std::endl
            << "z + w == w + z " << (z + w == w + z) << std::endl
            << "z + w != w + z " << (z + w != w + z) << std::endl
            << "conjugate of z is " << z.conj() << std::endl;

  Complex i(0, 1);
  std::cout << "i = " << i << std::endl << "i^2 = " << i * i << std::endl;

  return 0;
}

//
// Example 25: A first look at recursion
//
// In this example we take a look at three basic recursive functions.
//
#include <iostream>

int fib(int n);
int array_sum(int* A, int sz);
int gauss_sum(int k);

int main() {
  // Add some test code to play with these functions!

  return 0;
}

int fib(int n) {
  if (n == 0 || n == 1) return n;
  return fib(n - 1) + fib(n - 2);
}

int array_sum(int* A, int sz) {
  if (sz == 0) return 0;
  return array_sum(A, sz - 1) + A[sz - 1];
}

int gauss_sum(int k) {
  if (k <= 0) return 0;
  return gauss_sum(k - 1) + k;
}

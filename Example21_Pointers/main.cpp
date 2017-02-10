//
// Example 21: Intro to pointers
//
// This example is quick intro to the use of pointer.
//
#include <iostream>

using namespace std;

int main() {
  int a = 9;

  // All variables in C++ name a location in your computers memory. This memory
  // location is identified with an address, which can be thought of as an
  // index into a very large array. We can gain access to this address using &.
  cout << "The address of a is " << &a << "." << endl;

  // Pointer variables are variable which are used to store addresses.
  int* p = &a;
  cout << "The value of p is " << p << "." << endl;

  // To gain access to the value at an address we use *.
  cout << "The value at address " << p << " is " << *p << "." << endl;

  // We can also change the value of a variable via a pointer
  *p = 111;
  cout << "The value of a is " << a << endl;

  // When we create a new point we should either initialize it to a valid
  // address or to nullptr.
  int* q = nullptr;

  // To pointers can point to the same thing! Below both p and q point to a.
  q = p;

  // Arrays can be thought of as pointers (they are not exactly the same).
  //
  // When we write A[k] what is really happening is *(A + k)
  int A[3] = {4,5,6};
  for (int i = 0; i < 3; i++) cout << *(A + i) << " ";
  cout << endl;

  // If we push this concept, we see that: A[k] = *(A + k) = *(k+A) = k[A].
  for (int i = 0; i < 3; i++) cout << i[A] << " ";
  // There is no real reason to do this, but it works!

  // Arrays should be thought of, as a pointer to their first value. There is
  // not real additional structure. This is why we need to maintain the size
  // of the array.

  return 0;
}

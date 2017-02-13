//
// Example 22: Dynamic Memory
//
// This example shows how we use new and delete to dynamically allocate and
// deallocate memory. We will use this code when extending our Bag class to
// work with Bags of arbitrary size.
//
#include <iostream>

template <typename T>
T* ensure_capacity(T* data, std::size_t& sz, std::size_t &cap) {
  if (sz < cap) return data;
  cap *= 2;
  T* new_data = new T[cap];
  for (std::size_t i = 0; i < sz; ++i) new_data[i] = data[i];
  delete[] data;
  return new_data;
}

template <typename T>
T* push_back(T* data, std::size_t &sz, std::size_t &cap, T value) {
  data = ensure_capacity(data, sz, cap);
  data[sz++] = value;
  return data;
}

int main() {
  std::size_t capacity = 2;
  std::size_t size = 0;
  int* data = new int[capacity];

  for (int i = 0; i < 20; ++i) {
    std::cout << i << "  :  ";
    std::cout << data << " -> ";
    data = push_back(data, size, capacity, i);
    std::cout << data << std::endl;
  }

  for (int i = 0; i < size; ++i) std::cout << data[i] << " ";
  std::cout << std::endl;

  return 0;
}

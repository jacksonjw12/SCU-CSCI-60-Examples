//
// Bag implemented with a static array.
//
// Pay close attention to the types, as they are by far the most confusing
// thing going on here!
//
#ifndef BAG_H
#define BAG_H

#include <cstdlib>
#include <string>

template <typename T>
class Bag {
 public:
  Bag();
  Bag(const Bag<T>& that);
  Bag& operator=(const Bag<T>& that);

  using value_type = T;
  using size_type = std::size_t;
  static constexpr size_type CAPACITY = 25;  // Bag::CAPACITY

  size_type size() const;
  void insert(const value_type& value);
  size_type count(const value_type& value) const;
  bool erase_one(const value_type& value);
  size_type erase(const value_type& value);

  void operator+=(const Bag& that);

  void debug_info(std::string name);  // Added to help with debugging
 private:
  value_type data_[CAPACITY] = {0};
  size_type size_ = 0;
};

template <typename T>
Bag<T> operator+(const Bag<T>& rhs, const Bag<T>& lhs);

//
// Implementations below this point.
//

template <typename T>
Bag<T>::Bag() {}

template <typename T>
Bag<T>::Bag(const Bag<T>& that) {
  size_ = that.size_;
  for (size_type i = 0; i < size_; ++i) data_[i] = that.data_[i];
}

template <typename T>
Bag<T>& Bag<T>::operator=(const Bag<T>& that) {
  if (this == &that) return *this;
  size_ = that.size_;
  for (size_type i = 0; i < size_; ++i) data_[i] = that.data_[i];
  return *this;
}

template <typename T>
typename Bag<T>::size_type Bag<T>::size() const {
  return size_;
}

template <typename T>
void Bag<T>::insert(const Bag<T>::value_type& value) {
  assert(size_ < CAPACITY);
  data_[size_++] = value;
}

// We need to prefix the return type to this function with 'typename', as
// Bag<T>::size_type is what is known as a dependent type.
//
// You can read more about dependent types here:
//   http://en.cppreference.com/w/cpp/language/dependent_name
template <typename T>
typename Bag<T>::size_type Bag<T>::count(
    const Bag<T>::value_type& value) const {
  size_type count = 0;
  for (size_type i = 0; i < size_; ++i) {
    if (data_[i] == value) count++;
  }
  return count;
}

template <typename T>
bool Bag<T>::erase_one(const Bag<T>::value_type& value) {
  size_type i = 0;
  while (i < size_ && data_[i] != value) ++i;
  if (i == size_) return false;
  data_[i] = data_[--size_];
  return true;
}

template <typename T>
typename Bag<T>::size_type Bag<T>::erase(const Bag<T>::value_type& value) {
  size_type count = 0;
  while (erase_one(value)) ++count;
  return count;
}

template <typename T>
void Bag<T>::operator+=(const Bag<T>& that) {
  for (size_type i = 0; i < that.size_; ++i) insert(that.data_[i]);
}

template <typename T>
void Bag<T>::debug_info(std::string name) {
  using namespace std;
  cout << name << endl;
  cout << "    size_ = " << size_ << endl << "    data_ = {";
  for (size_type i = 0; i < size_; ++i) {
    cout << data_[i];
    if (i < size_ - 1) cout << ", ";
  }
  cout << "}" << endl;
}

template <typename T>
Bag<T> operator+(const Bag<T>& rhs, const Bag<T>& lhs) {
  Bag<T> temp = rhs;
  temp += lhs;
  return temp;
}

#endif  // BAG_H

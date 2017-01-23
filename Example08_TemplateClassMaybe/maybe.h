//
// The template class Maybe
//
#ifndef MAYBE_H
#define MAYBE_H

#include <stdexcept>  // Need to throw a runtime_error

template <typename T>
class Maybe {
 private:
  T value_;
  bool has_value_;

 public:
  Maybe();
  Maybe(T value);
  bool has_value();
  T value();
};

template <typename T>
Maybe<T>::Maybe() {
  has_value_ = false;
}

template <typename T>
Maybe<T>::Maybe(T value) {
  value_ = value;
  has_value_ = true;
}

template <typename T>
bool Maybe<T>::has_value() {
  return has_value_;
}

template <typename T>
T Maybe<T>::value() {
  if (!has_value_)
    throw std::runtime_error("Called value(), but has no value!");
  return value_;
}

#endif  // MAYBE_H

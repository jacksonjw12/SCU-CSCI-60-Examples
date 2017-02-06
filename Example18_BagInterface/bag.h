#ifndef BAG_H
#define BAG_H

#include <cstdlib>

template <typename T>
class Bag {
 public:
  // Default Constructor
  // Creates an empty Bag class, i.e., a Bag containing no items.
  Bag();

  // Copy Constructor
  // This constructor is used whenever a copy of a Bag is made.
  Bag(const Bag<T>& that);

  // Assignment Operator
  // This operator is used when an existing Bag object is overwritten via
  // an assignment.
  Bag& operator=(const Bag<T>& that);

  // Bag Class Types and Constants
  using value_type = T;           // Type of Bag elements
  using size_type = std::size_t;  // Type used for size

  // size()
  // Returns the number of elements in the Bag.
  size_type size() const;

  // insert()
  // Inserts a single value into the array.
  void insert(const value_type& value);
  // count()
  // Returns the number of elements in Bag equal to value.
  size_type count(const value_type& value) const;

  // erase_one()
  // Erases a single instance of value in Bag.
  bool erase_one(const value_type& value);
  // erase()
  // Erases all instances of value in Bag
  size_type erase(const value_type& value);

  // operator+=
  // Adds all elements of the Bag 'that' to the current Bag.
  void operator+=(const Bag& that);
};

// operator+
// Computes the union of two Bag classes
template <typename T>
Bag<T> operator+(const Bag<T>& rhs, const Bag<T>& lhs);

#endif  // BAG_H

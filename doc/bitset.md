# Bitset
The class template bitset represents a fixed-size sequence of N bits.
Bitsets can be manipulated by standard logic operators and converted from strings and integers.
```c++
  int N;
  std::cin >> N;
  Bitset set(N);
```
A bitset stores bits (elements with only two possible values: 0 or 1, true or false, ...).
The class emulates an array of bool elements, but optimized for space allocation:
generally, each element occupies only one bit by using array of type char instead of type bool.

## 1. Main structure
Implement constructor and destructor:
```c++
#include <iostream>
#include <cstddef> // is used for type 'size_t'

class Bitset {
public:
  // creates a sequence of bits with size 'count', and fills the set with 0s
  explicit Bitset(size_t count);

  // delete allocated memory
  ~Bitset();

private:
  // variable for storing dynamic array of chars
  char *set;

  // fixed size of the sequence of bits
  size_t bitsSize;
};
```

### Example
```c++
  Bitset bset(12);
  // dynamic array of chars is created with size 2 and stored in a variable 'set'
  // set[1] -> [0000.0000]
  // set[0] -> [0000.0000]
  // which contains 16 bits, but we only use 12 of them
```

## 2. Get & Set
Add following functions:
```c++
  // return the bit with index in the set
  bool operator[](size_t index);

  // set the bit with index to 'value'
  void setValue(size_t index, bool value);
```

### Example
```c++
  Bitset bset(12);
  // set[1] -> [0000.0000]
  // set[0] -> [0000.0000]
  bset.setValue(1, true);
  bset.setValue(3, true);
  bset.setValue(4, true);
  bset.setValue(9, true);
  // set[1] -> [0000.0010]
  // set[0] -> [0001.1010]
  bool flag = bset[3] // bset[3] will return true
```

## 3. Copy & Move
Add member functions for construction and assignment
```c++
  Bitset(const Bitset &set);
  Bitset(Bitset &&set);

  Bitset &operator=(const Bitset &set);
  Bitset &operator=(Bitset &&set);
```

## 4. Console output
Overload `opeartor<<` for writing into console using `std::cout`
```c++
  friend std::ostream &operator<<(std::ostream &os, const Bitset &set);
```

## 5. Bitwise operators
Overload bitwise operators
```c++
  friend Bitset operator&(const Bitset &lhs, const Bitset &rhs);
  friend Bitset operator|(const Bitset &lhs, const Bitset &rhs);
  friend Bitset operator^(const Bitset &lhs, const Bitset &rhs);

  friend Bitset operator<<(const Bitset &lhs, unsigned int shift);
  friend Bitset operator>>(const Bitset &rhs, unsigned int shift);
  
  Bitset operator~();
```

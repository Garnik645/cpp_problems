# Bitset

## 1. Main structure
Implement main functionality:
* data members
* constructors
* destructor
```c++
#include <iostream>
#include <cstddef>

class Bitset {
public:
  explicit Bitset(size_t count);
  explicit Bitset(const std::string &str);

  ~Bitset();

private:
  unsigned char *set;
  size_t count;
};
```

## 2. Get & Set
Add following functions:
* `operator[]` for reading from bitset
* `setValue` for writing into bitset
```c++
  bool operator[](size_t index);

  void setValue(size_t index, bool value);
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

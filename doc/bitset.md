# Bitset
The class bitset represents a fixed-size sequence of N bits.
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
***NOTE:*** elements are indexed starting from 0.

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

## 3. Console output
Overload `opeartor<<` for writing into console using `std::cout`
```c++
  friend std::ostream &operator<<(std::ostream &os, const Bitset &set);
```

### Example
```c++
int main() {
  Bitset bset(12);
  bset.setValue(1, true);
  bset.setValue(3, true);
  bset.setValue(4, true);
  bset.setValue(9, true);
  std::cout << "Bitset: " << bset << '\n'; 
}
```

#### Console output:
```
Bitset: 001000011010
```

## 4. String constructor
Add a constructor so that Bitsets can be converted from strings:
```c++
  explicit Bitset(const std::string &str);
```

### Example
```c++
int main() {
  Bitset bset("01101110");
  std::cout << "Bitset before: " << bset << '\n';
  bset.setValue(0, true);
  bset.setValue(4, true);
  std::cout << "Bitset after:  " << bset << '\n';
}
```

#### Console output:
```
Bitset before: 01101110
Bitset after:  01111111
```

## 5. Copy & Move
Add member functions for construction and assignment:
```c++
  Bitset(const Bitset &set);
  Bitset(Bitset &&set);

  Bitset &operator=(const Bitset &set);
  Bitset &operator=(Bitset &&set);
```

### Example
```c++
int main() {
  Bitset bset1("00110");
  Bitset bset2(bset1);
  std::cout << "Bitset1: " << bset1 << '\n';
  std::cout << "Bitset2: " << bset2 << '\n';
  std::cout << '\n';
  bset1.setValue(0, true);
  std::cout << "Bitset1: " << bset1 << '\n';
  std::cout << "Bitset2: " << bset2 << '\n';
}
```

#### Console output:
```
Bitset1: 00110
Bitset2: 00110

Bitset1: 00111
Bitset2: 00110
```

## 6. Bitwise operators
Overload bitwise operators
```c++
  friend Bitset operator&(const Bitset &lhs, const Bitset &rhs);
  friend Bitset operator|(const Bitset &lhs, const Bitset &rhs);
  friend Bitset operator^(const Bitset &lhs, const Bitset &rhs);

  friend Bitset operator<<(const Bitset &lhs, unsigned int shift);
  friend Bitset operator>>(const Bitset &rhs, unsigned int shift);
  
  Bitset operator~();
```

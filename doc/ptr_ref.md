# What is the output of this program?

## 1
```c++
#include <iostream>

int main() {
  int x = 40;
  int* ptr1 = &x;
  int** ptr2 = &ptr1;
  int**& ptr3 = ptr2;

  std::cout << **ptr3 << std::endl;
  return 0;
}
```

## 2
```c++
#include <iostream>

int* CreateAndInitArray(int size, int initialValue) {
  int* arr = new int[size];
  for (int i = 0; i < size; ++i) {
    arr[i] = i * initialValue;
  }
  return arr;
}

void DoubleValue(int* ptr) {
  *ptr *= 2;
}

void SwapArrays(int* arr1, int* arr2) {
  int* tmp = arr1;
  arr1 = arr2;
  arr2 = tmp;
}

int main() {
  int* oldArray = CreateAndInitArray(3, 20);
  int* newArray = CreateAndInitArray(3, 10);
  SwapArrays(oldArray, newArray);
    
  for (int i = 0; i < 3; ++i) {
    DoubleValue(newArray + i);
  }

  int* ptr = newArray;
  ++ptr;

  std::cout << *ptr << std::endl;
  delete[] oldArray;
  delete[] newArray;
  return 0;
}
```

## 3
```c++
#include <iostream>

void addValue(int &lhs, int rhs) {
  lhs += rhs;
}

int *otherValue(int *new_ptr) {
  new_ptr = new int(10);
  addValue(*new_ptr, 20);
  return new_ptr;
}

void changeValue(int *ptr) {
  int &x = *ptr;
  int *y = otherValue(&x);
  x *= *y;
  delete y;
}

int main() {
  int n;
  int &m = n;
  m = 10;
  addValue(n, 10);
  changeValue(&m);
  std::cout << n << std::endl;
  return 0;
}
```

## 4
```c++
#include <iostream>

void addValue(int lhs, int rhs) {
  lhs += rhs;
}

int *getValue(int *myptr, int c) {
  myptr = new int[3]{3, 4, 5};
  int &ref = *(myptr + 2);
  addValue(ref, c);
  int *b = new int();
  *b = myptr[2];
  delete[] myptr;
  return b;
}

int *otherValue(int *iptr1, int **iptr2) {
  int *&other_ptr = iptr1;
  other_ptr = new int(**iptr2 + 5);
  return other_ptr;
}

void changeValue(int *ptr) {
  int &x = *ptr;
  ptr = nullptr;
  int *y = getValue(&x, 15);
  int *k = otherValue(&x, &y);
  x += (*k) * (*y);
  delete y;
  delete k;
}

int main() {
  int n = 10;
  int* ptr1 = nullptr;
  int*& ptr2 = ptr1;
  ptr2 = &n;
  changeValue(ptr1);
  std::cout << n << std::endl;
  return 0;
}
```

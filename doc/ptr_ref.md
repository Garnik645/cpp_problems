# What is the output of this program?
```c++
#include <iostream>

void modifyValue(int v, int a) {
  v += a;
}

int *getValue(int *myptr, int c) {
  myptr = new int[3]{3, 4, 5};
  int &ref = *(myptr + 2);
  modifyValue(ref, c);
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

#include <iostream>

struct Base1 {
  void f() {
    std::cout << "Base1\n";
  }
};

struct Base2 {
  void f() {
    std::cout << "Base2\n";
  }
};

struct Derived : Base1, Base2 {
};

int main() {
  Derived d;
  d.f();
}
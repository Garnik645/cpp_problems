#include <iostream>

struct Base {
  void f() {
    std::cout << "Base\n";
  }
};

struct Derived : Base {
  void f() {
    std::cout << "Derived\n";
  }
};

int main() {
  Base b;
  b.f();

  Derived d;
  d.f();

  Base &ref = d;
  ref.f();
}
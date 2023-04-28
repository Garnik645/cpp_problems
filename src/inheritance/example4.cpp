#include <iostream>

struct Base {
  virtual void f() {
    std::cout << "Base\n";
  }
};

struct Derived : Base {
  void f() override {
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

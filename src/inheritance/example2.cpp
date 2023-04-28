#include <iostream>

struct Base {
  Base(int y) {
    std::cout << "Base " << y << "\n";
  }
};

struct Derived : Base {
  Derived(int x, int y) : Base(y) {
    std::cout << "Derived " << x << "\n";
  }
};

int main() {
  Derived d(5, 3);
}

#include <iostream>

struct Base {
  Base() {
    std::cout << "Base()\n";
  }
  ~Base() {
    std::cout << "~Base()\n";
  }
};

struct Derived : Base {
  Derived() {
    std::cout << "Derived()\n";
  }
  ~Derived() {
    std::cout << "~Derived()\n";
  }
};

int main() {
  Base *ptr = new Derived();
  delete ptr;
}

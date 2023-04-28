#include <iostream>

struct Shape {
  virtual void printShape() = 0;
};

struct Triangle : Shape {
  void printShape() override {
    std::cout << "Triangle\n";
  }
};

struct Rectangle : Shape {
  void printShape() override {
    std::cout << "Rectangle\n";
  }
};

int main() {
  Rectangle r;
  Shape &s = r;
  s.printShape();
}

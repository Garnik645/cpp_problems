#include <iostream>
#include <cmath>

struct Shape {
  virtual double getArea() const = 0;
};

struct Triangle : Shape {
  double x;
  double y;
  double z;

  Triangle(int a, int b, int c) : x(a), y(b), z(c) {}

  double getArea() const override {
    double sp = (x + y + z) / 2;
    return std::sqrt(sp * (sp - x) * (sp - y) * (sp - z));
  }
};

struct Rectangle : Shape {
  double width;
  double height;

  Rectangle(int w, int h) : width(w), height(h) {}

  double getArea() const override {
    return width * height;
  }
};

void printArea(const Shape &s) {
  std::cout << s.getArea() << '\n';
}

int main() {
  Rectangle r(3, 4);
  printArea(r);
  Triangle t(5, 3, 4);
  printArea(t);
}

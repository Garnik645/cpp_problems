# Дерево отрезков

## Задача 1

Дополнить данный код так, чтобы для входного массива
была создано показанная на картинке дерево отрезков,
где каждый узел дерва хранит сумму элементов своего отрезка.

```c++
#include <iostream>

class SegmentTree {
  struct Node {
    Node *left{};
    Node *right{};
    Node *parent{};
    size_t range_left{};
    size_t range_right{};
    int range_sum{};

    Node(const std::vector<int> &array, size_t range_left, size_t range_right, Node *parent)
        : range_left(range_left),
          range_right(range_right),
          parent(parent) {
        // Add your code here
    }

  Node *root;
  size_t array_size;

public:
  explicit SegmentTree(const std::vector<int> &array) : array_size(array.size()) {
    root = new Node(array, 0, array_size - 1, nullptr);
  }
};

int main() {
  const std::vector v = {13, -1, 2, 23, -4, 231, 13, 5,
                         2, -88, -52, 0, 4, 90, 3, -12};
  SegmentTree st(v);
}
```

<table><tr><td>
<img src="../img/st1.png" alt="Example" title="Example" style="display: inline-block; margin: 0 auto; max-width: 500px; max-height: 500px">
</td></tr></table>

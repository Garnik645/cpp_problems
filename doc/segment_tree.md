# Дерево отрезков

## Задача 1

Дополнить данный код так, чтобы для входного массива
было создано показанное на картинке дерево отрезков,
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
<img src="../img/st1.png" alt="Example" title="Example" style="display: inline-block; margin: 0 auto; max-width: 600px; max-height: 600px">
</td></tr></table>

## Задача 2
Добавить в класс **SegmentTree** следующие рекурсивные функции для обхода дерева,
которые напечатают значения узлов дерева во время обхода.
```c++
void inorder_traversal();
void post_traversal();
void preorder_traversal();
```

<table><tr><td>
<img src="../img/traversal.png" alt="Example" title="Example" style="display: inline-block; margin: 0 auto; max-width: 350px; max-height: 350px">
</td></tr></table>

## Задача 3
Добавить в класс **SegmentTree** функцию **update**, которая поменяет значение **k**-того элемента массива на **x**,
(т.е. **a[k] = x;**) и поменяет значения узлов дерева отрезков, которые зависили от **k**-того элемента массива.
```c++
void update(size_t k, int x);
```

## Задача 4
Добавить в класс **SegmentTree** функцию **getSum**, которая возвращает сумму элементов интервала **[left, right]** .
```c++
int getSum(size_t left, size_t right);
```

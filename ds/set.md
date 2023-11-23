# Будущее Домашнее Задание 4
Правила отправки домашнего задания описаны [тут](./info.md).

## Класс Set
Реализовать класс Set со структурой бинарного дерева поиска.
Если есть вопросы насчет реализации, можно посмотреть описание функций [тут](https://en.cppreference.com/w/cpp/container/set).

### Insert & Traversal (1 балл)
Написать для данной структуры функцию для добавления элементов в
бинарное дерево поиска и функцию для вывода значений дерева в порядке **inorder**.
Класс может иметь следующие вид:
```c++
#include <iostream>

template<typename T>
class Set {
  struct Node {
    T value;
    Node *left;
    Node *right;
    Node *parent;

    // Functions can be added if necessary
  };

  Node *root{};
  size_t size_{};

public:
  void insert(const T &value);

  void print_inorder();
};
```

**Замечание:** данная структура должна работать для любого типа **T**,
для которого определен оператор меньше.
Эквивалентность элементов можно проверить через выражение
**!(a < b) && !(b < a)**

#### Пример
```c++
int main() {
  Set<int> st;
  st.insert(10);
  st.insert(-10);
  st.insert(20);
  st.insert(10);
  st.insert(0);
  st.print_inorder(); // Output: -10 0 10 20
}
```

### Iterators & Find (1 балл)
Добавить **Forward** итератор для класса и функцию для поиска элементов:
```c++
class iterator {
  Node *current;
public:
  using value_type = T;
  using reference = T&;
  using pointer = T*;
  using difference_type = std::ptrdiff_t;
  using iterator_category = std::forward_iterator_tag;

  iterator();
  iterator(Node *node);
  reference operator*() const;
  pointer operator->() const;
  iterator &operator++();
  iterator operator++(int);
  friend bool operator==(iterator lhs, iterator rhs);
  friend bool operator!=(iterator lhs, iterator rhs);
};

iterator begin();

iterator end();

iterator find(const T &value);
```

**Замечание:** функция **find** возвращает итератор **end**,
если элемент не найден.

#### Пример
```c++
#include <iostream>
#include <cassert>

int main() {
  Set<int> st;
  st.insert(10);
  st.insert(-10);
  st.insert(20);
  st.insert(10);
  st.insert(0);

  for (auto x : st) {
    std::cout << x << ' ';
  } // Output: -10 0 10 20
  
  assert(st.find(-20) == st.end());
}
```

### Erase (1 балл)


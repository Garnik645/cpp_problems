# Домашнее Задание 2
Правила отправки домашнего задания описаны [тут](./info.md).

## Класс List (1 балл)
Реализовать класс List (Doubly Linked List) с помощью шаблонов.
Если есть вопросы насчет реализации, можно посмотреть описание функций [тут](https://en.cppreference.com/w/cpp/container/list).
Класс должен содержать следующие методы:
```c++
template<typename T>
class List {
  struct Node {
    T data;
    Node *next;
    Node *prev;

    // Functions can be added if necessary
  };

  Node *head;
  Node *tail;
  size_t size_;

public:
  class iterator {
    Node *current;
  public:
    using value_type = T;
    using reference = T&;
    using pointer = T*;
    using difference_type = std::ptrdiff_t;
    using iterator_category = std::bidirectional_iterator_tag;

    iterator();
    iterator(Node *node);
    reference operator*() const;
    pointer operator->() const;
    iterator &operator++();
    iterator &operator++(int);
    iterator &operator--();
    iterator &operator--(int);
    friend bool operator==(iterator lhs, iterator rhs);
    friend bool operator!=(iterator lhs, iterator rhs);
  };

  List();
  List(size_t count, const T &value = T());
  List(const List &other);
  List(List &&other);
  List(std::initializer_list<T> ilist);

  ~List();

  List &operator=(const List &other);
  List &operator=(List &&other);
  List &operator=(std::initializer_list<T> ilist);

  // Element access
  T &front();
  const T &front() const;
  T &back();
  const T &back() const;

  // Capacity
  bool empty() const;
  size_t size() const;

  // Modifiers
  iterator insert(iterator pos, const T &value);
  iterator insert(iterator pos, T &&value);
  iterator insert(iterator pos, std::initializer_list<T> ilist);

  void push_front(const T &value);
  void push_front(T &&value);
  void push_back(const T &value);
  void push_back(T &&value);

  void pop_front();
  void pop_back();

  // Iterators
  iterator begin();
  iterator end();

  // Comparison
  friend bool operator==(const List<T> &lhs, const List<T> &rhs);
};
```

## Задачи с исползованием List (1 балл)

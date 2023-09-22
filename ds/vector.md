# Домашнее Задание 1
Зарание посмотрите правила отправки домашнего задания, которое описано [тут](./info.md).

## Класс Vector (1 балл)
Реализовать класс Vector с помощью шаблонов.
Если есть вопросы насчет реализации, можно посмотреть описание функций [тут](https://en.cppreference.com/w/cpp/container/vector).
Класс должен содержать следующие методы:
```c++
template <typename T>
class Vector {
  Vector();
  Vector(size_t arr_size);
  Vector(size_t arr_size, T elem);

  Vector(const Vector<T> &other);
  Vector(Vector<T> &&other);
  
  ~Vector();

  Vector<T> &operator=(const Vector<T> &other);
  Vector<T> &operator=(Vector<T> &&other);
  
  size_t size() const;
  size_t capacity() const;

  bool empty() const;

  const T &operator[](size_t index) const;
  T &operator[](size_t index);

  const T &at(size_t index) const;
  T &at(size_t index);

  void push_back(const T &x);
  void push_back(T &&x);
  
  void pop_back();

  void clear();
};
```

## Задачи с исползованием Vector (1 балл)
Все задачи должны быть решены с использованием вами написанного вектора.

### Задача 1
### Задача 2
### Задача 3

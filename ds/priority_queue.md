# Домашнее Задание 5
Правила отправки домашнего задания описаны [тут](./info.md).

## Класс PriorityQueue (2 балла)
Реализовать класс **PriorityQueue** (т.е. **Max-Heap**), который хранит полное бинарное дерево используя вектор.
Данная структура должна работать для любого типа **T**, для которого определен оператор меньше.
Если есть вопросы насчет реализации, можно посмотреть описание функций [тут](https://en.cppreference.com/w/cpp/container/priority_queue).
Либо если есть вопросы насчет бинарного дерева поиска то можете посмотреть [это](https://www.programiz.com/dsa/priority-queue).
Класс должен содержать следующие методы:
```c++
#include <iostream>
#include <vector>

template<typename T>
class PriorityQueue {
private:
  std::vector<T> heap;

  // Functions can be added if necessary

public:
  template<typename InputIt>
  PriorityQueue(InputIt first, InputIt last); // O(N)

  bool empty() const; // O(1)

  size_t size() const; // O(1)

  void push(const T &value); // O(log(N))

  void pop(); // O(log(N))

  const T &top() const; // O(1)
};
```

## Задачи с исползованием PriorityQueue (Max-Heap) (2 балла)
Все задачи должны быть решены с использованием вами написанного **PriorityQueue**.

### Задача 1
https://leetcode.com/problems/remove-stones-to-minimize-the-total/

### Задача 2
https://leetcode.com/problems/k-closest-points-to-origin/

### Задача 3
https://leetcode.com/problems/single-threaded-cpu/

### Задача 4
https://leetcode.com/problems/furthest-building-you-can-reach/description/

### Задача 5
https://leetcode.com/problems/merge-k-sorted-lists/

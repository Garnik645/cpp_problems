# Задачи с использованием std::map
Все следующие задачи должны быть решены с исползованием **std::map** из стандартной библиотеки.
Тут можно посмотреть описание структуры [std::map](https://en.cppreference.com/w/cpp/container/map).

## Задача 1
Вам даны запросы следующих типов:

* `1 X Y`: добавьте в телефонную книгу контакт с именем **X** и номером телефона **Y**.
* `2 X`: удалить контакт с именем **X** из телефонной книги, если он существует.
* `3 X`: напечатайте номер телефона контакта **X**, если он существует, иначе напечатайте "Not Found".

Реализуйте телефонную книгу с помощью std::map для эффективной обработки этих запросов. Имена уникальны.

### Пример
#### Входные данные:
```
6
1 Alice 12345
1 Bob 98765
3 Alice
2 Alice
3 Alice
3 Bob
```
#### Выходные данные:
```
12345
Not Found
98765
```

## Задача 2
Вам дан массив из **N** целых чисел и целевое число **T**.
Найдите количество пар элементов в массиве, сумма которых равна **T**.

### Пример
#### Входные данные:
Первое число входных данных — это **N**, а второе — **T**.
```
7 10
1 3 -6 3 7 4 16
```
#### Выходные данные:
```
3
```

#### Пояснения:
Три разные пары это:
```
3 + 7 = 10
-6 + 16 = 10
3 + 7 = 10
```

## Задача 3
Вам дан список слов (строки, содержащие только строчные буквы английского алфавита).
Мы считаем два слова эквивалентными, если они содержат одинаковые буквы,
т.е. мы можем переставлять буквы одного слова так, чтобы получить другое слово.

Вычислите размер наибольшего подмножества эквивалентных слов.

### Пример
#### Входные данные:
```
8
disease
burned
viewer
praised
despair
burden
diapers
review
```
#### Выходные данные:
```
3
```
#### Пояснения:
**praised**, **despair** и **diapers** образуют самый большой набор эквивалентных слов.

## Задача 4
Вам предоставляется структура данных **Trie** (реализованая используя **std::map**), которая поддерживает вставку слов.
Ваша задача — написать функцию **startWith**, которая принимает на вход префикс и проверяет,
существует ли в **Trie** хотя бы одно слово, начинающееся с данного префикса.
Функция должна возвращать **true**, если такое слово существует, в противном случае она должна вернуть **false**.

**Например:**
Предположим, что **Trie** содержит слова: "Hello", "Hey", "World".
Если вы вызываете `startWith("He")`, функция должна вернуть **true**, поскольку оба слова "Hello" и "Hey" начинаются с префикса "He".

```c++
#include <iostream>
#include <map>

class Trie {
  class TrieNode {
  public:
    std::map<char, TrieNode *> children;
    bool isEndOfWord;

    TrieNode() {
      isEndOfWord = false;
    }
  };

  TrieNode *root;

public:
  Trie() {
    root = new TrieNode();
  }

  ~Trie() {
    // Also add destructor...
  }

  void insert(const std::string &word) {
    TrieNode *current = root;
    for (char ch: word) {
      if (current->children.find(ch) == current->children.end()) {
        current->children[ch] = new TrieNode();
      }
      current = current->children[ch];
    }
    current->isEndOfWord = true;
  }

  bool startsWith(const std::string &prefix) {
    // Add you code here
  }
};

int main() {
  Trie trie;
  trie.insert("Hello");
  trie.insert("Hey");
  trie.insert("World");

  std::cout << trie.startsWith("Hell") << std::endl; // Output: true
  std::cout << trie.startsWith("abc") << std::endl;  // Output: false
  std::cout << trie.startsWith("Wo") << std::endl;  // Output: true
}
```

## Задача 5
[тут](https://leetcode.com/problems/my-calendar-i/)

# Задачи с использованием std::set
Все следующие задачи должны быть решены с исползованием **std::set** из стандартной библиотеки.
Тут можно посмотреть описание структуры [std::set](https://en.cppreference.com/w/cpp/container/set).

### Задача 1
Вам дан список из **n** целых чисел, ваша задача — посчитать количество различных значений в списке.
#### Входные данные:
```
5
2 3 2 2 3
```
#### Выходные данные:
```
2
```

## Задача 2
Вы управляете соревнованием, на которое регистрируют участников. Каждому участнику присваивается уникальный целочисленный регистрационный номер.
Вам необходимо эффективно управлять регистрациями и обрабатывать два типа запросов:

* Зарегистрировать (**REGISTER x**):
  Зарегистрируйте нового участника с регистрационным номером **x**.

* Проверить (**CHECK x**):
  Проверьте, зарегистрирован ли участник с регистрационным номером **x**.
  Выведите "YES", если участник зарегистрирован, в противном случае выведите "NO".

* Удалить (**REMOVE x**):
  Удалить регистрацию участника с номером **x** (если он зарегистрирован)

### Пример
#### Входные данные:
```
10
REGISTER 123
REGISTER 456
CHECK 123
CHECK 789
REGISTER 789
CHECK 789
REGISTER 999
CHECK 456
REMOVE 123
CHECK 123
```
#### Выходные данные:
```
YES
NO
YES
YES
NO
```

### Задача 3
Вам даны строка **jewels**, представляющие типы камней, которые являются драгоценными камнями, и **stones**, представляющие те камни, которые у вас есть.
Каждый символ в **stones** — это камень, который у вас есть. Вы хотите знать, сколько камней у вас также являются драгоценностями.
Буквы чувствительны к регистру, поэтому "а" считается другим типом камня, чем "А".
```
Input: jewels = "aA", stones = "aAAbbbb"
Output: 3

Input: jewels = "z", stones = "ZZ"
Output: 0
```

### Задача 4
Дана двоичная строка **s** и целое число **k**. Необходимо вернуть `true`, если каждая возможная двоичная подстрока длины **k** встречается в **s** хотя бы один раз. В противном случае вернуть `false`.

#### Примеры
```
Input: s = "00110110", k = 2
Output: true
Explanation: The binary codes of length 2 are "00", "01", "10" and "11". They can be all found as substrings at indices 0, 1, 3 and 2 respectively.

Input: s = "0110", k = 1
Output: true
Explanation: The binary codes of length 1 are "0" and "1", it is clear that both exist as a substring. 

Input: s = "0110", k = 2
Output: false
Explanation: The binary code "00" is of length 2 and does not exist in the array.
```

### Задача 5
Дана строка **s**, найдите длину самой длинной подстроки без повторяющихся символов.
Решить задачу за **O(N*log(N))**.

#### Примеры
```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

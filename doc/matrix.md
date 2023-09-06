# Класс Matrix
## 1
* Прочитать из входных данных два числа **n**, **m**.
* Создать матрицу размера (**n** x **m**) исползуя оператор `new`.
* Получить матрицу целых чусел (**n** x **m**) из входных данных.
* Напечатать матрицы на экран.
* Освободить память используя оператор `delete`

### Пример входных данных
```
2 3
3 2 1
5 2 4
```

## 2
* Написать фунцкию, которая получает как аргумент две матрицы и возвращает новую матрицы, которая равна сумме двух других.
* Получить две матрицы размера (**n** x **m**), напечатать сумму этих матриц.

## 3
* Написать класс `Matrix`, которая хранит в себе информацию матрицы с целыми числами (т.е. размеры матрицы, указатель на матрицу).
* Написать конструктор по умолчанию.
* Написать деструктор.
* Написать конструктор, который как аргумент получает два целых числа **n** и **m**, создает матрицы размера (**n** x **m**).

## 4
* Добавить фунцкию `at(int i, int j)` в `Matrix`, которая возвращает элемент матрицы с индекцом (**i**, **j**).
* Использовать данную функцию для `cin` и `cout`.

## 5
* Написать operator+ для двух матриц.
* Написать operator* для двух матриц.
* Решить задачу описанную в блоке 2, используя написанный класс, функцию `at()` и операторы.

## 6
* Написать Copy constructor.
* Написать Move constructor.
* Написать код в функции `main`, вызывающий оба конструктора.

***NOTE:*** Можно вывести на экран какое-либо сообщение внутри конструкторов, чтобы убедиться что конструкторы были вызваны.

## 7
* Написать Copy assignment operator.
* Написать Move assignment operator.
* Написать код в функции `main`, вызывающий оба оператора.

## 8
* Поднимать исключение `runtime_error` с помощью `throw` в фунцкиях `at`, `operator+` и `operator*` при невалидных аргументах.
* Обработать исключения в функции `main` с помощью `try` и `catch`.

## 9
* Написать класс `SquareMatrix`, которая наследует от класса `Matrix` и представляет из себя квадратуню матрицу.
* Добавить функцию `square()` в класс `SquareMatrix`, которая возвращает квадрат матрицы.

## 10
* Написать виртуальную функцию `std::string getInfo()` в классе `Matrix`, которая возвращает строку "Matrix (**n** x **m**)", где **n**, **m** - размеры матрицы.
* Переопределить данную функцию в классе `SquareMatrix` используя ключевое слово `override`, которая возвращает строку "SquareMatrix (**n** x **m**)".
* Написать одну функцию `printInfo()` вне всяких классов, которая принимает один аргумент типа липо `Matrix`, либо `SquareMatrix`, и печатает информацию данной матрицы, в зависимости от типа переданного аргумента.

## 11
* Используя шаблоны, поменять классы `Matrix` и `SquareMatrix` так, чтобы они работали не только с целыми числами, но и с типами `double`, `long long` и т.д.
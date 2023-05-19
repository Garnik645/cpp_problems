# Класс Time
## Члены-переменные класса
* ***unsigned hours;*** (0 <= hours <= 23)
* ***unsigned minutes;*** (0 <= minutes <= 59)
* ***unsigned seconds;*** (0 <= seconds <= 59)

## Конструкторы
* ***Time(unsigned h = 0, unsigned m = 0, unsigned s = 0)***,
при невалидных аргументах поднять исключение типа ***std::range_error***
с нужным сообщением.
* ***Time(const std::string &str)***, создает объект из строки формата ***hh:mm:ss***,
например "09:10:20". При неправильном формате строки поднять исключение типа ***std::invalid_argument***
с нужным сообщением.

## Операторы
* ***bool operator<(const Time &lhs, const Time &rhs)***
* ***std::istream &operator>>(std::istream &is, Time &time)***
* ***std::ostream &operator<<(std::ostream &os, const Time &time)***

## Функция main
В первой строке входных данных записано целое число ***N***,
затем записаны ***N*** строк.
Собрать все строки с правилным форматом времени в один вектор
и напечать их в отсортированном виде.
Обрабатать исключения с помощью блока ***try-catch***
и вывести сообщение внутри исключения при ошибке.

### Входные данные
```
5
16:00:00
10:34:10
234:23sdf23
09:10:15
35:12:70
```

### Выходные данные
```
Time constructor, wrong string format!
Time constructor, argument out of range!
09:10:15
10:34:10
16:00:00
```

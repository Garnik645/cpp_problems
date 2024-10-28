# Работа с отладчиком
В задачах нужно найти ошибки в коде используя отладчик.

## Задача 1
Программа вычисляет и выводит площадь круга по введённому радиусу.
```c
#include <stdio.h>
#include <math.h>

int calculateArea(double radius) {
    double result = M_PI * radius * radius;
    return result;
}

int main() {
    double radius;

    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
    } else {
        double area = calculateArea(radius);
        printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);
    }

    return 0;
}
```

## Задача 2
Программа подсчитывает количество чётных чисел, введённых пользователем, пока не будет введено число 0, и выводит этот счёт на экран.
```c
#include <stdio.h>

int isEven(int number) {
    return number % 2 == 0;
}

int main() {
    int evenCount = 0;
    int number;

     do {
        scanf("%d", &number);
        if (isEven(number)) {
            ++evenCount;
        }
    } while (number == 0);

    printf("Number of even numbers entered: %d\n", evenCount);

    return 0;
}
```

## Задача 3
Программа проверяет, введены ли все символы в нижнем регистре, и выводит соответствующее сообщение, пока не встретит символ ***"."***.
```c
#include <stdio.h>

int areAllLowercase() {
    int isLowercase = 1;

    while (1) {
        char ch;
        scanf("%c", &ch);
        if (ch == '.') {
            break;
        }
        if (ch < 'a' && ch > 'z') {
            isLowercase = 0;
        }
    }

    return isLowercase;
}

int main() {
    if (areAllLowercase()) {
        printf("All characters are lowercase.\n");
    } else {
        printf("Not all characters are lowercase.\n");
    }

    return 0;
}
```

## Задача 4
Программа проверяет, является ли введённое целое число палиндромом, и выводит соответствующее сообщение.
```c
#include <stdio.h>

int reverseNumber(int number) {
    int reversed = 0;

    while (number >= 0) {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number %= 10;
    }

    return reversed;
}

int isPalindrome(int number) {
    if (number < 0) {
        return 0;
    }

    return number == reverseNumber(number);
}

int getUserInput() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    return number;
}

int main() {
    int number = getUserInput();

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
```

## Задача 5
Программа вычисляет сумму квадратов всех целых чисел от **n** до **0** и выводит результат.
```c
#include <stdio.h>

unsigned int squareSum(unsigned int x) {
    unsigned int result = 0;
    while (x >= 0) {
        result += (x * x);
        --x;
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    unsigned int sum = squareSum(n);
    printf("%d\n", sum);
}
```

# Dictionary Problem
В задаче запрещено использовать статический массив или вектор.
Для создания и удаления динамических объектов использовать операторы **new** и **delete**.

## Stage 1
```c++
// class for a Dictionary as a book containing array of words
class Dictionary {
    // pointer to array of words in a dictionary
    std::string *words;
    // size of the array above
    int wordsSize;
    // the year when the dictionary was published
    int publishYear;

public:
    // create an empty dictionary by initializing words with nullptr and wordsSize with 0
    Dictionary(int year = 2023);

    // destructor
    ~Dictionary();

    // function for getting size, 'cause this member is private
    int getSize() const;

    // function for getting publication year, 'cause this member private
    int getPublishYear() const;

    // function for setting publication year, 'cause this member private
    void setPublishYear(int year);

    // push a new word to an existing dictionary
    void pushWord(std::string newWord);

    // dict[i], get i-th word from dictionary, check boundaries
    std::string &operator[](int index) const;
};
```

## Stage 2
In the `int main()` function create a dynamic array of type `Dictionary` (using `new` and `delete`).
Fill the array with given Dictionaries from the input.

### Input Format:
First your given an integer number **N**, number of dictionaries.
Then your given **N** blocks of input.
**i**-th block of input corresponds to **i**-th `Dicitionary`, which contains:
* **Y<sub>i</sub>** - integer, year of the publication of the **i**-th dictionary.
* **M<sub>i</sub>** - integer, number of words in the **i**-th dictionary,
* **W<sub>1</sub>**, **W<sub>2</sub>**, ..., **W<sub>M<sub>i</sub></sub>** - words in the **i**-th dictionary
### Input Example:
```
3

1917 6
it feels like you dont care

1832 5
why am I still here

2012 6
in the back of my mind
```

## Stage 3
Add the following friend function inside your `Dictionary` class.
```c++
    // compare two dictionaries by there publication year
    friend bool operator<(const Dictionary &lhs, const Dictionary &rhs);
```

Sort the array of Dictionaries using `std::sort()` function
(before using sort function you must `#include <algorithm>`)

## Stage 4
Add following member functions to your `Dictionary` class:

```c++
    // copy constructor
    Dictionary(const Dictionary &other);
    
    // move constructor
    Dictionary(Dictionary &&other);
    
    // copy assignment
    Dictionary &operator=(const Dictionary &other);
    
    // move assignment
    Dictionary &operator=(Dictionary &&other);
```

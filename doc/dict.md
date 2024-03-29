# Dictionary
In this problem it is forbidden to use static arrays or vectors.
For creating and deleting dynamic arrays you should use operators `new` and `delete`.

## 1. Main structure
Write a class for a dictionary book.
Every dictionary will have a publication year and an array of words.
It will also have some basic functionality for interacting with objects of this type.

Member functions which should be implemented are provided below:
```c++
// class for a Dictionary
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

## 2. Dynamic array from input
In `int main()` function create a dynamic array (using `new` and `delete`) with elements of type `Dictionary`.
Fill the array with given dictionaries from the input.

### Input Format:
First you're given an integer number **N**, number of dictionaries.
Then your given **N** blocks of input.
**i**-th block of input corresponds to **i**-th `Dicitionary` in the array, which has the following structure:
* **Y<sub>i</sub>** - integer, year of the publication of the **i**-th dictionary.
* **M<sub>i</sub>** - integer, number of words in the **i**-th dictionary,
* **W<sub>1</sub>**, **W<sub>2</sub>**, ..., **W<sub>M<sub>i</sub></sub>** - words in the **i**-th dictionary
### Input Example:
```
4

1917 6
automatic machine keyboard computer intstrument artifical

1822 5
arithmetic human computer automatic etymology

1798 4
submarine branching entropy engine

2012 5
digital virtual conditional device electric
```

## 3. Sorting
Add the following friend function inside your `Dictionary` class.
This will allow you to use standard library sorting algorithm with your array of dictionaries.
```c++
// compare two dictionaries by there publication year
friend bool operator<(const Dictionary &lhs, const Dictionary &rhs);
```

Sort the array of dictionaries using `std::sort()` function
(before using this function you must `#include <algorithm>`)

### Usage with dynamic array
```c++
#include <algorithm>

void foo(int *arr, int size) {
    std::sort(arr, arr + size);
}

```

### Usage with vector
```c++
#include <algorithm>
#include <vector>

void foo(std::vector<int> &v) {
    std::sort(v.begin(), v.end());
}
```

## 4. Find first occurrence
Let's say you have the following word:
```c++
std::string myWord = "computer";
```

And you have to find the first occurrence of this word in the dictionaries you have. 
For that write a function outside your class:
```c++
// return pointer to the first dictionary in the array to contain the given word
// return nullptr if no such word was found in any dictionary
Dictionary *findFirstOccurrence(Dictionary *dicts, int dictsSize, const std::string &word);
```

## 5. Copy & Move
Add the following special member functions to your `Dictionary` class:
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

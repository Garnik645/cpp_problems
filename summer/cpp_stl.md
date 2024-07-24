# C++ and STL

Please complete the following tasks to ensure you have a strong foundation in C++ programming.
This course contains 3 tasks, you're given 3 weeks for completing all of them.

## Task 1: Reading Assignment

Read chapters 13 to 20 from the book "The C++ Programming Language".
This will serve as a revision of your knowledge and provide a deeper dive into the C++ language.
The book was attached to the message with the assignment.

## Task 2: C++ Project

Create a C++ project in GitHub. Create a `develop` branch for the project, make all the change to that branch.
In this project, you are required to implement a `bitset` class that closely resembles `std::bitset`.
The `bitset` should store bits efficiently, using as little memory as possible.
Use the following template for the class:
```c++
template <std::size_t N>
class bitset {
    // ...
};
```

Your implemented `bitset` should be:

- DefaultConstructible
- CopyConstructible
- MoveConstructible
- CopyAssignable
- MoveAssignable

Additionally, the following functionalities should be implemented:
- Constructors from integers and strings
- `operator[]` for constant and non-constant objects
- Binary shift operators
- Binary AND, OR, XOR, and NOT operators
- Stream input and output operators
- Conversion functions to a string or to an integer

For reference, use the following link: [std::bitset](https://en.cppreference.com/w/cpp/utility/bitset).
The more functions you implement from `std::bitset`, the better.
Ensure your code is clean, functions are not overly long, and code style is consistent (using `clang-format` for style formating is a plus).
Add examples of usage for your `bitset` class.

When project is finished, create a pull request from `develop` branch to `main`.

## Task 3: C++ Topics Presentation

Choose one group of topics from the list below (agree on the topic with your supervisor), learn about them, prepare a 20 to 30 minute presentation, and present the slides to the team.

### Group 1: Smart Pointers and Placement New

- **Smart Pointers**: What is RAII? Why are smart pointers used and when should you use them?
- **Placement New**: What is placement new and how do you implement a vector container with it?

### Group 2: Lvalue/Rvalue References, Universal References, and Variadic Templates

- **Lvalue/Rvalue References and Universal References**: What are these and why are they used?
- **Variadic Templates**: What are these and why are they used?
- **Perfect Forwarding**: What is perfect forwarding?
- **`emplace_back`**: What is `emplace_back` and when should you use it instead of `push_back`?

### Group 3: Casts and Compile-Time Programming

- **Casts in C++**: Why is C-style cast bad? What types of casts are in C++ and when are they used?
- **Compile-Time Programming**: What are `constexpr`, `consteval` and  `constinit`?

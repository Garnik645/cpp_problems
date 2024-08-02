# C++ / OOP / STL

Please complete the following tasks to ensure you have a strong foundation in C++ programming.
This course contains 3 tasks.
You're given around 2 weeks to complete all of them, so the deadline is **August 18 at 11:59 PM**.
Please note that the deadline for the task 3 presentation is **August 15th**.

## Task 1: Reading Assignment

Read chapters 13 through 20 and 30 through 34 from "The C++ Programming Language" book.
This will serve as a revision of your knowledge and provide a deeper dive into the C++ language.
The book was attached to the message with the assignment.

## Task 2: C++ Project

Create a C++ project in GitHub. Create a `develop` branch for the project, and make all the changes to that branch.
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
- Constructors from integers and strings,
- `operator[]` for constant and non-constant objects,
- Binary shift operators,
- Binary AND, OR, XOR, and NOT operators,
- Stream input and output operators,
- Conversion functions to a string or to an integer,
- The implemented functionality should, if possible, work for a constant bitset.

For reference, use the following link: [std::bitset](https://en.cppreference.com/w/cpp/utility/bitset).
The more functions you implement from `std::bitset`, the better.
Ensure your code is clean, functions are not overly long, and the code style is consistent (you can use `clang-format` for style formatting).
Add examples of usage for your `bitset` class.

When the project is finished, create a pull request from the `develop` branch to `main`.
Assign the pull request to `Garnik645` on GitHub.

## Task 3: C++ Topics Presentation

Choose one group of topics from the list below, agree on the topic with your supervisor, learn about the topics, prepare a 20 to 30 minute presentation, and present the slides to the team on your chosen date.
You can present the slides between August 12 and 15.
In your presentation talk about what those topics are, why are they important in C++, how they are used, present code examples, etc.

### Topic 1: RAII & Error handling

- **RAII**
- **Error handling in C and C++**: How is it done and what are the differences?
- **Smart Pointers**: What type of smart pointers are there, when are they used and how?
- **Handling errors without exceptions**: std::optional, std::variant.

### Topic 2: Value Categories & Move Semantics

- **Lvalue/Rvalue References**: What's the difference between Lvalues and Rvalues?
- **Universal References**: Why are they used? ([link](https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers))
- **Move Semantics**: std::move.
- **Perfect Forwarding**: std::forward.
- **emplace_back**: What is `emplace_back` and when should you use it instead of `push_back`?

### Topic 3: Polymorphism & Casting

- **Static and Dynamic Polymorphism**: How is it done and what are the differences?
- **Virtual Destructors**: When do you need them?
- **Liskov Substitution Principle**
- **Casting**: dynamic_cast, static_cast, reinterpret_cast.

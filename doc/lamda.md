# Lambda
```c++
#include <iostream>
#include <string>

int main() {
  // auto lambda_name = [capture_list] (args) -> return_type { body };
  int k = 5;
  auto add = [k](int x) -> int { return x + k; };
  std::cout << add(10) << std::endl;
  std::cout << add(20) << std::endl;

  // args and return_type are emitted
  auto simple_hello = [] {
    std::cout << "Hello, World!\n";
  };
  simple_hello();

  // Passing arguments to lamda
  auto name_hello = [](const std::string &name) {
    std::cout << "Hello, " + name + "!\n";
  };
  name_hello("World");

  // Specifying return value is not necessary
  auto get_hello = [](const std::string &name) -> std::string {
    return "Hello, " + name + "!\n";
  };
  std::cout << get_hello("World");

  // Using capture list
  // [world], [&], [=] also can be used
  std::string world = "World";
  auto use_world = [&world]() {
    std::cout << "Hello, " + world << std::endl;
  };
  use_world();
  use_world();

  // Mutable
  auto mutable_hello = [world]() mutable {
    world += "!";
    std::cout << "Hello, " + world << std::endl;
  };
  mutable_hello();
  mutable_hello();
  mutable_hello();
}
```


```c++
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <list>
#include <array>
#include <numeric>
#include <iomanip>
#include <string>
#include <functional>
#include <optional>

void remove_odd(std::vector<int> &v) {
  auto new_end = std::remove_if(v.begin(), v.end(), [](int x) -> bool {
    return x % 2 == 1;
  });
  v.resize(new_end - v.begin());
}

void has_divisor(const std::list<int> &v, int k) {
  // std::all_of, std::none_of
  bool ans = std::any_of(v.begin(), v.end(), [k](int x) -> bool {
    return x % k == 0;
  });
  std::cout << std::boolalpha << ans << std::endl;
}

void print_reverse(const std::vector<double> &v) {
  std::cout << std::fixed << std::setprecision(3);
  std::for_each(v.rbegin(), v.rend(), [](double d) {
    std::cout << d << ' ';
  });
  std::cout << std::endl;
}

std::vector<double> get_vector_pow(const std::vector<double> &v, double s) {
  std::vector<double> result;
  std::transform(v.begin(), v.end(), std::back_inserter(result), [s](double x) -> double {
    return std::pow(x, s);
  });
  return result;
}

std::vector<int> get_geometric_progression(int n, int r, int a = 1) {
  std::vector<int> result(n);
  std::generate(result.begin(), result.end(), [a, r]() mutable {
    int tmp = a;
    a *= r;
    return tmp;
  });
  return result;
}

std::optional<std::string> get_lowercase(const std::vector<std::string> &v) {
  auto it = std::find_if(v.begin(), v.end(), [](const std::string &str) -> bool {
    return std::none_of(str.begin(), str.end(), [](char c) -> bool {
      return 'A' <= c && c <= 'Z';
    });
  });
  if (it == v.end()) {
    return std::nullopt;
  } else {
    return *it;
  }
}

int main() {
  std::vector<std::string> v = {"Hello", "World"};
  auto lowercase = get_lowercase(v);
  if (lowercase.has_value()) {
    std::cout << lowercase.value();
  } else {
    std::cout << "Couldn't find lowercase string" << std::endl;
  }
}
```

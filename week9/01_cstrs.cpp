#include <iostream>

int main() {
  char str[]{"hiya"};

  std::cout << str << '\n';

  char * p{&str[2]};

  std::cout << p << "\n\n";

  p = str; // str == &str[0]
  for (size_t i{}; i < 4; ++i) {
    std::cout << p << '\n';
    ++p;
  }

  std::cout << '\n';

  for (char * i{str}; *i; ++i) {
    std::cout << *i << '\n';
  }

  std::cout << '\n';

  for (size_t i{0}; str[i] != '\0'; ++i) {
    std::cout << str[i] << '\n';
  }
}
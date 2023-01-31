#include <iostream>

int main() {
  char name[]{"bob"};

  for (size_t i{}; i < 3; ++i) {
    ++name[i];
    std::cout << name[i];
  }
  std::cout << '\n';
}

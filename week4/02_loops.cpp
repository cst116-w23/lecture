#include <iostream>

size_t i{70};

int main() {
  for (size_t i{}; i < 10; ++i) {

  }

  size_t i{};
  for (; i < 10; ++i) {

  }

  {
    size_t i{};
  }

  for (size_t i{}; i < 5; ++i) {
    std::cout << "hi\n";
  }

  std::cout << "i: " << i << '\n';
}

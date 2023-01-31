#include <iostream>

int main() {
  int xs[]{2, 4, 6, 8, 9};
  size_t len{5};

  int value{};
  std::cout << "What value? ";
  std::cin >> value;

  for (size_t i{}; i < len; ++i) {
    if (xs[i] < value) {
      std::cout << xs[i] << '\n';
    } else {
      std::cout << "no\n";
    }
  }
}

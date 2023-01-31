#include <iostream>

int main() {
  std::cout << "i loop:\n";
  for (size_t i{}; i < 10; ++i) {
    std::cout << i*2 << '\n';
  }

  std::cout << "\nj loop:\n";
  for (int j{10}; j > 0; --j) {
    std::cout << j << '\n';
  }

  std::cout << "\nk loop:\n";
  for (int k{}; k < 10; ++k) {
    if (k % 2 == 0) {
      std::cout << k << '\n';
    }
  }
}

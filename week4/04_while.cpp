#include <iostream>

int main() {
  int k{};
  while (k < 10) {
    if (k % 2 == 0) {
      std::cout << k << '\n';
    }
    ++k; // k += 1
  }

  /* This is exactly the same as above:

  for (int k{}; i < 10; ++k) {
    if (k % 2 == 0) {
      std::cout << k << '\n';
    }
  }
  */

  /* Also the same:
  int j{};
  while (j < 10) {
    std::cout << j << '\n';
    j += 2;
  }
  */

  /* Again, the same, but thinking in ranges (math)
  for (int i{}; i < 10; i += 2) {
    std::cout << i << '\n';
  }
  */

  int val{0};
  while (1) {
    std::cout << "bob\n";
    ++val;
    if (val > 20) {
      break;
    }
  }
}

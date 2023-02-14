#include <iostream>

constexpr size_t LEN{4};

int main() {
  int xs[LEN]{2, 4, 6, 8};
  int ys[LEN]{3, 5, 7, 9};
  int results[LEN]{};

  for (size_t i{}; i < LEN; ++i) {
    results[i] = xs[i]*ys[i];
  }

  for (size_t i{}; i < LEN; ++i) {
    std::cout << results[i] << '\n';
  }
}

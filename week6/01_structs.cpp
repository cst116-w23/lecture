#include <iostream>

struct Rect {
  int x{};
  int y{};
  int z{};
};

constexpr size_t LEN{4};

int main() {
  Rect rects[LEN]{{2, 3, 1}, {4, 5, 8}, {6, 7, 10}, {8, 9, 2}};
  int results[LEN]{};

  for (size_t i{}; i < LEN; ++i) {
    auto [x, y, z] = rects[i];
    results[i] = x * y * z;
  }

  for (size_t i{}; i < LEN; ++i) {
    std::cout << results[i] << '\n';
  }
}

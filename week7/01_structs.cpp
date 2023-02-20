#include <iostream>
#include <fstream>

struct Color {
  int r;
  int g;
  int b;
};

constexpr size_t MAX_VALUES{100};

int main() {
  Color colors[MAX_VALUES]{};
  size_t len{};

  std::ifstream fin{"file.txt"};
  while (fin >> colors[len].r >> colors[len].g >> colors[len].b) {
    ++len;
  }

  for (size_t i{}; i < len; ++i) {
    Color c{colors[i]};
    std::cout << "rgb(" << c.r << ", " << c.g << ", " << c.b << ")" << '\n';
  }
}

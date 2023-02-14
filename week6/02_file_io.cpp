#include <iostream>
#include <fstream>

struct Rect {
  int width{};
  int height{};
};

constexpr size_t MAX_LEN{256};

int main() {
  Rect rects[MAX_LEN]{};
  size_t len{};

  std::ifstream fin{"myfile.txt"};
  while (fin >> rects[len].width >> rects[len].height) {
    ++len;
  }

  for (size_t i{}; i < len; ++i) {
    auto [width, height] = rects[i];
    std::cout << width * height << '\n';
  }
  std::cout << "Read in " << len << " widths and heights.\n";
}

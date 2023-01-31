#include <iostream>

int main() {
  // c-array (Array)
  int xs[]{2, 4, 6, 8};
  int size{4};

  // for-loop
  for (int i{0}; i < size; ++i) {
    std::cout << xs[i] << '\n';
  }
}

#include <iostream>

int main() {
  int xs[]{2, 4, 6};
  int xs2[10]{2, 4, 6};
  int xs3[10]{};

  for (size_t i{}; i < 10; ++i) {
    xs3[i] = i+1;
  }

  int xs4[10][10]{};
  // int xs4[10*10]{};
  xs4[0][0] = 42;

  for (size_t i{}; i < 10; ++i) {
    for (size_t j{}; j < 10; ++j) {
      xs4[i][j] = 42;
    }
  }

  int xs5[10*10]{};
  for (size_t i{}; i < 10*10; ++i) {
    xs5[i] = 42;
  }

  int xs6[10]{};
  bool xs7[10]{};

  for (size_t i{}; i < 10; ++i) {
    xs6[i] = i;
    xs7[i] = i % 2 == 0;
  }
}

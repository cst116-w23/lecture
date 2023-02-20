#include <iostream>

int main() {
  int xs[]{2, 4, 6, 8};
  int xs2[10][10]{}; // 2-d array
  int xs3[10][10][10]{}; // 3-d array
  // int xs3[10*10*10]{};

  for (size_t i{}; i < 10; ++i) {
    for (size_t j{}; j < 10; ++j) {
      xs2[i][j] = 1;
    }
  }

  for (size_t i{}; i < 10; ++i) {
    for (size_t j{}; j < 10; ++j) {
      for (size_t k{}; k < 10; ++k) {
        xs3[i][j][k] = 1;
      }
    }
  }
}


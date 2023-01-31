#include <iostream>

int main() {
  char c{'y'};

  do {
    std::cout << "Do you want to quit? (y/n) ";
    std::cin >> c;
  } while (c != 'y');
}

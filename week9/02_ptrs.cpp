#include <iostream>

int main() {
  int xs[]{2, 4, 6, 8};

  std::cout << xs << '\n'; // xs is an address aka pointer aka RAM index

  std::cout << xs[0] << ' ' << *(xs + 0) << ' ' << (xs + 0) << '\n';
  std::cout << xs[1] << ' ' << *(xs + 1) << ' ' << (xs + 1) << "\n\n";

  int x{42};
  std::cout << x << ' ' << &x << '\n';

  int * p{xs}; // xs == &xs[0]
  std::cout << p << ' ' << *p << ' ' << p[0] << "\n\n";
}
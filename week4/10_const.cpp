#include <iostream>

const int x{42};

int main() {
  ++x; // this will cause a compiler error because it is const!
  std::cout << x << '\n';
}

#include <iostream>

namespace yeet {
  int x{42};
  int y{-100};
  float radius{20.5};
  float PI = 3.14159;
}

// using namespace yeet;
using yeet::y;
using yeet::radius;
using yeet::PI;

int main() {
  int x{1337};
  std::cout << x << '\n';
  std::cout << yeet::x << '\n';

  float val = yeet::x*2 - y + 2*PI;
  std::cout << "value: " << val << '\n';
}

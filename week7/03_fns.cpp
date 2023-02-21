#include <iostream>

int add(int a, int b) {
  return a + b;
}

// ampersand => mutable
// & => pass-by-reference
// no-ampersand => immutable
// no-ampersand => pass-by-value
void inc(int value) {
  value += 1;
}

struct Point {
  int x;
  int y;
  int z;
};

// passing by const-ref (const makes this immutable)
int foo(const Point & p) {
  return p.x + p.y + p.z;
}

int main() {
  int result = add(1, 2);

  std::cout << result << '\n';

  int x{42};
  inc(x);
  std::cout << x << '\n';

  Point p{2, 4, 6};
  int bar = foo(p);
  std::cout << bar << '\n';
}
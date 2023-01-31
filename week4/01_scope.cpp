#include <iostream>

int add(int a, int b) {
  int c = a + b;
  return c;
  int z{42}; // never reached!!
}

int main() {
  int x{42};

  if (x) {
    int x{1337};
    std::cout << x << '\n';
  }

  size_t i{0};
  for (; i < 10; ++i) {
    std::cout << i << '\n';
  }

  std::cout << "last val: " << i << '\n';

  int result = add(1, 2);
  int result2 = add(result, 42);
  std::cout << "result: " << result << '\n';
  std::cout << "result2: " << result2 << '\n';

  for (;;) {
    std::cout << "hi\n";
  }
  // Use Ctrl-C to quit :)
}

#include <iostream>

// pointers! (indexes to RAM)
int main() {
  // variable on the stack
  int x{42};
  // for us, "address" == "RAM index"
  int * p = &x; // & = address-of
  std::cout << p << '\n';
  std::cout << *p << '\n'; // dereferencing, this is like xs[i]

  int * p2{0}; // nullptr
  std::cout << *p2 << '\n'; // this completely crashes (segfault)
}

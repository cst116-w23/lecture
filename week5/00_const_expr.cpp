#include <iostream>

// this talks to the preprocessor
// #define x 42

// mostly a note for developers
// const int x{42};
// mostly a note for the compiler
constexpr int x{42};

int main() {
  std::cout << x << '\n';
}

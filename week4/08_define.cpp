#include <iostream>

// preprocessor directive (mostly C, not C++)
#define x 42

// c-style macro
#define y if (x < 100) {\
  std::cout << "it is totally an x: " << x << '\n';\
} else {\
  std::cout << "nope!";\
}

// includes everything from std::
// don't use this one :)
using namespace std;

// includes only the std::cout
using std::cout;

int main() {
  std::cout << x << '\n';
  y

  std::cout << x << '\n';
  cout << x << '\n';
}

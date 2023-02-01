#include <iostream>

int main() {
  int x{42};

  // guard pattern
  if (x > 10000) {
    std::cout << "uh oh\n";
    return 1;
  }

  if (x) {
    std::cout << "it is true\n";
  } else {
    std::cout << "it is false\n";
  }

  if (x < 10) {
    // do something
  } else if (x < 15) {
    // something else
  } else if (x < 20) {
    // another something
  } else {
    // default
  }

  if (x == 22) {

  } else if (x > 0 && !(x < 100 || x % 2 == 0)) {

  } else if (x < 0 || x == 23) {

  }
}

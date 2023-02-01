#include <iostream>

int main() {
  int x{42};

  switch (x) {
    case 0: {
      std::cout << "something\n";
      break;
    }
    case 2:
    case 4: {
      std::cout << "it is 2 or 4\n";
      // this will cascade until the next "break;" statement (case 20 here)
    }
    case 20: {
      break;
    }
    default: {
      break;
    }
  }
}

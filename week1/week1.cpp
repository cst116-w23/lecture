#include <iostream>

/*

Fundamental Categories of Data
1. Scalars/atoms
2. Lists
3. Bags
4. Functions

Flow Control statements
if-statement, for-loop

*/

// f(x) = x*x
// f(1) = 1*1

int squared(int x) {
  return x * x;
}

int main() {
  // scalars
  int x{100};
  int y = (x + 1) / 100;

  std::cout << x << " " << y << '\n';

  char c{'a'};
  std::cout << c << '\n';

  bool done{true};
  std::cout << done << '\n';

  float money{1.5f};
  double moreMoney{1.5};

  std::cout << money << ' ' << moreMoney << '\n';

  // Functions
  // y = f(x)
  // let y = f(10)
  int result = squared(10);
  std::cout << "result: " << result << '\n';

  // if-statement
  bool condition = !(result < 99);
  if (condition) {
    std::cout << "It is!\n";
  } else {
    std::cout << "It is not!\n";
  }

  // Lists
  int myList[]{2, 4, 6, 8};

  for (int i{0}; i < 4; ++i) {
    int value = myList[i];
    int newValue = value + 1;
    std::cout << newValue << '\n';
  }
}

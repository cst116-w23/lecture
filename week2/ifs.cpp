#include <iostream>

int main() {
  int a{};
  int b{};

  std::cout << "Enter first number: ";
  std::cin >> a;
  std::cout << "Enter second number: ";
  std::cin >> b;

  int sum{a + b};

  if (sum < 100) {
    std::cout << sum << " is less than 100!\n";
  } else {
    std::cout << sum << " is not less than 100 :(\n";
  }
}

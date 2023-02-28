#include <iostream>

int main() {
  int option{};
  while (option != 4) {
    std::cout
      << "\n1. Option one\n"
      << "2. Option two\n"
      << "3. Option 3\n"
      << "4. Quit\n"
      << "\nEnter an option: ";
    std::cin >> option;

    switch (option) {
      case 1: {
        std::cout << "option 1\n";
        break;
      }
      case 2: {
        std::cout << "option 2\n";
        break;
      }
      case 3: {
        std::cout << "option 3\n";
        break;
      }
      case 4: {
        std::cout << "option 4\n";
        break;
      }
      default: {
        std::cout << "invalid option, try again\n";
        break;
      }
    }
  }
}
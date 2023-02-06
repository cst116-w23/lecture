#include <iostream>

#define MAX_LENGTH 256

int main() {
  // "bob" -> 'b', 'o', 'b', '\0'
  char name[MAX_LENGTH]{};

  std::cout << "Enter your name: ";
  std::cin >> name;

  std::cout << "Hello, " << name << "!\n";
}

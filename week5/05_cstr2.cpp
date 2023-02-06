#include <iostream>

int main() {
  char name[256]{"bob"};

  for (size_t i{}; name[i] != '\0'; ++i) {
    name[i] += 1;
  }

  // same thing, but while loop version
  size_t i{};
  while (name[i] != '\0') {
    // do something, name[i]
    ++i;
  }

  std::cout << name << '\n';
}

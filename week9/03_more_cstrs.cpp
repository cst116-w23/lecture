#include <iostream>

size_t mystrlen(const char * str) {
  size_t i{};
  while (str[i] != '\0') {
    ++i;
  }
  return i;
}

void mystrcpy(char * dest, const char * src) {
  size_t i{};
  for (; src[i] != '\0'; ++i) {
    dest[i] = src[i];
  }
  dest[i] = '\0';
}

int main() {
  const char * name{"bob"}; // symbol table! pointing to ourself! data gets bundled in the app instead of the stack

  std::cout << name << '\n';

/*
  size_t i{};
  for (; name[i] != '\0'; ++i) {
  }
*/

  size_t i{};
  while (name[i] != '\0') {
    ++i;
  }

  std::cout << "length is: " << i << ' ' << mystrlen(name) << '\n';

  char name2[100]{};

  std::cout << "Enter a name: ";
  std::cin >> name2;
  std::cout << "here is your name: " << name2 << '\n';

  mystrcpy(name2, name);
  std::cout << name2 << '\n';
}
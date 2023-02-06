#include <iostream>

int main() {
  const char * name{"bob"};
  std::cout << name << '\n';

  std::cout << "hello, world!\n";
  std::cout << "hello, world!\n"; // this doesn't get duplicated on the symbol table
}

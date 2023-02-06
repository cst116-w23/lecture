#include <iostream>

enum Color {
  red,
  green,
  blue
};

int main() {
  int c[3]{255, 0, 0}; // rgb

  std::cout << "red: " << c[red]
            << " blue: " << c[green]
            << " green: " << c[blue] << '\n';
}

#include <iostream>

int main() {
  short x{32767};
  ++x; // oh no! this will increment to a value bigger than a short can hold
  // and so, when we print this out, it'll be a negative value (try it!)
  // this is due to it "wrapping around", kind of like Pacman
  std::cout << x << '\n';
}

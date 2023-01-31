#include <iostream>

int main(int numArgs, char * args[]) {
  for (size_t i{}; i < numArgs; ++i) {
    std::cout << "Arg #" << i << ": " << args[i] << '\n';
  }
}

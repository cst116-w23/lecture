#include <iostream>

int main() {
  int xs[100]{};
  int amount{};

  std::cout << "How many numbers do you want? ";
  std::cin >> amount;

  for (int i{}; i < amount; ++i) {
    int newNum{};
    std::cin >> newNum;
    xs[i] = newNum;
  }

  for (int i{}; i < amount; ++i) {
    ++xs[i];
  }

  std::cout << "here are your new numbers:\n";

  for (int i{}; i < amount; ++i) {
    std::cout << xs[i] << '\n';
  }

  // sum up the values of xs, then print out the result
}

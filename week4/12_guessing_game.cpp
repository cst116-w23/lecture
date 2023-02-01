#include <iostream>
#include <cstdlib>
#include <ctime>

#define MAX 10

int main() {
  // we don't care how srand works or this entire line works
  std::srand(std::time(nullptr)); // seeds the value
  // but we do care about how this works
  int correctValue{std::rand() % MAX};
  // std::cout << correctValue << '\n';

  int guess{-1};
  int trickValue{correctValue - 1};

  while (1) {
    std::cout << "Guess a value between 0 and " << MAX - 1 << ": ";
    std::cin >> guess;

    if (guess == trickValue) {
      std::cout << "LAME! LOS3R!!!\n\n";
    } else if (guess != correctValue) {
      std::cout << "Nope! :( Try again!\n\n";
    } else {
      std::cout << "hooray! you guessed the value\n";
      break; // gets us out of the while-loop
    }
  }
}

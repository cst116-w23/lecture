#include <iostream>

struct State {
  int someValue{};
};

enum Option {
  option1 = 1,
  option2,
  option3,
  option4,
  option5,
  quit,
};

int promptMenu() {
  int option{};
  std::cout
      << "\n1. Option one\n"
      << "2. Option two\n"
      << "3. Option 3\n"
      << "4. Option 4\n"
      << "5. Option 5\n"
      << "6. Quit\n"
      << "\nEnter an option: ";
  std::cin >> option;
  return option;
}

void doOption1(State & state) {
  std::cout << "option 1\n";
      // do stuff
      // do stuff
      // do stuff
      // do stuff
      // etc...
  state.someValue = 12;
}

void doStuff(int option, State & state) {
  switch (option) {
    case Option::option1: {
      doOption1(state);
      break;
    }
    case Option::option2: {
      std::cout << "option 2\n";
      state.someValue = 42;
      break;
    }
    case Option::option3: {
      std::cout << "option 3\n";
      break;
    }
    case Option::option4: {
      std::cout << "option 4\n";
      break;
    }
    case Option::option5: {
      std::cout << "option 5\n";
      break;
    }
    case Option::quit: {
      std::cout << "quit\n";
      break;
    }
    default: {
      std::cout << "invalid option, try again\n";
      break;
    }
  }
}

int main() {
  int option{};
  State state{};
  while (option != Option::quit) {
    option = promptMenu();
    doStuff(option, state);
  }
}
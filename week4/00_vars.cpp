#include <iostream>

/*

Fundamental Categories of Data
1. Scalars
2. Lists
3. Bags
4. Functions

*/

//globals

int z{54};

int main() {
  // a variable is a named slot in RAM
  int x{42}; // integers
  float debt{-10.5f};
  double monies{2500.25};
  bool isDone{false};
  char c{'a'};
  const char * str{"bob"};
  char name[]{"bob"};

  {
    ++z;
    std::cout << z << '\n';
  }


  std::cout << x << '\n';
}

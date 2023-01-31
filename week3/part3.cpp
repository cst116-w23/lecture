#include <iostream>
#include <cstdlib>

float calcAvg(int len, char * strs[]) {
  float avg{};

  for (size_t i{1}; i < len; ++i) {
    float value = atof(strs[i]);
    avg += value / (len - 1);
  }

  return avg;
}

int main(int numArgs, char * args[]) {
  if (numArgs < 2) {
    std::cout << "You did not pass any numbers!\n";
    return 1;
  }

  // y = f(x)
  float avg = calcAvg(numArgs, args);
  std::cout << avg << '\n';
}

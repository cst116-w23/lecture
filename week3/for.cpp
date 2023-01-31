#include <iostream>

// y = f(x)
float calcSum(float xs[], size_t len) {
  // magic happens here
  float sum{};
  for (size_t i{}; i < len; ++i) {
    sum += xs[i];
  }
  return sum;
}

float calcAvg(float nums[], size_t len) {
  // DRY = Don't Repeat Yourself
  float avg = calcSum(nums, len);
  avg /= len;
  return avg;
}

// this is a constant that we use
const float PI = 3.14159;

float calcCircleArea(float radius) {
  // calculate the area of a circle
  float area = PI*radius*radius;
  return area;
}

int main() {
  float nums[]{42.5, 80.25, 90};

  for (size_t i{}; i < 3; ++i) {
    std::cout << calcCircleArea(nums[i]) << '\n';
  }
}

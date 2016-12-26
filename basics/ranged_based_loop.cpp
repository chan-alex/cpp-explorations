#include <iostream>

int main() {

  int numbers [] = { 10, 11, 12, 30 };

  // This is a C++11 feature.
  for (int i : numbers) {
    std::cout << i << std::endl;
  }

  return 0;
}

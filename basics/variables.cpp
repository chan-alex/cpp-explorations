#include <iostream>

int main() {

  //In C++, every variable has a type and the type never changes.
  int i1 = 2;
  int i2, i3 = 10;

  // outputs "i2 is 0  i3 is 10"
  std::cout << "i2 is " << i2 << "  "
            << "i3 is " << i3
            << std::endl;


  //It is good practice to initialize as late as possible, close to where they are used.
  int i4 = 20;
  std::cout << "i4 is " << i4 << std::endl;


  // in C++ 11, the compiler can deduce the type for us.
  auto i5 = i2 + i4;
  
  return 0;

}

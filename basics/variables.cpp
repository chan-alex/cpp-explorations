#include <iostream>

int main() {

  //In C++, every variable has a type and the type never changes.
  int i1 = 2;
  int i2, i3 = 10;

  // outputs "i2 is 0  i3 is 10"
  std::cout << "i2 is " << i2 << "  "
            << "i3 is " << i3
            << std::endl;


  // It is good practice to initialize as late as possible, close to where they are used.
  int i4 = 20;
  std::cout << "i4 is " << i4 << std::endl;


  // In C++ 11, the compiler can deduce the type for us.
  auto i5 = i2 + i4;


  // Constants are declared with the const keyword.
  const int    c1 = 101;
  const float f1 = 0.01;

  // Const variable must be initialize during declaration;
  //  const int c1;    <----- this will not compile.


  // Preventing narrowing
  // Before C++11, variables could be narrowed;
  long l1 = 123456678890;
  std::cout << "l1 = " << l1 << std::endl;

  // compiling the above with -m32 will narrow down the long variable l1 from 64bit to 32bit.
  // l1 will be printed as -1097372694 instead of 123456678890.
  // C++11 introduced Uniform Initialization or Braced Initialization that prevents this.
  long l2 = {123456678890};

  // Braced Initialization also helps to prevent implicit conversions:
  int i6 = 10.14;    //i6 has value of 10 instead 10.14. Probably not what you want.
  //int i6 = {3.14}; will prevent the above from compiling.
  std::cout << "i6 = " << i6 << std::endl;

  
  return 0;
}

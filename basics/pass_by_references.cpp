#include <iostream>


void call_by_value(int x) {
  x = x + 10;
}

void call_by_reference(int& x) {
  x = x + 10;
}



// An exmple of passing an array by reference.
// Note: you have to specify the size of the array.
//
// void print_array(int (&a) [])  <--- this won't compile.  
void print_array1(int (&a) [4]) {
  
  for(int i: a) {
    std::cout << i << " " << std::endl;
    i++;  // this does not modify the input array.
  }  
}


// To turn the above function into accpeting an array of arbitrary size, you have to use
// templates.
template<typename T, size_t N>
void print_array2(T (&a) [N]) {
  for(int i: a) {
    std::cout << i << " " << std::endl;
  }
  
}


int main() {


  int x1 = 10;

  // Call by value does not modify the function argument.
  std::cout << "Value of x1 before function call (call by value): " << x1 << std::endl;
  call_by_value(x1);
  std::cout << "Value of x1 after function call (call by value): " << x1 << std::endl;

  // Call by referece modifies the function argument.
  std::cout << "Value of x1 before function call (call by reference): " << x1 << std::endl;
  call_by_reference(x1);
  std::cout << "Value of x1 after function call (call by reference): " << x1 << std::endl;

  // Temporary variable e.g. result of an operation, cannot be passed as references.
  // call_by_reference(x1 + 20);   this won't compile.


  int a1[] = { 0, 10, 20, 30 };  
  print_array1(a1);
  print_array2(a1);

  
  
  return 0;
}

#include <iostream>
#include "utils.h"

int main() 
{
  int a;

  a = 2;
  std::cout << "Hello world, a is : " << a << "\n" << std::endl;
  int b = 3;
  int c = mySum(a, b);  

  return 0;
}
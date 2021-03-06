#include <iostream>
#define X 10 // macros in C programing syntax

int main()
{
  // this is a "litteral" variable
  int w = 5;

  // const keyword qualifies a variable
  // as a symbolic constant, readonly after declaration
  const int x = 6;
  // x = 79; // -> error: variable 'x' declared const here

  // we can declare a set of constants in an enumeration
  enum
  {
    y = 100,
    z = 22,
  };

  std::cout << z << std::endl;
}

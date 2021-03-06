#include <iostream>
#include "math_utils.h"

int main()
{
  Rectangle some_rectangle;
  some_rectangle.length = 134;
  some_rectangle.width = 67;
  std::cout << utilz::area(some_rectangle) << std::endl;

  int some_square_side = 138;
  std::cout << utilz::area(some_square_side) << std::endl;

  std::cout << utilz::pow(3, 3) << std::endl;
  std::cout << utilz::pow(3) << std::endl;
  return 0;
}

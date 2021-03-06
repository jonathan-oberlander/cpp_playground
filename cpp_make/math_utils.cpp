#include "math_utils.h"

namespace utilz
{

  double area(Rectangle rectangle)
  {
    return rectangle.length * rectangle.width;
  }

  double area(double side)
  {
    return side * side;
  }

  double pow(double base, int power)
  {
    int total = 1;
    for (int i = 0; i < power; i++)
    {
      total *= base;
    }
    return total;
  }

} // namespace utilz

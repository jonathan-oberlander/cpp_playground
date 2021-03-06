#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
  double length;
  double width;
};

namespace utilz
{
  double area(Rectangle rectangle);
  double area(double side);
  double pow(double base, int power = 2);
} // namespace utilz

#endif

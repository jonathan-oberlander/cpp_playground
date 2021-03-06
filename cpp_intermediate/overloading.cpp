#include <iostream>

struct Rectangle
{
  double length;
  double width;
};

double area(Rectangle rectangle)
{
  return rectangle.length * rectangle.width;
}

/* area function overload for a square */
double area(double side)
{
  return side * side;
}

/* to minimise function oberloads you can use default argument */
double pow(double base, int power = 2)
{
  int total = 1;
  for (int i = 0; i < power; i++)
  {
    total *= base;
  }
  return total;
}

int main()
{
  Rectangle some_rectangle;
  some_rectangle.length = 134;
  some_rectangle.width = 67;
  std::cout << area(some_rectangle) << std::endl;

  int some_square_side = 138;
  std::cout << area(some_square_side) << std::endl;

  std::cout << pow(3, 3) << std::endl;
  std::cout << pow(3) << std::endl;
  return 0;
}

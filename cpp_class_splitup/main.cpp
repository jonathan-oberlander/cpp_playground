#include <iostream>
#include "point.cpp"
#include "point.h"

int main()
{
  Point point(231, 678), point_3d(493, 156, 839);
  is_3d_point(point);
  is_3d_point(point_3d);
  std::cout << "number of points: " << Point::get_number_of_points() << "\n";
  std::cout << point.nultiply_coordinates() << "\n";
  return 0;
}

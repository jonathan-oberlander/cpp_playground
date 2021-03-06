#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
  static double number_of_points;
  int z;

public:
  int x;
  int y;
  Point(int x, int y, int z = 0);
  ~Point();
  double nultiply_coordinates();
  static int get_number_of_points();
  int get_z(Point point);
  friend void is_3d_point(Point &point);
  friend std::ostream &operator<<(std::ostream &output, const Point &point);
};

#endif
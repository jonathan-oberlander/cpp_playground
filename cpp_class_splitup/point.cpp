#include <iostream>
#include "point.h"

double Point::number_of_points = 0;

Point::Point(int x, int y, int z)
{
  number_of_points++;
  this->x = x;
  this->y = y;
  this->z = z;
};

Point::~Point()
{
  number_of_points--;
  std::cout << "Point destroyed\n";
}

double Point::nultiply_coordinates()
{
  return this->x * this->y;
}

int Point::get_z(Point point)
{
  return point.z ? point.z : 0;
}

int Point::get_number_of_points()
{
  return number_of_points;
}

std::ostream &operator<<(std::ostream &output, const Point &point)
{
  if (point.z > 0)
  {
    return output << "x: " << point.x
                  << " y: " << point.y
                  << " z: " << point.z;
  }
  else
  {
    return output << "x: " << point.x
                  << " y: " << point.y;
  }
}

void is_3d_point(Point &point)
{
  if (point.z > 0)
  {
    std::cout << "3D point: ";
  }
  else
  {
    std::cout << "2D point: ";
  }
  std::cout << point << std::endl;
}

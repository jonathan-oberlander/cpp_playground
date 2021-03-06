#include <iostream>

class Point
{
  int z;

public:
  int x;
  int y;

  Point(int x, int y, int z = 0)
  {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  // the friend functions are declared inside of the class
  friend void is_3d_point(Point point);
  friend std::ostream &operator<<(std::ostream &output, const Point point);
};

// the friend function are defined outside of the class
// we can acces a private member: point.z
std::ostream &operator<<(std::ostream &output, const Point point)
{
  if (point.z > 0)
  {
    return output << "x: " << point.x
                  << "\ny: " << point.y
                  << "\nz: " << point.z;
  }
  else
  {
    return output << "x: " << point.x
                  << "\ny: " << point.y;
  }
}

void is_3d_point(Point point)
{
  if (point.z > 0)
  {
    std::cout << "3D point :\n";
  }
  else
  {
    std::cout << "2D point :\n";
  }
  std::cout << point << std::endl;
}

int main()
{
  Point point(231, 678), point_3d(493, 156, 839);
  is_3d_point(point);
  is_3d_point(point_3d);
  return 0;
}

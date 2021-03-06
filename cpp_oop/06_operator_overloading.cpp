#include <iostream>

class Position
{
public:
  int x = 10;
  int y = 20;

  Position() {}
  Position(int x, int y)
  {
    this->x = x;
    this->y = y;
  }

  // + operator overloading
  Position operator+(Position pos)
  {
    Position computed_pos;
    computed_pos.x = this->x + pos.x;
    computed_pos.y = this->y + pos.y;
    return computed_pos;
  }

  // == comparison operator overloading
  bool operator==(Position pos)
  {
    return this->x == pos.x && this->y == pos.y;
  }
};

// insertion operators overloading - global overload
std::ostream &operator<<(std::ostream &output, const Position pos)
{
  return output << "x: " << pos.x << "\ny: " << pos.y;
}
// here its important to pass by reference
// or else the point will be passed by value (copied into the scope)
std::istream &operator>>(std::istream &input, Position &point)
{
  return input >> point.x >> point.y;
}

int main()
{
  Position pos1, pos2(10, 20);
  Position point;

  // these syntax are possible only because of operator overloads
  if (pos1 == pos2)
  {
    std::cout << "start positions are the same!!"
              << "\n";
  }

  Position pos3 = pos1 + pos2;
  std::cout << pos3 << std::endl;

  std::cout << "Please input a value for x and y: ";
  std::cin >> point;
  std::cout << point << std::endl;

  return 0;
}

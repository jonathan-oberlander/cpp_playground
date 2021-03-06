#include <iostream>

int main()
{
  bool pizza_is_bad = false;
  std::cout << pizza_is_bad << std::endl; // -> 0 is false

  // 0 is false but any other value is true
  bool pizza_is_good = -1;
  std::cout << pizza_is_good << std::endl; // -> 1 is true

  // manipulators to ouput true or false instead of 1 and 0
  bool found = 1;
  std::cout << std::boolalpha << found << std::endl;

  if (found)
  {
    std::cout << "Found!!" << std::endl;
  }
  else
  {
    std::cout << "...not found." << std::endl;
  }
}

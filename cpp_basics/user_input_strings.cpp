#include <iostream>
#include <string>

/*
  std::cin >> greeting;
  by default std::cin only grabs the first word ,
  it will throw the leftover, (or assign to another var if told to)
  lets use getline()
*/

int main()
{
  std::cout << "Enter your greeting: " << std::endl;
  std::string greeting;
  getline(std::cin, greeting);
  std::cout << greeting << std::endl;
}

// to get numbers you can use cin.getline() instead.

#include <iostream>

int main()
{
  int some_array[10];

  // a pointer of type integer, points at the address
  // of the nth element of an array
  int *pLocation6 = &some_array[6];
  int *pLocation0 = &some_array[0];

  std::cout << "pLocation6 = " << (int)pLocation6 << std::endl;
  std::cout << "pLocation0 = " << (int)pLocation0 << std::endl;
  std::cout << "Difference = " << pLocation6 - pLocation0 << std::endl;

  std::cout << std::endl;
  system("pause");
  return 0;
}
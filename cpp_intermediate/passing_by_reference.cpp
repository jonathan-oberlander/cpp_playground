#include <iostream>

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
  std::cout << "a: " << a << "\tb: " << b << std::endl;
}

int main()
{
  int a = 10;
  int b = 23;
  swap(a, b);
  std::cout << "a: " << a << "\tb: " << b << std::endl;
  return 0;
}

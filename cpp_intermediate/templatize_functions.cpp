#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 10;
  int b = 23;
  swap(a, b);
  std::cout << "a: " << a << "\tb: " << b << std::endl;

  std::string c = "foo";
  std::string d = "bar";
  swap(c, d);
  std::cout << "c: " << c << "\td: " << d << std::endl;

  return 0;
}

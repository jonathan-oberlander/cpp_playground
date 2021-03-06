#include <iostream>
#include <string>

/* function overloading */

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
  std::cout << "a: " << a << "\tb: " << b << std::endl;
}

/*
  redeclaring the function here will not throw an error 
  because the two functions have different signatures !!
*/

void swap(std::string &a, std::string &b)
{
  std::string temp = a;
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

  std::string c = "foo";
  std::string d = "bar";
  swap(c, d);
  std::cout << "c: " << c << "\tb: " << d << std::endl;

  return 0;
}

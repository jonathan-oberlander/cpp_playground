#include <iostream>
#include <float.h> // has some values of precision

/*
  floating pointw are only trust worthy to a certain point
  for exact decimals (for money) need a special libraries
*/
int main()
{

  // float type has the least number or significant digits
  float a = 10.0 / 3;
  a = a * 20000000000;
  std::cout << std::fixed << a << std::endl; // -> 66666663936.000000 wtf??
  std::cout << FLT_DIG << std::endl;         // -> we can trust it to 6 digits of precision!!

  // usualy better to work with doubles
  double b = 7.7E4;                  // 7.7 * 10^4 -- move the point to the right 4 times
  std::cout << b << std::endl;       // -> 77000
  std::cout << DBL_DIG << std::endl; // -> 15 digits of precision!!

  // even more precise
  long double c;
}

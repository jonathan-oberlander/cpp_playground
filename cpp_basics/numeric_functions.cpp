#include <iostream>
#include <cmath>

// http://www.cplusplus.com/reference/cmath/

int main()
{
  std::cout << NAN << std::endl;                 // -> nan
  std::cout << INFINITY << std::endl;            // -> inf
  std::cout << sqrt(-25) << std::endl;           // -> nan
  std::cout << pow(-9, 999) << std::endl;        // -> -inf
  std::cout << remainder(10, 3.25) << std::endl; // -> 0.25
  std::cout << fmod(10, 3.25) << std::endl;      // -> 0.25 - rounding
  std::cout << 10 % 3 << std::endl;              // -> 1
  std::cout << fmax(20, 3.25) << std::endl;      // -> 20
  std::cout << fmin(17, 0.25) << std::endl;      // -> 0.25
  std::cout << ceil(-1.5) << std::endl;          // -> --1
  std::cout << floor(3.85) << std::endl;         // -> 3
  std::cout << trunc(1.515) << std::endl;        // -> 1
  std::cout << round(1.495) << std::endl;        // -> 1
}
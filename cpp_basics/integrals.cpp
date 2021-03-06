#include <iostream>
#include <climits>
// integral -> int
// 32 bits depending on the system - 16 bits garanteed
// signed bits allow pos or neg numbers
// shifts the range => 0..1 becomes -0.5..0.5

int main()
{
  //
  short a;
  int b;       // at least 16bits
  long c;      // at least 32bits
  long long d; // at least 64bits

  // only allow positive values, will extend the max values
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  /*
    sizeof is an operator that will return the number of bytes 
    a byte is 8 bits, so 2 bytes is 16 bits
  */
  std::cout << sizeof(long) * 8 << " bits." << std::endl;

  /*
    including climits allows us to get these values
    it's a very handy way to find out what the current architecture
    allows us to use.
  */
  std::cout << UINT_MAX << std::endl;
}

#include <iostream>
using std::string;

int main()
{
  string greeting = "Bonjour";
  // c_str() converts a C++ string into a C-style string
  printf("%s World!\n", greeting.c_str());
}

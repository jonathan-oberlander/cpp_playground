#include <cmath>  // gives acces to some maths...
#include <iostream>
#include "foo.h"  // import function decalration from a header file

using std::cin;
using std::cout;

double powr(double, int);  // declarations may be in a seperate file .h
void print_pow(double, int);

int main() {
  cout << foo(4) << std::endl;
  double base;
  int exponent;
  cout << "what is the base ?: ";
  cin >> base;
  cout << "what is the exponent ?: ";
  cin >> exponent;
  print_pow(base, exponent);
  print_pow(4, 6);
}

void print_pow(double base, int exponent)  // procedure
{
  double myPower = powr(base, exponent);
  cout << base << " raised to the " << exponent << " power is: " << myPower
       << "." << std::endl;
}

double powr(double base, int exponent)  // fuction definition
{
  double result = 1;
  for (int i = 0; i < exponent; i++) {
    result = result * base;
  }
  return result;
}

int foo(int i) {
  return i + 2;
}
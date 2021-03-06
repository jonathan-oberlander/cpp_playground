#include <iostream>

int main()
{
  int a = 6; // = is an operator

  // arithmetic operators make up for expressions
  int b = a + 2;      // expr
  int c = b - 1;      // expr
  int d = c * 7;      // expr
  int e = d / 4;      // int division -> returns an int !!
  double f = 10. / 4; // double division
  double g = 10 % 4;  // modulo

  // operator precedence - associativity
  // https://en.cppreference.com/w/cpp/language/operator_precedence
  // left to right if no ()
  double h = 10 + (4.0 / 3);
  // some operators are rigth to left
  double i;
  double j;
  i = 10;
  j = i = 100; // j = (i = 100);

  int k;
  int l;
  k = 8;
  (l = k) = 80; // k = 8; i = 80; ???

  std::cout << a << "\n"
            << b << "\n"
            << c << "\n"
            << e << "\n"
            << f << "\n"
            << g << "\n"
            << h << "\n"
            << i << "\n"
            << j << "\n"
            << k << "\n"
            << l << "\n"
            << std::endl;
}

#include <iostream>
#include <string>
using std::string;

/*
  auto determine the type of variable automatically,
  its a C++ 11 feature, to compile it 
  you need to pass an attribute : g++ literals.cpp -std=c++11
  error : 'auto' type specifier is a C++11 extension

  Literals to type Hex and octo   
  Hexadecimals and Octo are cool :)
  base 16 / base 8
  usually for adressing things in memory
*/

int main()
{
  auto w = 6;    // double by default
  auto x = 5U;   // unsigned
  auto y = 7ULL; // unsigned long long
  auto z = 5.0F; // float
  // you can't change the type / reassign dynamically though :)

  // literals
  // convert hex / octo to int
  int hex = 0x30; // -> 48 is 16 * 3 in Hexadecimal
  int octo = 030; // -> 24 is 8 * 3 in Octo
  std::cout << hex << std::endl;
  std::cout << octo << std::endl;

  // convert int to hex / octo
  int a = 30;
  std::cout << std::hex << a << std::endl; // -> 1e
  std::cout << std::oct << a << std::endl; // -> 36
}

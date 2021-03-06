#include <iostream>

int main()
{
  // we use single quotes for a char
  char x = 'B';
  std::cout << x << std::endl; // -> 'B'

  // casting -> char to int
  // checkout ASCII tables
  std::cout << (int)x << std::endl; // -> 66

  // its possible to store the ASCII number in chars
  char w = 120;
  std::cout << w << std::endl; // -> 'x'

  // max casting values for chars are 127
  // overflow wraps around the minimal value !!
  // char y = 130;
  // std::cout << (int)y << std::endl; // -> -126

  // its possible to increase the max value
  unsigned char z = 132;
  std::cout << (int)z << std::endl; // -> 132

  // limit yourself to ASCII table
  // char v = 140;
  // std::cout << v << std::endl; // -> '?' meaning unknown char

  // // do some research on these extendend types
  // std::cout << (char16_t)v << std::endl;

  // do some research espace sequences
  /*
    some characters get intepreted
    \t tab
    \b deletes a character
    \n goes to next line
    \v vertical tab
    \a can will emit a beep sound
    \0 indicates the end of a C code style string
    \" escapes for strings and allows to type a double quotes
    \' escapes for characters and allows to type a single quotes
    \\ writes a backslash
  */
  std::cout << "|\v|\"escape\"|\t|\v|\\|\t|\'A\'|\n|\t|\v|\t|\v|" << std::endl;
}

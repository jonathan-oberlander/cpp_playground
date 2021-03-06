#include <iostream>

// function declarations
int season_switch();
int age_if_statement();

int main() {
  season_switch();
  age_if_statement();
}

int age_if_statement() {
  int age;
  std::cout << "how old are you? : \n";
  std::cin >> age;
  if (age <= 12) {
    std::cout << "You're not old enough...\n";
    return -1;
  } else if (age > 12 && age < 30) {
    std::cout << "That's old enough\n";
  } else {
    std::cout << "Okay Boomer :D\n";
  }
  return 0;
}

/*
  switch statement
  using a class enum -> values are available only in it
  and dont popule the space
  g++ branching.cpp -std=c++11 && ./a.out
*/
int season_switch() {
  enum class Season { summer, spring, fall, winter };
  Season now = Season::winter;
  switch (now)  // <- only integral types in c++ !!
  {
    case Season::summer:  // <- only exact values, no expressions
      std::cout << "it's hot...\n";
      return 0;
    case Season::spring:
      std::cout << "its alive!\n";
      break;
    case Season::winter:
      std::cout << "its freezing\n";
      break;
    case Season::fall:
      std::cout << "its a little late\n";
      break;
  }
  return 0;
}

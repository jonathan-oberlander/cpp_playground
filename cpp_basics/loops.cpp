#include <iostream>
#include <string>

/* ICU initialization condition update */

void while_loop();
void do_while_loop();
void for_loop();
void iterate_string(std::string);

int main() {
  while_loop();
  for_loop();
  std::string str = "Hello I am John";
  iterate_string(str);
  do_while_loop();
  return 0;
}

// whatch out for indefinite loops...
void while_loop() {
  int factorial = 9;
  double i = factorial - 1;
  while (i > 1) {
    factorial *= i;
    std::cout << factorial << "\t";
    i--;  // placeing it a the end for coherency with the for loop
  };
  std::cout << std::endl;
}

void for_loop() {
  int fact = 25;
  double factorial = fact;
  for (int i = factorial - 1; i > 1; i--) {
    factorial = factorial * i;
  }
  std::cout << factorial << std::endl;
}

// when you need smth to happen at least once
void do_while_loop() {
  std::string password = "hellotacos123";
  std::string guess;
  do {
    std::cout << "Guess the password: ";
    std::cin >> guess;
  } while (guess != password);
  std::cout << "You win: " << password << std::endl;
}

void iterate_string(std::string str) {
  for (int i = 0; i < str.length(); i++) {
    std::cout << str[i] << "\t";
    if (str[i] == 'J') {
      std::cout << "Found 'J'";
      break;
    }
  }
  std::cout << std::endl;
}

#include <array>
#include <iostream>
#include <vector>

/*
  c++ 11 feature
  g++ range_based_loops.cpp -std=c++11 && ./a.out
*/
int main() {
  std::vector<int> data = {1, 2, 3, 4, 5, 6};

  // equivalent of forEach in JS
  for (int n : data) {
    std::cout << n << '\t';
  }

  std::cout << std::endl;
}

#include <iostream>
#include <vector>

/*
  size is dynamic
  you need to use c++ 11
  g++ vectors.cpp -std=c++11
  https://www.geeksforgeeks.org/vector-in-cpp-stl/
*/

/*
  When passing a vecotr to a function
  the data is  copied, you need to pass by reference
  with an &
*/
void print_vector(std::vector<int>& data) {
  data.push_back(32);
  for (int i = 0; i < data.size(); i++) {
    std::cout << data[i] << '\t';
  }
  std::cout << std::endl;
}

int main() {
  std::vector<int> data = {1, 2, 3};
  data.push_back(12);
  std::cout << data[data.size() - 1] << std::endl;

  print_vector(data);

  /*
    When passing a vecotr to a function
    the data is actually copied !!
    unless you pass by reference with &
  */
  data.pop_back();
  std::cout << data[data.size() - 1] << std::endl;
}

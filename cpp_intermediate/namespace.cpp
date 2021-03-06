#include <iostream>
#include <vector>

namespace utils
{
  void print_vector(std::vector<int> data)
  {
    for (int i = 0; i < data.size(); i++)
    {
      std::cout << data[i] << "\t";
    }
    std::cout << "\n";
  }
} // namespace utils

int main()
{
  std::vector<int> some_vector = {3, 6, 9, 23, 67};

  // use the namespace as a prefix
  utils::print_vector(some_vector);
  return 0;
}

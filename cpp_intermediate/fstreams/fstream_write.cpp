#include <fstream>
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names;  // c++ 11
  names.push_back("John");
  names.push_back("Mark");
  names.push_back("Steff");

  std::string filename;

  std::cout << "Please enter the name.txt of the file : ";
  std::cin >> filename;

  // std::ios::app will append to the file instead of rewritting

  std::ofstream file(filename, std::ios::app);

  if (file.is_open()) {
    std::cout << "writting to : " << filename << std::endl;
    for (std::string name : names) {
      file << name << '\n';
    }
  } else {
    std::cout << "error: unable to open the file" << std::endl;
  }

  file.close();
  return 0;
}

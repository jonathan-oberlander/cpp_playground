#include <fstream>
#include <iostream>
#include <vector>

int main() {
  std::ifstream file("yo.txt");

  if (file.is_open()) {
    char temp = file.get();
    std::cout << temp << "\n";

    std::string line;
    getline(file, line);
    std::cout << line << "\n";
  } else {
    std::cout << "Problem opening the file"
              << "\n";
  }

  return 0;
}

// std::vector<std::string> values;
// std::string data;
// while (file >> data) {
//   values.push_back(data);
// }
// for (std::string value : values) {
//   std::cout << value << "\n";
// }
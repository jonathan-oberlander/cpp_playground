#include <iostream>
#include <vector>

class User
{
  std::string status = "Gold"; // c++11

public:
  std::string first_name;
  std::string last_name;
  // constructor assigns member variables
  User(std::string f, std::string l, std::string s)
  {
    std::cout << "Constructor\n";
    this->first_name = f;
    this->last_name = l;
    this->status = s;
  }
  std::string get_status()
  {
    return status;
  }
  // descrtuctor
  ~User()
  {
    std::cout << "Destructor\n";
  }
};

int main()
{
  User user("John", "Obea", "Silver");
  std::cout << user.first_name << "\t" << user.get_status() << "\n";
  return 0;
}

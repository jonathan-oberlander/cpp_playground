#include <iostream>
#include <vector>

class User
{
  // private members
  std::string status = "Gold"; // c++11

  // public members
public:
  std::string first_name;
  std::string last_name;

  // default constructor
  User()
  {
    std::cout << "Constructor\n";
  }
  // a constructor to assigns member variables
  User(std::string f, std::string l, std::string s)
  {
    std::cout << "Constructor\n";
    this->first_name = f;
    this->last_name = l;
    this->status = s;
  }

  // example of a setter
  void set_status(std::string s)
  {
    if (s == "Gold" || s == "Silver" || s == "Bronze")
    {
      this->status = s;
    }
    else
    {
      this->status = "No Status";
    }
  }

  // example of a getter
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
  User user;
  user.set_status("Elite");
  std::cout << user.first_name << "\t" << user.get_status() << "\n";
  return 0;
}

#include <iostream>

struct User
{
  std::string first_name;
  std::string last_name;
  // its possible to decalre a method here
  // but its not good practice
  std::string get_status()
  {
    return status;
  }

private:
  std::string status = "Gold"; // c++11
};

int main()
{
  User user;
  user.first_name = "Amy";
  user.last_name = "Black";
  // user.status = "Gold"; // private member returns compile error

  std::cout << "First name: " << user.first_name << std::endl;
  std::cout << "Status: " << user.get_status() << std::endl;
  return 0;
}

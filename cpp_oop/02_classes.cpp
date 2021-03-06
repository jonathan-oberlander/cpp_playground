#include <iostream>
#include <vector>

/*
  basically the oposite of a struct in terms of
  access modifiers
*/

class User
{
  std::string status = "Gold"; // c++11

public:
  std::string first_name;
  std::string last_name;
  std::string get_status()
  {
    return status;
  }
};

int add_user(std::vector<User> &users, User user)
{
  for (int i = 0; i < users.size(); i++)
  {
    if (users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
    {
      return i;
    }
  }
  users.push_back(user);
  return users.size() - 1;
}

void print_users(std::vector<User> users)
{
  std::cout << "[ ";
  for (int i = 0; i < users.size(); i++)
  {
    std::cout << users[i].first_name << ", ";
  }
  std::cout << "]\n";
}

int main()
{
  std::vector<User> users;
  User user_1, user_2, user_3;

  user_1.first_name = "John";
  user_1.last_name = "Obea";
  add_user(users, user_1);

  user_2.first_name = "Mark";
  user_2.last_name = "Vlad";
  add_user(users, user_2);

  user_3.first_name = "Mark";
  user_3.last_name = "Vlad";
  std::cout << add_user(users, user_3) << "\n";

  print_users(users);

  return 0;
}

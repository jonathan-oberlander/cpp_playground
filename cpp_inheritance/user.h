#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User
{
  std::string status = "No Status";
  static int number_of_users;

public:
  User();
  User(std::string f, std::string l);
  ~User();
  std::string first_name;
  std::string last_name;
  void set_status(std::string status);
  static int get_number_of_users();
  friend std::ostream &operator<<(std::ostream &output, const User &user);
};

#endif
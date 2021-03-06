#include "user.h"

int User::number_of_users = 0;

User::User()
{
  number_of_users++;
  std::cout << "User created:\n";
}

User::User(std::string f, std::string l)
{
  number_of_users++;
  this->first_name = f;
  this->last_name = l;
  std::cout << "User created:\n";
};

User::~User()
{
  number_of_users--;
}

void User::output()
{
  std::cout << "I am a user\n";
}

int User::get_number_of_users()
{
  return number_of_users;
}

void User::set_status(std::string status)
{
  this->status = status;
}

std::ostream &operator<<(std::ostream &output, const User &user)
{
  return output << "First name: " << user.first_name
                << " Last name: " << user.last_name
                << " Status: " << user.status;
}

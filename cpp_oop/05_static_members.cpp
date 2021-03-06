#include <iostream>
#include <vector>

class User
{
  // a private static member
  static int user_count;
  std::string status = "Gold"; // c++11

public:
  // a static getter
  static int get_user_count()
  {
    return user_count;
  }

  std::string first_name;
  std::string last_name;

  User()
  {
    std::cout << "Default constructor\n";
    user_count++;
  }
  User(std::string f, std::string l, std::string s)
  {
    std::cout << "A Constructor\n";
    this->first_name = f; // this pointer is not mendatory
    this->last_name = l;
    this->status = s;
    user_count++;
  }

  void set_status(std::string status)
  {
    if (status == "Gold" || status == "Silver" || status == "Bronze")
    {
      this->status = status;
    }
    else
    {
      this->status = "No Status";
    }
  }

  std::string get_status()
  {
    return status;
  }

  ~User()
  {
    std::cout << "Destructor\n";
    user_count--;
  }
};

/*
  its confusing but basically, assigning a value to the static member 
  creates an instance of the class and therefore allocates some memory to
  its members, that is why we can't do it inside of the class.
*/
int User::user_count = 0;

int main()
{
  User user, user_1, user_2("Lionel", "Richie", "Gold"), user_3;
  std::cout << "Total users: " << User::get_user_count() << std::endl;
}

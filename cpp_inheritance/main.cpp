// do not import .cpp files, only headers !!!
#include "user.h"
#include "teacher.h"

int main()
{
  User user("John", "obea");
  user.set_status("Gold");
  std::cout << user << std::endl;

  /*
    teacher inherits the members from User
    both constructors are called :
    First a user is created, then a teacher is created
  */
  Teacher teacher;
  teacher.first_name = "Yohno";
  teacher.last_name = "Sabla";
  teacher.set_status("Stone");
  std::cout << teacher << std::endl;

  return 0;
}

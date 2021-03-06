#include "user.h"
#include "teacher.h"
#include "student.h"

/*
  its possible to make a & reference to user type here
  because teacher inherits from User
  here u is of type User, but is actually a teacher
  u.output(); wouldn't work, 
  
  we can use the "virtual" keyword
  meaning that it can be over-written in its inherited classes
  that way you can pass sub classes to function that 
  take their parent type student -> user // tescher -> user
*/

void what_am_I(User &user)
{
  user.output();
}

int main()
{
  Teacher teacher;
  User &u_1 = teacher;
  what_am_I(u_1); // "I am a teacher" but also a user :)

  Student student;
  User &u_2 = student;
  what_am_I(u_2); // "I am a student" but also  a user :)

  return 0;
}

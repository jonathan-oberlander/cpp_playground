#ifndef TEACHER_H
#define TEACHER_H

#include <vector>
#include <string>
#include <iostream>
#include "user.h"

class Teacher : public User
{
public:
  Teacher();
  std::vector<std::string> classes_taught;
  void output();
};

#endif
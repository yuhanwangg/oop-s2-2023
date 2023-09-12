#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
using namespace std;
#include "Person.h"

class Instructor : public Person {
 protected:
 public:
  Instructor();
  Instructor(string name);
};

#endif
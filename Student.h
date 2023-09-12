#include <iostream>

#include "Grade.h"
#include "Person.h"

#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student : public Person {
 private:
  int id;
  int no_courses;
  Grade* grades;

 public:
  Student();
  Student(string name, int id, int no_courses);
  void addGrade(Grade grade);
  void set_id(int id);
  int get_id();
  ~Student();
};

#endif
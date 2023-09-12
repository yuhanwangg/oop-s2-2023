#ifndef GRADE_H
#define GRADE_H
#include <iostream>
using namespace std;

class Grade {
 protected:
  int student_id;
  int course_id;
  string assignment;
  int value;

 public:
  Grade();
  Grade(int id, string assignment, int value, int course_id);
  // student_id = id;
  // this->assignment = assignment;
  // this->value = value;
  string get_assignment();
  int get_value();
  int get_student_id();
  void set_assignment(string ass);
  void set_value(int grade);
  void set_student_id(int stud_id);
};

#endif
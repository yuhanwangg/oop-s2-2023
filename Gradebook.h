#ifndef GRADEBOOK_H
#define GRADEBOOK_H
#include <iostream>

#include "Course.h"
#include "Grade.h"
#include "Student.h"
using namespace std;

class Gradebook {
 protected:
  Grade* grades;  // for all students grades
  int count_grade;
  int no_students;

 public:
  Gradebook();
  Gradebook(int no_students);
  void addGrade(int stud_id, int course_id, string assignment, int value);
  ~Gradebook();
};

#endif
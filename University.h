#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include <iostream>

#include "Course.h"
#include "Gradebook.h"
using namespace std;

class University {
 private:
  string name;
  string location;
  Course* courses;
  int no_courses;
  int course_count;
  int no_students;

 public:
  University();
  University(string name, string location, int no_courses);
  void addCourse(int id, string name);
  void get_courses();
  ~University();
};
#endif
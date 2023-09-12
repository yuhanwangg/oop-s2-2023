#include "University.h"

#include <iostream>
using namespace std;

University::University() {
  name = " ";
  location = " ";
  no_courses = 0;
  course_count = 0;
  no_students = 100;
};
University::University(string name, string location, int no_courses) {
  this->name = name;
  this->location = location;
  this->no_courses = no_courses;
  courses = new Course[no_courses];
  course_count = 0;
  no_students = 100;
};
void University::addCourse(int id, string name) {
  if (course_count < no_courses) {
    courses[course_count] = Course(no_students, id, name);
    course_count++;
  }
};
void University::University::get_courses() { return courses; };
~University() { delete[] courses; };
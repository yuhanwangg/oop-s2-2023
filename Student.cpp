#include "Student.h"

#include <iostream>

#include "Person.h"
using namespace std;

Student::Student() { id = 0; };
Student::Student(string name, int id, int no_courses) {
  this->name = name;
  this->no_courses = no_courses;
  this->id = id;
  grades = new Grade[no_courses];
};
void Student::set_id(int id) { this->id = id; };
int Student::get_id() { return id; };

#include "Grade.h"

#include <iostream>
using namespace std;

Grade::Grade() {
  student_id = 0;
  assignment = " ";
  value = 0;
};
Grade::Grade(int id, string assignment, int value) {
  student_id = id;
  this->assignment = assignment;
  this->value = value;
};
string Grade::get_assignment() { return assignment; };
int Grade::get_value() { return value; };
int Grade::get_student_id() { return student_id; };
void Grade::set_assignment(string ass) { assignment = ass; };
void Grade::set_value(int grade) { value = grade; };
void Grade::set_student_id(int stud_id) { student_id = stud_id; };
#include "Gradebook.h"

#include <iostream>
using namespace std;

Gradebook::Gradebook() {
  count_grade = 0;
  grades = new Grade[no_students];
}
Gradebook::Gradebook(int no_students) {
  this->no_students = no_students;
  grades = new Grade[no_students];
  count_grade = 0;
}
void Gradebook::addGrade(int stud_id, int course_id, string assignment,
                         int value) {
  grades[count_grade] = Grade(stud_id, assignment, value, course_id);
  count_grade++;
}

Gradebook::~Gradebook() { delete[] grades; };
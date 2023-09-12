#include "Course.h"

#include <iostream>

#include "Person.h"
using namespace std;

Course::Course() {
  name = " ";
  id = 0;
  count_person = 0;
  total_people = 0;
};

Course::Course(int no_ppl, string name, int id) {
  persons = new Person*[no_ppl];
  this->name = name;
  this->id = id;
  total_people = no_ppl;
};

void Course::addPerson(Person* p) {
  if (count_person < total_people) {
    persons[count_person] = p;
    count_person++;
    cout << "Student successfully added!";
  } else {
    cout << "Course is at full capacity!";
  }
};
void Course::set_course_name(string name) { this->name = name; };
string Course::get_course_name() { return name; };
int Course::get_course_id() { return id; };
void Course::set_course_id(int id) { this->id = id; };
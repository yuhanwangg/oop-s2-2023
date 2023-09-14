#ifndef COURSE_H
#define COURSE_H
#include <iostream>

#include "Person.h"
using namespace std;

class Course {
 protected:
  string name;
  int id;
  Person** persons;
  int count_person;
  int total_people;

 public:
  Course();
  Course(int no_ppl, string name, int id);
  void addPerson(Person* p);
  void set_course_name(string name);
  string get_course_name();
  int get_course_id();
  void set_course_id(int id);
  ~Course();
};

#endif
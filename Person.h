#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person {
 protected:
  string name;

 public:
  Person();
  Person(string name);
  string get_name();
  void set_name(string name);
};

#endif
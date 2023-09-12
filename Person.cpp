#include "Person.h"

#include <iostream>
using namespace std;

Person::Person() { name = " "; };
Person::Person(string name) { this->name = name; }
string Person::get_name() { return name; };
void Person::set_name(string name) { this->name = name; };
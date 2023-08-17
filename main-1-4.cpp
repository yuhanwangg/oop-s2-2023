#include <string.h>

#include <iostream>
using namespace std;
#include "Person.h"
extern PersonList shallowCopyPersonList(PersonList pl);

int main(void) {
  PersonList pl, shallow_copy;
  pl.people = new Person[5];
  pl.numPeople = 5;
  for (int i = 0; i < pl.numPeople; i++) {
    pl.people[i].name = "Jane Doe";
    pl.people[i].age = 1;
  }
  shallow_copy = shallowCopyPersonList(pl);
  for (int i = 0; i < pl.numPeople; i++) {
    cout << shallow_copy.people[i].name << " " << shallow_copy.people[i].age
         << endl;
  }
}
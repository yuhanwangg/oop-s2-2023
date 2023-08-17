#include <string.h>

#include <iostream>
using namespace std;
#include "Person.h"
extern PersonList deepCopyPersonList(PersonList pl);

int main(void) {
  PersonList list, copy;

  list.people = new Person[5];

  for (int i = 0; i < 5; i++) {
    list.people[i].name = "Jane Doe";
    list.people[i].age = 1;
  }

  list.numPeople = 5;

  copy = deepCopyPersonList(list);

  for (int i = 0; i < copy.numPeople; i++) {
    cout << copy.people[i].name << " " << copy.people[i].age << endl;
  }
  return 0;
}
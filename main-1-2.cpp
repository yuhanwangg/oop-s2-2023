#include <string.h>

#include <iostream>
using namespace std;
#include "Person.h"
extern PersonList createPersonList(int n);

int main(void) {
  PersonList list = createPersonList(5);
  for (int i = 0; i < 5; i++) {
    cout << list.people[i].name << " " << list.people[i].age << endl;
  }

  return 0;
}
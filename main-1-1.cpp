#include <string.h>

#include <iostream>

#include "Person.h"
extern Person* createPersonArray(int n);

int main(void) {
  Person* array = createPersonArray(5);
  for (int i = 0; i < 5; i++) {
    cout << array[i].name << " " << array[i].age << endl;
  }
  return 0;
}
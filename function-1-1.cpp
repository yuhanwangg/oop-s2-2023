/* n a file called function-1-1.cpp, include Person.h and write a function
 * called createPersonArray that takes an integer argument n and returns an
 * array of n Person structs. The name and age fields of each struct should be
 * set to "John Doe" and 0, respectively. */

#include <string.h>

#include <iostream>

#include "Person.h"

Person* createPersonArray(int n) {
  Person* array = new Person[n];

  for (int i = 0; i < n; i++) {
    array[i].name = "John Doe";
    array[i].age = 0;
  }
  return array;
}
/* In a file called function-1-4.cpp, include Person.h and write a function
 * called shallowCopyPersonList that takes a PersonList struct and returns a new
 * PersonList struct that is a shallow copy of the original. That is, the people
 * field of the new struct should point to the same array of n Person structs as
 * the original.*/

#include <string.h>

#include <iostream>

#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
  PersonList pointer;

  pointer = pl;

  return pointer;
}
#include "Orchestra.h"

#include <iostream>

#include "Musician.h"
using namespace std;

Orchestra::Orchestra() {
  size = 0;
  counter = 0;
};  // default constructor
Orchestra::Orchestra(int size1) {
  size = size1;
  members = new Musician[size];
  counter = 0;  // initialise here for every new orchestra
};              // constructor for an orchestra of given size

Musician* Orchestra::get_members() {
  return members;  // reutnring pointer
};                 // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not
// full otherwise returns false
bool Orchestra::add_musician(Musician new_musician) {
  if (counter < size) {
    members[counter] = new_musician;
    counter++;
    return true;
  } else {
    return false;
  }
};

// returns true if any musician in the orchestra plays the specified
// instrument otherwise returns false
bool Orchestra::has_instrument(string instrument) {
  for (int i = 0; i < size; i++) {
    if (members[i].get_instrument() == instrument) {
      return true;
    }
  }
  return false;
};

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() { return counter; };

Orchestra::~Orchestra() { delete[] members; };
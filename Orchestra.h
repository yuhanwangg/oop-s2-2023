#ifndef ORCHESTRA.H
#define ORCHESTRA .H
#include <Musician.h>

#include <iostream>
#include <string>
using namespace std;

class Orchestra {
 private:
  int size;
  int no_members;

 public:
  Orchestra();          // default constructor
  Orchestra(int size);  // constructor for an orchestra of given size

  // returns the number of musicians who have joined the orchestra
  int get_current_number_of_members();

  // returns true if any musician in the orchestra plays the specified
  // instrument otherwise returns false
  bool has_instrument(std::string instrument);

  Musician *get_members();  // returns the array of members of the orchestra

  // returns true and adds new musician to the orchestra if the orchestra is not
  // full otherwise returns false
  bool add_musician(Musician new_musician);

  ~Orchestra();
}

#include <Musician.h>
#include <Orchestra.h>

#include <iostream>
using namespace std;

Orchestra::Orchestra() { size = 0; };  // default constructor
Orchestra::Orchestra(int size1) {
  size = size1;
};  // constructor for an orchestra of given size

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members() { return current_members; };

// returns true if any musician in the orchestra plays the specified
// instrument otherwise returns false
bool Orchestra::has_instrument(string instrument);

Musician::Musician*
get_members();  // returns the array of members of the orchestra

// returns true and adds new musician to the orchestra if the orchestra is not
// full otherwise returns false
bool Orchestra::add_musician(Musician new_musician);

Orchestra::~Orchestra();
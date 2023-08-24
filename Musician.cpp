#include "Musician.h"

#include <iostream>
#include <string>
using namespace std;

Musician::Musician() {
  instrument = 'Null';
  experience = 0;
};  // a default constructor
// a constructor that takes the instrument played and the years of experience
Musician::Musician(string instrument1, int experience1) {
  instrument = instrument1;
  experience = experience1;
};
string Musician::get_instrument() {
  return instrument;
};  // returns the instrument played
int Musician::get_experience() {
  return experience;
};  // returns the number of years experience
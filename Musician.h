#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <iostream>
#include <string>
using namespace std;

class Musician {
 private:
  string instrument;
  int experience;

 public:
  Musician();  // a default constructor
  // a constructor that takes the instrument played and the years of experience
  Musician(string instrument1, int experience1);
  string get_instrument();  // returns the instrument played
  int get_experience();     // returns the number of years experience
};

#endif
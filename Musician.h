#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <iostream>
using namespace std;

#include <string>

class Musician {
 private:
  string instrument;
  int experience;

 public:
  Musician();
  Musician(string s_instrument, int s_experience);
  string get_instrument();
  int get_experience();
};

#endif

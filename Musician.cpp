#include "Musician.h"  //class needs to be called the same

Musician::Musician(string s_instrument, int s_experience) {
  instrument = s_instrument;  // no need to redefine the type
  experience = s_experience;
};
Musician::Musician() {
  instrument = "null";
  experience = 0;
}
string Musician::get_instrument() { return instrument; };
int Musician::get_experience() { return experience; };
#include <iostream>

#include "MusicBox.h"
using namespace std;
#include <string>

int main(void) {
  MusicBox m1("REVEAL", 2);
  cout << "The song name is: " << m1.get_song() << endl;
  cout << "The width of the track is: " << m1.get_width() << endl;

  MusicBox m2("Giddy up", 4);
  cout << "The song name is: " << m2.get_song() << endl;
  cout << "The width of the track is: " << m2.get_width() << endl;

  MusicBox m3("Lip Gloss", 8);
  cout << "The song name is: " << m3.get_song() << endl;
  cout << "The width of the track is: " << m3.get_width() << endl;
}
#ifndef MUSICBOX_H
#define MUSICBOX_H
#include <iostream>
using namespace std;
#include <string>

class MusicBox {
 private:
  string songname;
  int width;

 public:
  MusicBox();  // a default constructor
  MusicBox(
      string songname1,
      int width1);  // a constructor that takes the song and width as arguments
  string get_song();  // returns the name of the song that the music box plays
  int get_width();    // returns the width in centimetres of the music box
                      // A default destructor
};

#endif
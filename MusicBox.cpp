#include "MusicBox.h"

#include <iostream>
using namespace std;
#include <string>

MusicBox::MusicBox() {
  songname = "";
  width = 0;
};  // a default constructor
MusicBox::MusicBox(string songname1, int width1) {
  songname = songname1;
  width = width1;
};  // a constructor that takes the song and width as arguments
string MusicBox::get_song() {
  return songname;
};  // returns the name of the song that the music box plays
int MusicBox::get_width() {
  return width;
};  // returns the width in centimetres of the music box

#include <iostream>
using namespace std;
#include <string>

#include "MusicBox.h"
#include "StoreShelf.h"

StoreShelf::StoreShelf() { width = 0; };  // default constructor
StoreShelf::StoreShelf(int width1) {
  width = width1;
  mbox = new MusicBox[width];
  counter = 0;
  tempwidth = width1;
};  // constructor for shelf with given width in centimetres

int StoreShelf::get_width() {
  return width;
};  // returns the width of the shelf in centimetres

// returns true and adds music box to shelf if there is sufficient space
// otherwise returns false
bool StoreShelf::add_music_box(MusicBox a_music_box) {
  mbox_width = a_music_box.get_width();
  if (mbox_width < tempwidth) {
    mbox[counter] = a_music_box;
    counter++;
    tempwidth = tempwidth - a_music_box.get_width();
    return true;
  } else {
    return false;
  }
};

// returns the number of Music boxes currently on the shelf
int StoreShelf::get_num_music_boxes() { return counter; };

// returns a dynamic array of the music boxes currently on the shelf
MusicBox *StoreShelf::get_contents() { return mbox; };

StoreShelf::~StoreShelf() { delete[] mbox; };
#ifndef STORESHELF_H
#define STORESHELF_H
#include <iostream>

#include "MusicBox.h"
using namespace std;
#include <string>

class StoreShelf {
 private:
  int width;
  int counter;  // for the number of music boxes
  MusicBox* mbox;
  int tempwidth;
  int mbox_width;

 public:
  StoreShelf();  // default constructor
  StoreShelf(
      int width);  // constructor for shelf with given width in centimetres

  int get_width();  // returns the width of the shelf in centimetres

  // returns the number of Music boxes currently on the shelf
  int get_num_music_boxes();

  // returns a dynamic array of the music boxes currently on the shelf
  MusicBox* get_contents();

  // returns true and adds music box to shelf if there is sufficient space
  // otherwise returns false
  bool add_music_box(MusicBox a_music_box);

  ~StoreShelf();
};

#endif

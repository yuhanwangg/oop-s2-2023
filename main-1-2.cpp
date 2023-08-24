#include <iostream>

#include "MusicBox.h"
#include "StoreShelf.h"
using namespace std;
#include <string>

int main(void) {
  MusicBox m1("REVEAL", 2);
  MusicBox m2("Giddy up", 4);
  MusicBox m3("Lip Gloss", 8);
  MusicBox m4("The Stealer!", 6);

  StoreShelf shelf(10);
  cout << "Width of the shelf: " << shelf.get_width() << endl;
  if (shelf.add_music_box(m1) == true) {
    cout << "MusicBox 1 successfully added" << endl;
  } else {
    cout << "Not enough width in shelf!" << endl;
  }
  if (shelf.add_music_box(m2) == true) {
    cout << "MusicBox 2 successfully added" << endl;
  } else {
    cout << "Not enough width in shelf!" << endl;
  }
  if (shelf.add_music_box(m3) == true) {
    cout << "MusicBox 3 successfully added" << endl;
  } else {
    cout << "Not enough width in shelf!" << endl;
  }

  cout << "Music boxes on the shelf currently: " << shelf.get_contents()
       << endl;

  cout << "Number of music boxes on the shelf: " << shelf.get_num_music_boxes()
       << endl;
}
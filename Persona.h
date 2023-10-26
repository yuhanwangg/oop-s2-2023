#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

#include "Spot.h"

class Persona : public Spot {
 protected:
 public:
  //   Persona() { category = ' '; }
  Persona(int x, int y) {
    location = std::make_tuple(x, y);
    category = 'P';
  }
  void shift(int dx, int dy) {
    int x = std::get<0>(location);
    int y = std::get<1>(location);
    location = std::make_tuple(dx + x, dy + y);
  }
};

#endif
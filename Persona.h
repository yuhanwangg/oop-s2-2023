#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>

#include "Spot.h"

class Persona : public Spot {
 protected:
 public:
  Persona() { category = ' '; }
  Persona(int x, int y) {
    setLoc(x, y);
    category = 'P';
  }
  void shift(int dx, int dy) { location = std::make_tuple(dx, dy); }
};

#endif
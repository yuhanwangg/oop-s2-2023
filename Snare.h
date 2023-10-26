#ifndef SNARE_H
#define SNARE_H

#include <iostream>

#include "Influence.h"
#include "Spot.h"

class Snare : public Spot, public Influence {
 protected:
  bool operative;

 public:
  Snare() {
    category = ' ';
    operative = false;
  }
  Snare(int x, int y) {
    location = std::make_tuple(x, y);
    category = 'S';
    operative = true;
  }

  bool isOperative() { return operative; }
  // changes spot category to 'S' and deactivates snare when implement() is
  // called
  void implement(Spot& spot) {
    spot.setCategory('S');
    operative = false;
  }
};

#endif
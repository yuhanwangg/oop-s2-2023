#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <tuple>

#include "GameEntity.h"

class Ship : public GameEntity {
 protected:
 public:
  Ship(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'S';
  }
  void move(int dx, int dy) { position = std::make_tuple(dx, dy); }
};

#endif
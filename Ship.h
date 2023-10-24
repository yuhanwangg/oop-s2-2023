#include <iostream>

#include "GameEntity.h"

#ifndef SHIP_H
#define SHIP_H

class Ship : public GameEntity {
 protected:
 public:
  Ship(int x, int y) : GameEntity(x, y, 'S'){};
  Ship();
  void move(int dx, int dy) {  // setPosition(dx, dy);
    std::get<0>(position) = dx;
    std::get<1>(position) = dy;
  };
};

#endif
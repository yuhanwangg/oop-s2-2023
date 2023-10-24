#include <iostream>

#include "Explosion.h"
#include "GameEntity.h"
#ifndef MINE_H
#define MINE_H

class Mine : public GameEntity {
 protected:
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M'){};
  Explosion explode() {
    type = 'X';  // after explosion
    Explosion* e = new Explosion(std::get<0>(position), std::get<1>(position));
    return *e;
  }
};

#endif
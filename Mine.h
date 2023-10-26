#ifndef MINE_H
#define MINE_H
#include <iostream>
#include <tuple>

#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 protected:
 public:
  Mine(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'M';
  }

  Explosion explode() { type = 'M'; }
};

#endif
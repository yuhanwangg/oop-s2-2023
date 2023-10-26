#ifndef EXPLOSION_H
#define EXPLOSION_H

#include <iostream>

#include "Effect.h"

class Explosion : public Effect, public GameEntity {
 protected:
 public:
  Explosion(int x, int y) {
    position = std::make_tuple(x, y);
    type = 'E';
  }
  void apply(GameEntity& entity) {
    position = std::make_tuple(-1, -1);
    type = 'X';
  }
};

#endif
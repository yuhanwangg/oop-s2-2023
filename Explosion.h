#include "GameEntity.h"
#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <iostream>

#include "Effect.h"

class Explosion : public GameEntity, public Effect {
 protected:
 public:
  Explosion(int x, int y) {
    type = 'E';
    setPosition(x, y);
  }
  void apply(GameEntity& entity) {
    entity.setPosition(-1, -1);
    entity.setType('X');
  }
};

#endif
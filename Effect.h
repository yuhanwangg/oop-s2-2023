#ifndef EFFECT_H
#define EFFECT_H
#include <iostream>
#include <tuple>

#include "GameEntity.h"

class Effect {
 protected:
 public:
  Effect(){

  };

  virtual void apply(GameEntity& entity) = 0;
};

#endif
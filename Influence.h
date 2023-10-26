#ifndef INFLUENCE_H
#define INFLUENCE_H
#include <iostream>

#include "Spot.h"

class Influence {
 protected:
 public:
  virtual void implement(Spot& spot) = 0;
};

#endif
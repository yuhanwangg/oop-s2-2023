#ifndef FLEET_H
#define FLEET_H
#include <iostream>
using namespace std;

#include "Car.h"
#include "Ford.h"
#include "Tesla.h"

class Fleet {
 protected:
  Car** fleet;

 public:
  Fleet();
  Car** get_fleet();
};

#endif
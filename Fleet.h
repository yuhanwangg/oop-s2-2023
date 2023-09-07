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
  Tesla t1;
  Ford f1;
  Car c1;
  Ford f2;
  Tesla t2;

 public:
  Fleet();
  Car** get_fleet();
};

#endif
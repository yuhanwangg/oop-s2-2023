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
  Tesla* t1 = &Tesla('S', 10000);
  Ford* f1 = &Ford(1, 20000);
  Car* c1 = &Car(30000);
  Ford* f2 = &Ford(2, 40000);
  Tesla* t2 = &Tesla('T', 50000);

 public:
  Fleet();
  Car** get_fleet();
};

#endif
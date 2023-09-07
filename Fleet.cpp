#include "Fleet.h"

#include <iostream>

#include "Car.h"
#include "Ford.h"
#include "Tesla.h"
using namespace std;

Fleet::Fleet() {
  fleet = new Car*[5];
  fleet[1] = new Tesla[1];
  fleet[2] = new Ford[1];
  fleet[3] = new Car[1];
  fleet[4] = new Ford[1];
  fleet[5] = new Tesla[1];
  Tesla* t1 = &Tesla('S', 10000);
  Ford* f1 = &Ford(1, 20000);
  Car* c1 = &Car(30000);
  Ford* f2 = &Ford(2, 40000);
  Tesla* t2 = &Tesla('T', 50000);
  fleet[1] = t1;
  fleet[2] = f1;
  fleet[3] = c1;
  fleet[4] = f2;
  fleet[5] = t2;
};
Car** Fleet::get_fleet() { return fleet; };
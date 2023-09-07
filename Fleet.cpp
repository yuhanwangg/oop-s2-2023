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
  fleet[1] = &Tesla('S', 10000);
  fleet[2] = &Ford(1, 20000);
  fleet[2] = &Car(30000);
  fleet[2] = &Ford(2, 40000);
  fleet[2] = &Tesla('T', 50000)
};
Car** Fleet::get_fleet() { return fleet; };
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
  fleet[1] = t1;
  fleet[2] = f1;
  fleet[3] = c1;
  fleet[4] = f2;
  fleet[5] = t2;
};
Car** Fleet::get_fleet() { return fleet; };
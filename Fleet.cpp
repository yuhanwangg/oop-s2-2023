#include "Fleet.h"

#include <iostream>

#include "Car.h"
#include "Ford.h"
#include "Tesla.h"
using namespace std;

Fleet::Fleet() {
  t1 = Tesla('S', 10000);
  f1 = Ford(1, 20000);
  c1 = Car(30000);
  f2 = Ford(2, 40000);
  t2 = Tesla('T', 50000);
  fleet = new Car*[5];
  fleet[1] = new Tesla;
  fleet[2] = new Ford;
  fleet[3] = new Car;
  fleet[4] = new Ford;
  fleet[5] = new Tesla;
  fleet[1] = &t1;
  fleet[2] = &f1;
  fleet[3] = &c1;
  fleet[4] = &f2;
  fleet[5] = &t2;
};
Car** Fleet::get_fleet() { return fleet; };

Fleet::~Fleet() { delete[] fleet; };
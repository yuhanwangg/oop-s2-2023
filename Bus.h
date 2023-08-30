#ifndef BUS_H
#define BUS_H
#include <iostream>

#include "Vehicle.h"
using namespace std;
#include <string.h>

class Bus : public Vehicle {
 public:
  Bus();
  Bus(int ID);
  int getParkingDuration();
};

#endif
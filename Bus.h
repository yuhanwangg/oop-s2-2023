#ifndef BUS_H
#define BUS_H
#include <string.h>

#include <iostream>

#include "Vehicle.h"

class Bus : public Vehicle {
 public:
  Bus();
  Bus(int ID);
  int getParkingDuration();
};

#endif
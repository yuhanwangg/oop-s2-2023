#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string.h>

#include <iostream>

#include "Vehicle.h"

class Motorbike : public Vehicle {
 public:
  Motorbike();
  Motorbike(int ID);
  int getParkingDuration();
};

#endif
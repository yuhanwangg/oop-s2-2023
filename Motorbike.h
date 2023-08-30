#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <iostream>

#include "Vehicle.h"
using namespace std;
#include <string.h>

class Motorbike : public Vehicle {
 public:
  Motorbike();
  Motorbike(int ID);
  int getParkingDuration();
};

#endif
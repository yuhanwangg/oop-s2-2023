#ifndef CAR_H
#define CAR_H
#include <string.h>

#include <iostream>

#include "Vehicle.h"

class Car : public Vehicle {
 public:
  Car();
  Car(int ID);
  int getParkingDuration();
  //   ~Car();
};

#endif
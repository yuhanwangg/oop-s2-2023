#ifndef CAR_H
#define CAR_H
#include <iostream>

#include "Vehicle.h"
using namespace std;
#include <string.h>

#include <ctime>

class Car : public Vehicle {
 public:
  Car();
  Car(int ID);
  int getParkingDuration();
  //   ~Car();
};

#endif
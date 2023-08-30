#include "Motorbike.h"

#include <ctime>
#include <iostream>

int Motorbike::getParkingDuration() {
  int duration = (time(NULL) - timeofEntry) * 0.85;
  return duration;
}
Motorbike::Motorbike() {
  ID = 0;
  timeofEntry = time(0);
}

Motorbike::Motorbike(int ID) : Vehicle(ID) {
  timeofEntry = time(0);
  this->ID = ID;
}

// Car::~Car() {}

#include <string.h>
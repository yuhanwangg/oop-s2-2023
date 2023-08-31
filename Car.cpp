#include "Car.h"

#include <ctime>
#include <iostream>

int Car::getParkingDuration() {
  int duration = (time(NULL) - timeofEntry) * 0.9;
  return duration;
}
Car::Car() {
  ID = 0;
  timeofEntry = time(0);
}

Car::Car(int ID) {
  timeofEntry = time(0);
  this->ID = ID;
}

// Car::~Car() {}

#include <string.h>
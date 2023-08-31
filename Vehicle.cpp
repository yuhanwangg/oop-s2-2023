#include "Vehicle.h"

#include <string.h>

#include <chrono>
#include <iostream>

Vehicle::Vehicle(int ID) { this->ID = ID; };
Vehicle::Vehicle() {
  ID = 0;
  timeofEntry = time(0);  // this means time now
}
int Vehicle::getID() { return this->ID; };
Vehicle::~Vehicle(){};
int Vehicle::getParkingDuration() {
  int duration = (time(NULL) - timeofEntry);
  return duration;
}
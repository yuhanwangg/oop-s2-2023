#include "Vehicle.h"

#include <iostream>
using namespace std;
#include <string.h>

#include <chrono>

Vehicle::Vehicle(int ID) { this->ID = ID; };
Vehicle::Vehicle() {
  ID = 0;
  timeofEntry = time(0);  // this means time now
}
int Vehicle::getID() { return ID; };
Vehicle::~Vehicle(){};
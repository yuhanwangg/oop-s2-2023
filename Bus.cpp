#include "Bus.h"

#include <ctime>
#include <iostream>

using namespace std;

int Bus::getParkingDuration() {
  int duration = (time(NULL) - timeofEntry) * 0.85;
  return duration;
}
Bus::Bus() {
  ID = 0;
  timeofEntry = time(0);
}

Bus::Bus(int ID) : Vehicle(ID) {
  timeofEntry = time(0);
  this->ID = ID;
}

// Car::~Car() {}

#include <string.h>
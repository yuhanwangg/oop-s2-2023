#include "Bus.h"

#include <ctime>
#include <iostream>

int Bus::getParkingDuration() {
  int duration = (time(NULL) - timeofEntry) * 0.75;
  return duration;
}
Bus::Bus() {
  ID = 0;
  timeofEntry = time(0);
}

Bus::Bus(int ID) {
  timeofEntry = time(0);
  this->ID = ID;
}
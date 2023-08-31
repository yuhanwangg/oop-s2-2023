#ifndef VEHICLE_H
#define VEHICLE_H
#include <string.h>

#include <chrono>
#include <iostream>

class Vehicle {
 protected:
  time_t timeofEntry;
  int ID;

 public:
  Vehicle(int ID);
  Vehicle();
  int getID();
  virtual int getParkingDuration();
  ~Vehicle();
};

#endif
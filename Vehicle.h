#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
using namespace std;
#include <string.h>

#include <ctime>

class Vehicle {
 protected:
  time_t timeofEntry;
  int ID;

 public:
  Vehicle(int ID);
  Vehicle();
  int getID();
  ~Vehicle();
};

#endif
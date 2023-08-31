#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <string.h>

#include <iostream>

#include "Vehicle.h"

class ParkingLot {
 protected:
  int max_capacity;
  int count;

 public:
  Vehicle* vehicles;
  ParkingLot();
  ParkingLot(int max_capacity);
  int getCount();
  void parkVehicle(Vehicle* vehicle);
  void unparkVehicle(int ID);
  void printVehicle();

  ~ParkingLot();
};

#endif
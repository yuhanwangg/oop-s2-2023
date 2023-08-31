
#include "ParkingLot.h"

#include <string.h>

#include <iostream>

#include "Vehicle.h"

ParkingLot::ParkingLot() {
  max_capacity = 0;
  count = 0;
};
ParkingLot::ParkingLot(int max_capacity) {
  this->max_capacity = max_capacity;
  vehicles = new Vehicle(max_capacity);
  count = 0;
};
int ParkingLot::getCount() { return count; };
void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (count <= max_capacity) {
    vehicles[count] = *vehicle;
    // std::cout << "Parking successful" << std::endl;
    count++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
};
void ParkingLot::unparkVehicle(int ID) {
  for (int i = 0; i < count; i++) {
    if (vehicles[i].getID() == ID) {
      vehicles[i] = NULL;
      vehicles[0] = vehicles[1];
      for (int i = 0; i < count; i++) {
        vehicles[i - 1] = vehicles[i];
      }
    } else {
      std::cout << "Vehicle not in lot" << std::endl;
    }
  }
};
ParkingLot::~ParkingLot(){

};
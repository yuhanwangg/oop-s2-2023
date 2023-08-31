
#include "ParkingLot.h"

#include <string.h>

#include <iostream>

#include "Vehicle.h"

ParkingLot::ParkingLot() {
  max_capacity = 0;
  count = 0;
  max_capacity = 0;
};
ParkingLot::ParkingLot(int _max_capacity) {
  max_capacity = _max_capacity;
  vehicles[max_capacity] = new Vehicle(max_capacity);
  count = 0;
};
int ParkingLot::getCount() { return count; };

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (count < max_capacity) {
    vehicles[count] = vehicle;
    count++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
};

void ParkingLot::unparkVehicle(int _ID) {
  bool unparked = false;
  for (int i = 0; i < max_capacity; i++) {
    if (vehicles[i]->getID() == _ID) {
      // vehicles[i] = Vehicle();
      // std::cout << vehicles[i]->getID() << std::endl;
      delete vehicles[i];
      count--;
      unparked = true;
    }
  }
  if (unparked == false) {
    std::cout << "Vehicle not in the lot" << std::endl;
  }
};

void ParkingLot::printVehicle() {
  for (int i = 0; i < count; i++) {
    std::cout << vehicles[i]->getID() << " ";
  }
}

ParkingLot::~ParkingLot(){

};
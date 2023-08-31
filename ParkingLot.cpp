
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
  if (count + 1 <= max_capacity) {
    vehicles[count] = *vehicle;
    std::cout << "Parking successful" << std::endl;
    count++;
  } else {
    std::cout << "The lot is full" << std::endl;
  }
};
void ParkingLot::unparkVehicle(int ID) {
  bool unparked = false;
  for (int i = 0; i < count; i++) {
    if (vehicles[i].getID() == ID) {
      unparked = true;
      for (int j = i; j + 1 < count; j++) {
        vehicles[j] = vehicles[j + 1];
      }
      vehicles[count] = NULL;
      count--;
    }
    if (unparked == false) {
      std::cout << "Vehicle not in lot" << std::endl;
    }
  }
};

void ParkingLot::printVehicle() {
  for (int i = 0; i < count; i++) {
    std::cout << vehicles[i].getID() << std::endl;
  }
}

ParkingLot::~ParkingLot(){

};
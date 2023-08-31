
#include "ParkingLot.h"

#include <string.h>

#include <iostream>

#include "Vehicle.h"

ParkingLot::ParkingLot() {
  max_capacity = 0;
  count = 0;
};
ParkingLot::ParkingLot(int _max_capacity) {
  max_capacity = _max_capacity;
  vehicles = new Vehicle(max_capacity);
  count = 0;
};
int ParkingLot::getCount() { return count; };

void ParkingLot::parkVehicle(Vehicle* vehicle) {
  if (count < max_capacity) {
    vehicles[count] = *vehicle;
    count++;
  } else {
    std::cout << "The lot is full";
  }
};
void ParkingLot::unparkVehicle(int ID) {
  bool unparked = false;
  for (int i = 0; i < count; i++) {
    if (vehicles[i].getID() == ID) {
      // for (int j = i; j < count - 1; j++) {
      //   vehicles[j] = vehicles[j + 1];
      // }
      vehicles[i] = Vehicle();
      count--;
      unparked = true;
    }
  }
  if (unparked == false) {
    std::cout << "Vehicle not in the lot";
  }
};

void ParkingLot::printVehicle() {
  for (int i = 0; i < count; i++) {
    std::cout << vehicles[i].getID() << " ";
  }
}

ParkingLot::~ParkingLot(){

};
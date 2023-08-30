
#include "ParkingLot.h"

#include <iostream>

#include "Vehicle.h"
using namespace std;
#include <string.h>

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
    count++;
  } else {
    cout << "The lot is full" << endl;
  }
};
void ParkingLot::unparkVehicle(int ID) {
  for (int i = 0; i < count; i++) {
    if (vehicles[i].getID() == ID) {
      vehicles[i] = NULL;
    } else {
      cout << "Vehicle not in lot" << endl;
    }
  }
};
ParkingLot::~ParkingLot(){

};
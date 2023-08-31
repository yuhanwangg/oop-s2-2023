#include <iostream>
#include <string>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main(void) {
  // number of vehicles

  std::string vehicleType;
  ParkingLot *lot = new ParkingLot(10);

  bool full = false;
  int count = 0;

  while (full == false) {
    std::cout << "What vehicle type?" << std::endl;
    std::cin >> vehicleType;

    if (vehicleType == "c" || vehicleType == "C") {
      count++;
      Car *newVehicle = new Car(count);
      lot->parkVehicle(newVehicle);
      std::cout << "Car parked";
    } else if (vehicleType == "b" || vehicleType == "B") {
      count++;
      Bus *newVehicle = new Bus(count);
      lot->parkVehicle(newVehicle);
      std::cout << "Bus parked";
    } else if (vehicleType == "m" || vehicleType == "M") {
      count++;
      Motorbike *newVehicle = new Motorbike(count);
      lot->parkVehicle(newVehicle);
      std::cout << "Motorbike parked";
    }
    if (lot->getCount() == 10) {
      full = true;
    }
  }
  int unparkID = 0;

  lot->printVehicle();

  std::cout << "Enter an ID to remove" << std::endl;
  std::cin >> unparkID;
  lot->unparkVehicle(unparkID);
}
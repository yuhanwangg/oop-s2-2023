#include <iostream>
#include <string>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main() {
  std::string vehicleType;
  int num = 0;
  std::cout << "Enter the number of vehicles in parking lot: ";
  std::cin >> num;
  ParkingLot *lot = new ParkingLot(10);

  int count = 0;

  bool full = false;

  while (full != true) {
    std::cout << "What type of vehicle?" << std::endl;
    std::cin >> vehicleType;

    if (vehicleType == "c" || vehicleType == "C") {
      Car *newVehicle = new Car(count);
      lot->parkVehicle(newVehicle);
      count++;
      std::cout << "Car parked";
    } else if (vehicleType == "b" || vehicleType == "B") {
      Bus newVehicle = Bus(count);
      lot->parkVehicle(&newVehicle);
      count++;
      std::cout << "Bus parked";
    } else if (vehicleType == "m" || vehicleType == "M") {
      Motorbike *newVehicle = new Motorbike(count);
      lot->parkVehicle(newVehicle);
      count++;
      std::cout << "Motorbike parked";
    }
    if (lot->getCount() == 10) {
      full = true;
    }
  }
  std::cout << "\n";
  std::cout << lot->countOverstayingVehicles(15) << std::endl;
}
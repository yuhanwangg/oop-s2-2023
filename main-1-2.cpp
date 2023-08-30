#include <iostream>
using namespace std;

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main(void) {
  // number of vehicles
  ParkingLot parking(5);
  Vehicle v(2934);
  Vehicle* v1 = &v;
  Vehicle v2(14356);
  Vehicle v3(90680);
  Vehicle v4(27938);
  Vehicle v5(38902);
  Vehicle v6(32859);
  parking.parkVehicle(v1);
  /*parking.parkVehicle(v2);
  parking.parkVehicle(v3);
  parking.getCount();
  parking.parkVehicle(v4);
  parking.parkVehicle(v5);
  parking.parkVehicle(v6);
  parking.unparkVehicle(38902);*/
}
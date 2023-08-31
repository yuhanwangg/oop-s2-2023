#include <iostream>
using namespace std;

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main(void) {
  // number of vehicles

  int nCars = 6;
  int nBuses = 2;
  int nMotorbikes = 2;
  int sumVehicles = nCars + nBuses + nMotorbikes;
  ParkingLot parking = ParkingLot(sumVehicles);
  // Vehicle v(2934);
  // Vehicle* v1 = &v;
  // Vehicle v22(38204);
  // Vehicle* v2 = &v22;
  // Vehicle v2(14356);
  // Vehicle v3(90680);
  // Vehicle v4(27938);
  // Vehicle v5(38902);
  // Vehicle v6(32859);
  // parking.parkVehicle(v1);
  // parking.parkVehicle(v2);

  int ID_count = 0;
  for (int i = 0; i < nCars; i++) {
    parking.parkVehicle(new Car(ID_count++));
  }
  for (int i = 0; i < nBuses; i++) {
    parking.parkVehicle(new Bus(ID_count++));
  }

  cout << parking.getCount() << "\n";
  parking.unparkVehicle(1);
  parking.unparkVehicle(3);
  cout << parking.getCount() << "\n";
  parking.printVehicle();
  cout << endl;

  /*parking.parkVehicle(v2);
  parking.parkVehicle(v3);
  parking.getCount();
  parking.parkVehicle(v4);
  parking.parkVehicle(v5);
  parking.parkVehicle(v6);
  parking.unparkVehicle(38902);*/
}
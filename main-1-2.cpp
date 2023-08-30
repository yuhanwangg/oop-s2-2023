#include <iostream>
using namespace std;
#include <chrono>

#include "Bus.h"
#include "Car.h"
#include "Motorbike.h"
#include "ParkingLot.h"
#include "Vehicle.h"

int main(void) {
  // number of vehicles
  // numebr of types of vehicles
  int no_moto = 0, no_car = 0, no_bus = 0;
  cout << "Enter number of motorcycles: " << endl;
  cin >> no_moto;
  Motorbike* motor_line = new Motorbike(no_moto);
  cout << "car: " << endl;
  cin >> no_car;
  Car* car_line = new Car(no_car);
  cout << "bus: " << endl;
  cin >> no_bus;
  Bus* bus_line = new Bus(no_bus);
}
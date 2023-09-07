#include <iostream>

#include "Car.h"
#include "Fleet.h"
#include "Ford.h"
#include "Tesla.h"
using namespace std;

int main() {
  Fleet fleet;
  Car** fleet_of_Cars = new Car*[5];
  fleet_of_Cars = fleet.get_fleet();
  for (int i = 0; i < 5; i++) {
    cout << fleet_of_Cars[i];
  }
}
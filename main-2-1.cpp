#include <iostream>

#include "Car.h"
#include "Tesla.h"
using namespace std;

int main() {
  Tesla tesla('Q', 80000);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
  tesla.drive(151);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
  tesla.chargeBattery(10);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
}
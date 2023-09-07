#include <iostream>

#include "Car.h"
#include "Tesla.h"
using namespace std;

int main() {
  Tesla tesla('Q', 80000);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
  tesla.set_batteryPercentage(80);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
  tesla.chargeBattery(20);
  cout << "Battery of tesla: " << tesla.get_batteryPercentage() << "\n";
}
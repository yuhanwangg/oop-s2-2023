#include <iostream>

#include "Appliance.h"
using namespace std;

int main() {
  Appliance a1(4);
  cout << "The power rating is: " << a1.getPowerRating();
  cout << "\n";
  cout << "The power consumption is: " << a1.getPowerConsumption();
  cout << "\n";
  a1.turnOn();
  cout << "Is the appliance on or off? " << a1.getOnOrOff() << endl;
}
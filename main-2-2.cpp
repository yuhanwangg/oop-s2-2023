#include <iostream>
using namespace std;

#include "Appliance.h"
#include "TV.h"

int main() {
  TV tv(10, 800);
  cout << "Screen size of TV is: " << tv.getScreenSize();
  cout << "\n";
  cout << "Power rating: " << tv.getPowerRating();
  cout << "\n";
  cout << "Is it on? " << tv.getOnOrOff();
  cout << "\n";
  tv.turnOn();
  cout << "Is it on? " << tv.getOnOrOff();
  cout << "\n";
  cout << "What is the power consumption? " << tv.getPowerConsumption();
  cout << "\n";
}
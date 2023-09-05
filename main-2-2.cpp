#include <iostream>
using namespace std;

#include "Appliance.h"
#include "TV.h"

int main() {
  TV tv(10, 800);
  cout << "Screen size of TV is: " << tv.get_ScreenSize();
  cout << "\n";
  cout << "Power rating: " << tv.get_PowerRating();
  cout << "\n";
  cout << "Is it on? " << tv.get_isOn();
  cout << "\n";
  tv.turnOn();
  cout << "Is it on? " << tv.get_isOn();
  cout << "\n";
  cout << "What is the power consumption? " << tv.get_PowerConsumption();
  cout << "\n";
}
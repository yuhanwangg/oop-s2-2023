#include "TV.h"

#include <iostream>

#include "Appliance.h"

using namespace std;

TV::TV() {
  screenSize = 0;
  powerConsumption = 0;
};
TV::TV(int powerRating, double screenSize) {
  this->powerRating = powerRating;
  this->screenSize = screenSize;
};
void TV::setScreenSize(double screenSize) { this->screenSize = screenSize; };
double TV::get_ScreenSize() { return screenSize; };

double TV::get_PowerConsumption() {
  powerConsumption = powerRating * (screenSize / 10);
  return powerConsumption;
};
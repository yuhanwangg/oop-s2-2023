#include <iostream>
using namespace std;
#include "Appliance.h"
#include "Fridge.h"

Fridge::Fridge() {
  volume = 0;
  powerConsumption = 0;
};
Fridge::Fridge(int powerRating, double volume) {
  this->powerRating = powerRating;
  this->volume = volume;
};
void Fridge::setVolume(double volume) { this->volume = volume; };
double Fridge::get_Volume() { return volume; };
double Fridge::get_PowerConsumption() {
  powerConsumption = powerRating * 24 * (volume / 100);
  return powerConsumption;
};
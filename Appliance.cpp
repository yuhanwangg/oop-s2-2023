#include "Appliance.h"

#include <iostream>
using namespace std;

Appliance::Appliance() {
  powerRating = 0;
  isOn = false;
};
Appliance::Appliance(int powerRating) { this->powerRating = powerRating; };

void Appliance::turnOn() { isOn = true; };
void Appliance::turnOff() { isOn = false; };
double Appliance::get_PowerConsumption() { return 0; };

int Appliance::get_PowerRating() { return powerRating; }
bool Appliance::get_isOn() { return isOn; };

void Appliance::setPowerRating(int prating) { powerRating = prating; }
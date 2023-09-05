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
double Appliance::getPowerConsumption() { return 0; };

int Appliance::getPowerRating() { return powerRating; }
bool Appliance::getOnOrOff() { return isOn; };

void Appliance::setPowerRating(int prating) { powerRating = prating; }
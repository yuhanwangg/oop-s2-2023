#include "House.h"

#include <iostream>

#include "Appliance.h"
using namespace std;

House::House() {
  totalPowerConsumption = 0;
  numAppliances = 0;
  number = 0;
  appliances = new Appliance*[numAppliances];
};
House::House(int numAppliances) {
  this->numAppliances = numAppliances;
  appliances = new Appliance*[numAppliances];
  number = 0;
};
bool House::addAppliance(Appliance* appliance) {
  if (number < numAppliances) {
    appliances[number] = appliance;
    number++;
    return true;
  } else {
    return false;
  }
};

double House::getTotalPowerConsumption() {
  for (int i = 0; i < number; i++) {
    totalPowerConsumption =
        totalPowerConsumption + appliances[i]->getPowerConsumption();
  }  // ALWAYS REMEMBER TO POINT INSTEEAD OF A DOT!!!
  return totalPowerConsumption;
};

int House::getnumAppliances() { return numAppliances; };
void House::setnumAppliances(int appliancenum) {
  numAppliances = appliancenum;
};

House::~House() { delete[] appliances; };
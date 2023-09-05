#ifndef HOUSE_H
#define HOUSE_H
#include <iostream>
using namespace std;
#include "Appliance.h"

class House {
 private:
  int numAppliances;
  Appliance** appliances;
  int number;
  double totalPowerConsumption;

 public:
  House();
  House(int numAppliances);
  bool addAppliance(Appliance* appliance);

  double getTotalPowerConsumption();
  int getnumAppliances();
  void setnumAppliances(int appliancenum);
  ~House();
};

#endif
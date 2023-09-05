#ifndef TV_H
#define TV_H
#include <iostream>

#include "Appliance.h"
using namespace std;

class TV : public Appliance {
 private:
  double screenSize;
  double powerConsumption;

 public:
  TV();
  TV(int powerRating, double screenSize);
  void setScreenSize(double screenSize);
  double getScreenSize();

  double getPowerConsumption();
};

#endif
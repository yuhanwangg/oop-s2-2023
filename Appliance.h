#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>
using namespace std;

#include <string.h>

class Appliance {
 protected:
  int powerRating;
  bool isOn;

 public:
  Appliance();
  Appliance(int powerRating);

  void turnOn();
  void turnOff();
  virtual double get_PowerConsumption();
  int get_PowerRating();
  bool get_isOn();

  void setPowerRating(int prating);
};

#endif
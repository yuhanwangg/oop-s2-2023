#ifndef TESLA_H
#define TESLA_H
#include <iostream>

#include "Car.h"
using namespace std;

class Tesla : public Car {
 protected:
  char model;
  float batteryPercentage;

 public:
  Tesla();
  Tesla(char model, int price);
  void chargeBattery(int mins);
  void drive(int kms);
  void set_model(char model);
  char get_model();
  void set_batteryPercentage(float batt_percent);
  float get_batteryPercentage();
};

#endif
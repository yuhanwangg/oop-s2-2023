#include "Tesla.h"

#include <iostream>

#include "Car.h"
using namespace std;

Tesla::Tesla() {
  model = ' ';
  batteryPercentage = 0;
};
Tesla::Tesla(char model, int price) {
  this->model = model;
  this->price = price;
  batteryPercentage = 0;
};
void Tesla::chargeBattery(int mins) {
  batteryPercentage = batteryPercentage + 0.5 * mins;
  if (batteryPercentage > 100) {
    batteryPercentage = 100;
  }
};
void Tesla::drive(int kms) {
  batteryPercentage = batteryPercentage - (kms / 5);
  if (batteryPercentage < 0) {
    emissions = emissions + 74 * 500;
  } else {
    emissions = emissions + 74 * kms;
  }
};
void Tesla::set_model(char model) { this->model = model; };
char Tesla::get_model() { return model; };
void Tesla::set_batteryPercentage(int batt_percent) {
  if (batt_percent < 0) {
    batteryPercentage = 0;
  }
  if (batt_percent > 100) {
    batteryPercentage = 100;
  }
  //   } else {
  //     batteryPercentage = batt_percent;
  //   }
  if (batt_percent < 101 && batt_percent > -1) {
    batteryPercentage = batt_percent;
  }
};
float Tesla::get_batteryPercentage() { return batteryPercentage; };
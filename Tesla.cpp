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
  batteryPercentage = 100;
};
void Tesla::chargeBattery(int mins) {
  float temp = batteryPercentage + (0.5 * mins);
  if (temp < 101 && temp > -1) {
    batteryPercentage = temp;
  }
  if (temp > 100) {
    batteryPercentage = 100;
  }
  if (temp < 0) {
    batteryPercentage = 0;
  }
};
void Tesla::drive(int kms) {
  float temp_drive = batteryPercentage - (kms / 5);
  if (temp_drive <= 0) {
    emissions = emissions + 74 * batteryPercentage * 5;
    batteryPercentage = 0;
  } else {
    emissions = emissions + 74 * kms;
    batteryPercentage = batteryPercentage - (kms / 5);
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
  if (batt_percent < 101 && batt_percent > -1) {
    batteryPercentage = batt_percent;
  }
};
float Tesla::get_batteryPercentage() { return batteryPercentage; };
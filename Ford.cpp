#include "Ford.h"

#include <iostream>

#include "Car.h"
using namespace std;

Ford::Ford() {
  badgeNumber = 0;
  litresOfFuel = 60;
};
Ford::Ford(int badgeNumber, int price) {
  litresOfFuel = 60;
  this->badgeNumber = badgeNumber;
  this->price = price;
};
void Ford::refuel(int litres) {
  float temp = litresOfFuel + litres;
  if (temp < 61 && temp > -1) {
    litresOfFuel = temp;
  }
  if (temp > 60) {
    litresOfFuel = 60;
  }
  if (temp < 0) {
    litresOfFuel = 0;
  }
};
void Ford::drive(int kms) {
  float temp_kms = kms;
  float temp_drive_ford = litresOfFuel - temp_kms;
  if (temp_drive_ford <= 0) {
    emissions = emissions + 234 * litresOfFuel * 5;
    litresOfFuel = 0;
  } else {
    emissions = emissions + 234 * kms;
    litresOfFuel = temp_drive_ford;
  }
};
void Ford::set_badgeNumber(int badgeNumber) {
  this->badgeNumber = badgeNumber;
};
int Ford::get_badgeNumber() { return badgeNumber; };

float Ford::get_litresOfFuel() { return litresOfFuel; };
void Ford::set_litresOfFuel(float fuel) {
  if (fuel < 0) {
    litresOfFuel = 0;
  }
  if (fuel > 60) {
    litresOfFuel = 100;
  }
  if (fuel < 61 && fuel > -1) {
    litresOfFuel = fuel;
  }
};
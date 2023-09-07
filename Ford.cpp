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
  litresOfFuel = litresOfFuel + litres;
  if (litresOfFuel > 60) {
    litresOfFuel = 60;
  }
  if (litresOfFuel < 60) {
    litresOfFuel = 0;
  }
};
void Ford::drive(int kms) {
  litresOfFuel = litresOfFuel - kms;
  if (litresOfFuel <= 0) {
    emissions = emissions + 234 * 60 * 5;
  } else {
    emissions = emissions + 234 * kms;
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
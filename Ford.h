#ifndef FORD_H
#define FORD_H
#include <iostream>

#include "Car.h"
using namespace std;

class Ford : public Car {
 protected:
  int badgeNumber;
  float litresOfFuel;

 public:
  Ford();
  Ford(int badgeNumber, int price);
  void refuel(int litres);
  void drive(int kms);
  void set_badgeNumber(int badgeNumber);
  int get_badgeNumber();
};

#endif
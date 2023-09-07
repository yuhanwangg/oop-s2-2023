#include "Car.h"

#include <iostream>
using namespace std;

Car::Car() {
  price = 0;
  emissions = 0;
};
Car::Car(int price) { this->price = price; };
void Car::drive(int kms) { emissions = 20 * kms; };

void Car::set_price(int pri) { price = pri; };
int Car::get_price() { return price; };
void Car::set_emissions(int emi) { emissions = emi; };
int Car::get_emissions() { return emissions; };
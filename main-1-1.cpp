#include <iostream>

#include "Car.h"
using namespace std;

int main() {
  Car car(4000);
  cout << "Car price is: " << car.get_price();
  cout << "Car emissions is: " << car.get_emissions();

  car.drive(345);
  cout << "Car emissions: (updated) " << car.get_emissions();

  car.set_price(8000);
  cout << "Car price is: " << car.get_price() << endl;
}
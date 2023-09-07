#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;

class Car {
 protected:
  int price;
  int emissions;

 public:
  Car();
  Car(int price);
  void virtual drive(int kms);

  void set_price(int pri);
  int get_price();
  void set_emissions(int emi);
  int get_emissions();
};

#endif
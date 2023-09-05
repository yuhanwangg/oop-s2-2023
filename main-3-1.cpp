#include <iostream>

#include "Appliance.h"
#include "Fridge.h"
#include "House.h"
#include "TV.h"
using namespace std;

int main() {
  House h1(3);
  Fridge f1(10, 100);
  Fridge f2(9, 390);
  int fridge_count = 2;
  Fridge** fridges = new Fridge*[fridge_count];
  fridges[0] = &f1;
  fridges[1] = &f2;

  int tv_count = 2;
  TV** tvs = new TV*[tv_count];
  TV tv1(9, 900);
  TV tv2(10, 932);
  tvs[0] = &tv1;
  tvs[1] = &tv2;

  cout << h1.addAppliance(fridges[0]);
  cout << h1.addAppliance(fridges[1]);
  cout << h1.addAppliance(tvs[0]);
  cout << h1.addAppliance(tvs[1]);
  cout << "Total power consumption: " << h1.getTotalPowerConsumption();
}
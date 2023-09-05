#include <iostream>
using namespace std;
#include "Appliance.h"
#include "Fridge.h"

int main() {
  Fridge f1(34, 1000);
  cout << "Power rating: " << f1.getPowerRating()
       << "Volume: " << f1.getVolume();
  f1.setPowerRating(8);
  cout << "\n";
  cout << "Power rating: " << f1.getPowerRating()
       << "Volume: " << f1.getVolume();
  cout << "\n";
  cout << "Power consumption: " << f1.getPowerConsumption();
  cout << "\n";
  f1.setPowerRating(500);
  cout << "Power consumption: " << f1.getPowerConsumption();
  cout << "\n";
}
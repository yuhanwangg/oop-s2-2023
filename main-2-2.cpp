#include <iostream>

#include "Car.h"
#include "Ford.h"
using namespace std;

int main() {
  Ford ford(123, 10000);
  cout << "Ford price: " << ford.get_price() << "\n";
  ford.drive(61);
  cout << "Ford emissions from 61km: " << ford.get_emissions() << "\n";
}
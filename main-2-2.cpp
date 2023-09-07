#include <iostream>

#include "Car.h"
#include "Ford.h"
using namespace std;

int main() {
  Ford ford(123, 10000);
  ford.drive(61);
  cout << "Ford fuel from 61km: " << ford.get_litresOfFuel() << "\n";
}
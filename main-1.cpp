#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Spot.h"

int main() {
  Spot spot = Spot(5, 5, 'Y');
  Spot spot2 = Spot(10, 10, 'Z');

  std::cout << "difference between spot and spot2: "
            << Assists::evaluateDistance(spot.getLoc(), spot2.getLoc());
}
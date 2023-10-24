#ifndef UTILS_H
#define UTILS_H
#include <math.h>

#include <cstdlib>
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"

class Utils {
 protected:
 public:
  Utils();
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    // create random between range of gridWidth and gridHeight
    std::tuple<int, int> temp;
    int x =
        rand() % gridWidth;  // generates range between 0 to gridWidth & height
    int y = rand() % gridHeight;
    temp = std::make_tuple(x, y);
    return temp;
  }
  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    double x1 = std::get<0>(pos1);  // gets the pos1 x
    double y1 = std::get<1>(pos1);  // gets pos2 x
    double x2 = std::get<0>(pos2);
    double y2 = std::get<1>(pos2);
    double sum1 = x2 - x1;
    double sum2 = y2 - y1;

    double distance = sqrt(pow(sum1, 2) + pow(sum2, 2));
    distance = abs(distance);
    return distance;
  }
  ~Utils();
};

#endif
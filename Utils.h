#ifndef UTILS_H
#define UTILS_H

#include <cmath>
#include <iostream>
#include <tuple>

class Utils {
 protected:
 public:
  std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridHeight;
    std::tuple<int, int> tempArray = std::make_tuple(x, y);
    return tempArray;
  }
  double calculateDistance(std::tuple<int, int> pos1,
                           std::tuple<int, int> pos2) {
    double distance;
    double sum1 = std::get<0>(pos1) - std::get<0>(pos2);
    double sum2 = std::get<1>(pos1) - std::get<0>(pos2);
    distance = sqrt(pow(sum1, 2) + pow(sum2, 2));
    distance = abs(distance);

    return distance;
  }
};

#endif
#ifndef ASSISTS_H
#define ASSISTS_H
#include <cmath>
#include <iostream>
#include <tuple>

class Assists {
 protected:
 public:
  static std::tuple<int, int> createRandomLoc(int matrixWidth,
                                              int matrixHeight) {
    int x = rand() % matrixWidth;
    int y = rand() % matrixHeight;
    std::tuple<int, int> temp;
    temp = std::make_tuple(x, y);
    return temp;
  }
  static double evaluateDistance(std::tuple<int, int> loc1,
                                 std::tuple<int, int> loc2) {
    double distance = 0;
    double sum1 = std::get<0>(loc1) - std::get<0>(loc2);
    double sum2 = std::get<1>(loc1) - std::get<1>(loc2);

    distance = sqrt(pow(sum1, 2) + pow(sum2, 2));
    return distance;
  }
};

#endif
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  // testing entity and utils
  std::tuple<int, int> test1 = Utils::generateRandomPos(50, 50);
  std::cout << "test1 x: " << std::get<0>(test1);
  std::cout << "test1 y: " << std::get<1>(test1);
  return 0;
}
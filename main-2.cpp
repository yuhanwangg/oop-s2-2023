#include <iostream>
#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

int main() {
  Ship ship(50, 50);
  Mine mine(1, 2);
  std::cout << "ship x: " << std::get<0>(ship.getPos());
  std::cout << "ship y: " << std::get<1>(ship.getPos());
  ship.move(20, 20);
  std::cout << "ship x: " << std::get<0>(ship.getPos());
  std::cout << "ship y: " << std::get<1>(ship.getPos());
}

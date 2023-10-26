#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <tuple>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

class Game {
 protected:
  std::vector<GameEntity*> entities;

 public:
  std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                                    int gridHeight) {
    for (int i = 0; i < numShips; i++) {
      std::tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship = new Ship(std::get<0>(position), std::get<1>(position));
      entities.push_back(ship);
    }
    for (int i = 0; i < numMines; i++) {
      std::tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine = new Mine(std::get<0>(position), std::get<1>(position));
      entities.push_back(mine);
    }
  }

  void gameloop(int maxIterations, double mineDistanceThreshold) {}

  // setters and getters
  std::vector<GameEntity*> get_entities() { return entities; }
  void set_entities(std::vector<GameEntity*> entities) {
    this->entities = entities;
  }
};

#endif
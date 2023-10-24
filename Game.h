#ifndef GAME_H
#define GAME_H
#include <cstdlib>
#include <iostream>
#include <tuple>
#include <vector>

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
    // add the number of ships
    for (int i = 0; i < numShips; i++) {
      std::tuple<int, int> tempPos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship = new Ship(std::get<0>(tempPos), std::get<1>(tempPos));
      entities.push_back(ship);
    }

    // create the number of mines
    for (int i = 0; i < numMines; i++) {
      std::tuple<int, int> tempPos =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine = new Mine(std::get<0>(tempPos), std::get<1>(tempPos));
      entities.push_back(mine);
    }
    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int iterations = 0;
    int s = 0;  // ship index
    int m = 0;  // mine index
    double tempSum1 = 0;
    double tempSum2 = 0;
    double tempDistance = 0;
    int shipsDestroyed = 0;
    bool isDestroyed = false;

    while (iterations < maxIterations) {
      s = 0;
      m = 0;
      std::tuple<int, int> tempShipPos;
      std::tuple<int, int> tempMinePos;
      tempSum1 = 0;
      tempSum2 = 0;
      tempDistance = 0;
      isDestroyed = false;
      if (entities[s]->getType() == 'S') {
        Ship* ship = dynamic_cast<Ship*>(
            entities[s]);  // only need to use dynamic cast if you're dealing
                           // with pointers, which we are
        // std::tuple<int, int> tempPos = std::make_tuple(1, 0);
        ship->move(1, 0);
        tempShipPos = ship->getPos();

        if (entities[m]->getType() == 'M') {
          Mine* mine = dynamic_cast<Mine*>(entities[m]);  // dynamic casting
          tempMinePos = mine->getPos();

          // distance between mine and ship calculate
          tempDistance = Utils::calculateDistance(tempShipPos, tempMinePos);

          if (tempDistance < mineDistanceThreshold) {
            // checking if within threshold;
            Explosion explosion = mine->explode();
            GameEntity* gm = dynamic_cast<GameEntity*>(ship);  // replacing
            explosion.apply(*gm);
            std::cout << "ship exploded";

            shipsDestroyed++;
            isDestroyed = true;
          }
        } else {
          m++;
        }

        if (isDestroyed == true) {
          entities.erase(entities.begin() + s);
          entities.erase(entities.begin() + m);
          break;
        } else {
          s++;
        }
      }
      iterations++;
    }
  }

  // setters and getters
  std::vector<GameEntity*> get_entities() { return entities; };
  void set_entities(std::vector<GameEntity*> entities) {
    this->entities = entities;
  }
};

#endif
#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <tuple>
#include <vector>

#include "Effect.h"
#include "Explosion.h"
#include "GameEntity.h"
#include "Mine.h"
#include "Ship.h"
#include "Utils.h"

using namespace std;

class Game {
 private:
  vector<GameEntity*> entities;
  vector<Ship*> shipEntities;
  vector<Mine*> mineEntities;
  int numShips = 0;
  int numMines = 0;

 public:
  Game(){};

  vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth,
                               int gridHeight) {
    this->numShips = numShips;
    this->numMines = numMines;

    for (int i = 0; i < numShips; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship = new Ship(std::get<0>(position), std::get<1>(position));
      entities.push_back(ship);
      shipEntities.push_back(ship);
    }

    // filling up vecotr with mine entities
    for (int i = 0; i < numMines; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine = new Mine(std::get<0>(position), std::get<1>(position));
      entities.push_back(mine);
      mineEntities.push_back(mine);
    }

    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    int shipsDestroyed = 0;
    int iterations = 0;
    bool isDestroyed = false;

    // moving all ships
    while (iterations < maxIterations) {
      for (auto shipIt = shipEntities.begin(); shipIt != shipEntities.end();) {
        isDestroyed = false;

        (*shipIt)->move(1, 0);

        for (auto mineIt = mineEntities.begin();
             mineIt != mineEntities.end();) {
          if (Utils::calculateDistance((*shipIt)->getPos(),
                                       (*mineIt)->getPos()) <=
              mineDistanceThreshold) {
            Explosion explosion = (*mineIt)->explode();
            GameEntity* gm = dynamic_cast<GameEntity*>(*shipIt);
            explosion.apply(*gm);

            shipsDestroyed++;

            isDestroyed = true;
            shipIt = shipEntities.erase(shipIt);
            mineIt = mineEntities.erase(mineIt);

            break;
          } else {
            ++mineIt;
          }
        }
        if (isDestroyed == false) {
          shipIt++;
        }
      }
      iterations++;
    }

    return;
  }

  // getters and setters
  vector<GameEntity*> get_entities() { return entities; }

  void set_entities(GameEntity* entity) {
    entities.push_back(entity);
    return;
  }

  //   ~Game() {
  //     for (int i = 0; i < numShips + numMines; i++) {
  //       delete (entities[i]);
  //       entities.clear();
  //       shipEntities.clear();
  //       mineEntities.clear();
  //     }
  //   }
};
#endif
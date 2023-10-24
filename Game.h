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
    // cout << "The original number of ships are" << numShips << endl;
    // cout << endl;
    // cout << endl;
    // cout << endl;
    // filling up vector with ship entities
    for (int i = 0; i < numShips; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Ship* ship = new Ship(std::get<0>(position), std::get<1>(position));
      // cout << "Generated ship positions: " << get<0>(position) << ", " <<
      // get<1>(position) << endl; cout << "Character type: " << ship->getType()
      // << endl;

      // cout << "Position of ship object" << ship << endl;
      entities.push_back(ship);
      shipEntities.push_back(ship);
    }

    // filling up vecotr with mine entities
    for (int i = 0; i < numMines; i++) {
      tuple<int, int> position =
          Utils::generateRandomPos(gridWidth, gridHeight);
      Mine* mine = new Mine(std::get<0>(position), std::get<1>(position));
      // cout << "Generated mine positions: " << get<0>(position) << ", " <<
      // get<1>(position) << endl;
      entities.push_back(mine);
      mineEntities.push_back(mine);
    }

    return entities;
  }

  void gameLoop(int maxIterations, double mineDistanceThreshold) {
    // cout << "the new original number of ships are " << numShips << endl;
    // cout << endl;
    // cout << endl;
    int shipsDestroyed = 0;
    int iterations = 0;
    bool isDestroyed = false;

    // for (Ship* shipIt: shipEntities) {
    //     cout << ship->getPos
    // }

    // moving all ships
    while (iterations < maxIterations) {
      for (std::__1::__wrap_iter<Ship**> shipIt = shipEntities.begin();
           shipIt != shipEntities.end();) {
        isDestroyed = false;
        // for (int s = 0; s < numShips; s++) {
        // cout << "Original ship position was " <<
        // std::get<0>((*shipIt)->getPos()) << ", " <<
        // std::get<1>((*shipIt)->getPos()) << endl;
        (*shipIt)->move(1, 0);
        // cout << "New ship position is " << std::get<0>((*shipIt)->getPos())
        // << ", " << std::get<1>((*shipIt)->getPos()) << endl;
        for (auto mineIt = mineEntities.begin();
             mineIt != mineEntities.end();) {
          // for (int m = 0; m < numMines; m++) {
          // cout << "Position of (*shipIt) is " <<
          // std::get<0>((*shipIt)->getPos()) << ", " <<
          // std::get<1>((*shipIt)->getPos()) << endl; cout << "Position of
          // (*mineIt) is " << std::get<0>((*mineIt)->getPos()) << ", " <<
          // std::get<1>((*mineIt)->getPos()) << endl;
          // // cout << "distance between mine and ship: " <<
          // Utils::calculateDistance((*entities[s]).getPos(),
          // (*entities[m]).getPos()) << endl;
          if (Utils::calculateDistance((*shipIt)->getPos(),
                                       (*mineIt)->getPos()) <=
              mineDistanceThreshold) {
            Explosion explosion = (*mineIt)->explode();
            GameEntity* gm = dynamic_cast<GameEntity*>(*shipIt);
            explosion.apply(*gm);

            // (*shipIt)->setType('X');
            // cout << "Mine exploding: " << endl;
            // cout << "mine type: " << (*mineIt)->getType() << endl;
            // cout << "mine position: " << std::get<0>((*mineIt)->getPos()) <<
            // ", " << std::get<1>((*mineIt)->getPos()) << endl; cout << "ship
            // type: " << (*shipIt)->getType() << endl; cout << "ship position:
            // " << std::get<0>((*shipIt)->getPos()) << ", " <<
            // std::get<1>((*shipIt)->getPos()) << endl; cout << "distance
            // between mine and ship: " <<
            // Utils::calculateDistance((*shipIt)->getPos(),
            // (*mineIt)->getPos()) << endl;

            shipsDestroyed++;
            // mineEntities.erase(mineEntities.begin() + m);
            // numShips--;
            isDestroyed = true;
            shipIt = shipEntities.erase(shipIt);
            mineIt = mineEntities.erase(mineIt);

            if (shipsDestroyed == numShips) {
              // cout << "The number of ships destroyed is " << shipsDestroyed
              // << endl; cout << "The number of ships is " << numShips << endl;
              // cout << "all ships destroyed" << endl;
              return;
            }

            break;
          } else {
            ++mineIt;
          }

          // shipEntities.erase(shipEntities.begin() + s);
        }
        if (isDestroyed == false) {
          shipIt++;
        }
      }
      iterations++;
    }
    // cout << "max iterations was reached" << endl;
    return;
  }

  // getters and setters
  vector<GameEntity*> get_entities() { return entities; }

  void set_entities(GameEntity* entity) {
    // adds entity to end of vector
    entities.push_back(entity);
    return;
  }

  ~Game() {
    for (int i = 0; i < numShips + numMines; i++) {
      delete (entities[i]);
    }
    // for (int i = 0; i < numShips; i++) {
    //     delete (shipEntities[i]);
    // }
    // for (int i = 0; i < numMines; i++) {
    //     delete (mineEntities[i]);
    // }
    entities.clear();
    shipEntities.clear();
    mineEntities.clear();
  }
};
#endif
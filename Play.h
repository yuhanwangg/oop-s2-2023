#ifndef PLAY_H
#define PLAY_H

#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Persona.h"
#include "Snare.h"
#include "Spot.h"

class Play {
 private:
  std::vector<Spot*> matrix;
  std::vector<Snare*> snareMatrix;
  std::vector<Persona*> personaMatrix;
  int personaCount;
  int snareCount;
  bool winCondition;
  int matrixWidth;
  int matrixHeight;
  bool finished;

 public:
  Play() {
    matrix.empty();
    winCondition = false;
    finished = false;
  }
  void initPlay(int numPersonas, int numSnares, int matrixWidth,
                int matrixHeight) {
    personaCount = 0;
    snareCount = 0;
    for (int i = 0; i < numPersonas; i++) {
      std::tuple<int, int> tempLoc =
          Assists::createRandomLoc(matrixWidth, matrixHeight);
      Persona* persona =
          new Persona(std::get<0>(tempLoc), std::get<1>(tempLoc));
      matrix.push_back(persona);
      personaMatrix.push_back(persona);
      personaCount++;
    }

    for (int i = 0; i < numSnares; i++) {
      std::tuple<int, int> tempLoc =
          Assists::createRandomLoc(matrixWidth, matrixHeight);
      Snare* snare = new Snare(std::get<0>(tempLoc), std::get<1>(tempLoc));
      matrix.push_back(snare);
      snareMatrix.push_back(snare);
      snareCount++;
    }
    this->matrixHeight = matrixHeight;
    this->matrixWidth = matrixWidth;

    winCondition = false;
    finished = false;
  }
  void playCycle(int maxCycles, double snareTriggerDistance) {
    int iterations = 0;
    int p = 0;
    int s = 0;
    while (!finished) {
      for (int i = 0; i < matrix.size(); i++) {
        if (personaMatrix[p]->getCategory() == 'P' &&
            p < personaMatrix.size()) {
          std::cout << "successfully shifted from x= "
                    << std::get<0>(matrix[i]->getLoc())
                    << ",y= " << std::get<1>(matrix[i]->getLoc()) << "\n";
          personaMatrix[p]->shift(1, 0);

          std::tuple<int, int> tempLoc = personaMatrix[p]->getLoc();
          if (std::get<0>(tempLoc) > matrixWidth ||
              std::get<0>(tempLoc) > matrixHeight) {
            std::cout << "Persona has won the game!"
                      << "\n";
            winCondition = true;
            finished = true;
          }

          if (snareMatrix[s]->getCategory() == 'S' && s < snareMatrix.size()) {
            std::cout << "snare found"
                      << "\n";
            if (Assists::evaluateDistance(personaMatrix[p]->getLoc(),
                                          snareMatrix[s]->getLoc()) <
                snareTriggerDistance)
              snareMatrix[s]->implement(*personaMatrix[p]);
            matrix[i]->setCategory('S');
            std::cout << "persona is now: " << matrix[i]->getCategory() << "\n";
          } else {
            s++;
          }
        } else {
          p++;
        }
      }

      iterations++;  // checking iterations
      std::cout << "iteration number: " << iterations << "\n";
      if (iterations > maxCycles) {
        std::cout << "Maximum number of cycles reached. Game over."
                  << "\n";
        finished = true;
      }
    }
  }
  // getter and setter
  std::vector<Spot*>& getMatrix() { return matrix; }
};

#endif
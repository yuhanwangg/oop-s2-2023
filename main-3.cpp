#include <iostream>

#include "Game.h"

int main() {
  Game game;
  game.initGame(5, 5, 50, 50);
  game.gameLoop(10, 2);
}
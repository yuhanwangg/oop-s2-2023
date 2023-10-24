#include <iostream>
#include <tuple>
#ifndef GAMEENTITY_H
#define GAMEENTITY_H

class GameEntity {
 protected:
  std::tuple<int, int> position;  // representing position of the entity
  char type;

 public:
  GameEntity() : position(std::make_tuple(0, 0)){};
  GameEntity(int x, int y, char type) {
    position = std::make_tuple(x, y);
    this->type = type;
  }

  // getters and setters
  std::tuple<int, int> getPos() { return position; }
  void setPosition(int x, int y) {
    std::get<0>(position) = x;
    std::get<1>(position) = y;
  }

  char getType() { return type; }
  void setType(char type) { this->type = type; }
  virtual void x(){};
};

#endif
#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <iostream>
#include <tuple>
class GameEntity {
 protected:
  std::tuple<int, int> position;
  char type;

 public:
  GameEntity() : position(std::make_tuple(0, 0)){};
  GameEntity(int x, int y, char type) {
    position = std::make_tuple(x, y);
    this->type = type;
  };

  // getter and setter
  std::tuple<int, int> getPos() { return position; };

  void setPos(int x, int y) { position = std::make_tuple(x, y); }

  char getType() { return type; }
  void setType(char type) { this->type = type; }
};
#endif
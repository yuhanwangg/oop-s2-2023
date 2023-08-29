#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
using namespace std;
#include <string.h>

class Player {
 protected:
  string name;
  int health;
  int damage;

 public:
  Player(string name, int health, int damage);
  Player();  // constructor;
  void attack(Player* opponent, int damage);
  void takeDamage(int damage);

  int getHealth();
  void setHealth(int health);
  int getDamage();
  void setDamage(int damage);
  string getName();
  void setName(int name);
};

#endif
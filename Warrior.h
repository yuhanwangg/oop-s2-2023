#ifndef WARRIOR_H
#define WARRIOR_H
#include <string.h>

#include <iostream>

#include "Player.h"

using namespace std;

class Warrior : public Player {
 protected:
  string weapon;

 public:
  Warrior(string name, int health, int damage, string weapon);
  void swingWeapon(Player* opponent);
  string getWeapon();
  void setWeapon(string weapon);
};

#endif
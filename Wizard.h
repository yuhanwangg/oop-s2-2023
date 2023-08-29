#include "Player.h"
#ifndef WIZARD_H
#define WIZARD_H
#include <iostream>
using namespace std;

#include <string.h>

class Wizard : public Player {
 protected:
  int mana;

 public:
  void castSpell(Player* opponent);
  Wizard(string name, int health, int damage, int mana);  // constructor
  int getMana();
  void setMana(int mana);
};

#endif
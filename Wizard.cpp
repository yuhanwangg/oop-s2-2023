#include "Wizard.h"

#include <iostream>

#include "Player.h"
using namespace std;

#include <string.h>

Wizard::Wizard(string name, int health, int damage, int mana)
    : Player(name, health, damage) {
  this->name = name;
  this->health = health;
  this->damage = mana;
  this->mana = mana;
}
void Wizard::castSpell(Player* opponent) {
  int opp_health = opponent->getHealth();
  opponent->setHealth(opp_health - mana);
  cout << name << " casts a spell on " << opponent->getName() << " for "
       << damage << " damage." << endl;
};
int Wizard::getMana() { return mana; };
void Wizard::setMana(int mana) { this->mana = mana; };
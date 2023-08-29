#include "Warrior.h"

#include <string.h>

#include <iostream>

#include "Player.h"
using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon)
    : Player(name, health, damage) {
  this->name = name;
  this->health = health;
  this->damage = damage;
  this->weapon = weapon;
};
void Warrior::swingWeapon(Player* opponent) {
  int opp_health = opponent->getHealth();
  opponent->setHealth(opp_health - damage);
  cout << name << " swings their " << weapon << " at " << opponent->getName()
       << "!" << endl;
};

string Warrior::getWeapon() { return weapon; };
void Warrior::setWeapon(string weapon) { this->weapon = weapon; };
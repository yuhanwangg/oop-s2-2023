#include "Player.h"

#include <iostream>
using namespace std;

Player::Player(string name, int health, int damage) {
  this->name = name;
  this->health = health;
  this->damage = damage;
};

Player::Player() {
  name = "";
  health = 0;
  damage = 0;
};  // constructor;
void Player::attack(Player* opponent, int damage) {
  int opp_health = opponent->health;
  opponent->health = opp_health - damage;
  cout << "Opponent has suffered " << damage << " damage!" << endl;
  cout << "Opponent health is now at: " << opponent->health << endl;
};
void Player::takeDamage(int damage) {
  health = health - damage;
  cout << name << " takes " << damage << " damage. Remaining health: " << health
       << "\n"
       << endl;
};

int Player::getHealth() { return health; };
void Player::setHealth(int health) { this->health = health; };
int Player::getDamage() { return damage; };
void Player::setDamage(int damage) { this->damage = damage; };
string Player::getName() { return name; };
void Player::setName(int name) { this->name = name; };

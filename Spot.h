#ifndef SPOT_H
#define SPOT_H

#include <iostream>
#include <tuple>

class Spot {
 protected:
  std::tuple<int, int> location;
  char category;

 public:
  Spot() {
    location = std::make_tuple(0, 0);
    category = ' ';
  }  // default

  Spot(int x, int y, char category) {
    location = std::make_tuple(x, y);
    this->category = category;
  }
  std::tuple<int, int> getLoc() { return location; }
  virtual char getCategory() { return category; }
  virtual void setLoc(int x, int y) { location = std::make_tuple(x, y); }
  virtual void setCategory(char category) { this->category = category; }
  virtual void shift(int dx, int dy) { location = std::make_tuple(dx, dy); }
  // changes spot category to 'S' and deactivates snare when implement() is
  // called
  virtual void implement(Spot& spot) { spot.setCategory('S'); }
  virtual void x(){};
};

#endif
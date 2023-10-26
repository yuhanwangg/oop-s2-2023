#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Persona.h"
#include "Play.h"
#include "Snare.h"
#include "Spot.h"

int main() {
  Play play;
  play.initPlay(3, 3, 5, 5);
  play.playCycle(10, 1);
}

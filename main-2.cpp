#include <iostream>
#include <tuple>

#include "Assists.h"
#include "Influence.h"
#include "Persona.h"
#include "Snare.h"
#include "Spot.h"

int main() {
  Persona person = Persona(50, 50);
  Snare snare = Snare(30, 40);
  Snare snare2 = Snare(50, 50);

  std::cout << "person category is: " << person.getCategory() << "\n";
  snare.implement(person);
  std::cout << "person changed category is: " << person.getCategory();
  std::cout << "location: " << std::get<0>(person.getLoc())
            << std::get<1>(person.getLoc());
  person.shift(2, 2);
  std::cout << "location: " << std::get<0>(person.getLoc())
            << std::get<1>(person.getLoc());
}

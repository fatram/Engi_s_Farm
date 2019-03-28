#include "Well.hpp"

char Well::render() {
  return 'W';
}

void Well::interact(Player& P){
  P.setWater(P.getMaxWater);
}

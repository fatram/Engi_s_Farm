#include "Coop.hpp"

char Coop::render(){
  if (hasGrass) return '#';
  else return 'o';
}

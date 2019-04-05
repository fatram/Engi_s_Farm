#include "Barn.hpp"

char Barn::render(){
  if (hasGrass) return '@';
  else return 'x';
}

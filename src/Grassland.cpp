#include "Grassland.hpp"

char Grassland::render(){
  return '-';
}

Grassland::Grassland(bool hf, bool hg):Cell(0,hf,hg){
}

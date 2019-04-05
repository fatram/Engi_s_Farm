#include "Grassland.hpp"

char Grassland::render(){
  if (hasGrass) return '&';
  else return '-';
}


char Grassland::getGrassChar(){return '&';}
/*
Grassland::Grassland(bool hf, bool hg):Cell(0,hf,hg){
} */

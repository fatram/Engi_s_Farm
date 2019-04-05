#include "Cell.hpp"

Cell::Cell(){
  coolDownTruck = 0;
  hasFacility = false;
  hasGrass = false;
}

Cell::Cell(int cd, bool hf, bool hg){
  coolDownTruck = cd;
  hasFacility = hf;
  hasGrass = hg;
}

void Cell::grow(){
  setHasGrass(true);
}

int Cell::getCoolDownTruck() const {
  return coolDownTruck;
}

void Cell::setCoolDownTruck(int cd){
  coolDownTruck = cd;
}

bool Cell::getHasFacility() const {
  return hasFacility;
}

void Cell::setHasFacility(bool hf) {
  hasFacility = hf;
}

bool Cell::getHasGrass() const {
  return hasGrass;
}

void Cell::setHasGrass(bool hg) {
  hasGrass = hg;
}

char Cell::getGrassChar(){return 0;} //dummy function

#include "FarmAnimal.hpp"
#include <iostream>

using namespace std;

FarmAnimal::FarmAnimal(bool meat, bool egg, bool milk, int life, int x, int y):lifeSpan(life){
    meatProducing = meat;
    eggProducing = egg;
    milkProducing = milk;
    posX = x;
    posY = y;
    hungry = 5;
}	

void FarmAnimal::setMeatProducing(bool meat) { meatProducing = meat; }

void FarmAnimal::setEggProducing(bool egg) { eggProducing = egg; }

void FarmAnimal::setMilkProducing(bool milk) { milkProducing = milk; }

bool FarmAnimal::getEggProducing() { return eggProducing;}

bool FarmAnimal::getMeatProducing() { return meatProducing;}

bool FarmAnimal::getMilkProducing() { return milkProducing; }

int FarmAnimal::getLifeSpan() { return lifeSpan; }

int FarmAnimal::getPosX() const { return posX;}

int FarmAnimal::getPosY() const { return posY; }

void FarmAnimal::setPosX(int x){ posX = x;}

void FarmAnimal::setPosY(int y){ posY = y;}

bool FarmAnimal::isEggProducing(){return eggProducing; }

bool FarmAnimal::isMeatProducing(){return meatProducing; }

bool FarmAnimal::isMilkProducing(){return milkProducing; }

void FarmAnimal::Bersuara(){ cout<<"Ini Hewan"<<endl;}

void FarmAnimal::makan() {
    hungry = lifeSpan; //reset hungry
} 

bool FarmAnimal::isHungry(){
    return hungry < 0; 
}

void FarmAnimal::updateHungry(){
    hungry--;
}
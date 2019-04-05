#include "FarmAnimal.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

FarmAnimal::FarmAnimal(bool meat, bool egg, bool milk, int life, int x, int y):lifeSpan(life){
    meatProducing = meat;
    eggProducing = egg;
    milkProducing = milk;
    posX = x;
    posY = y;
    hungry = lifeSpan;
}	

void FarmAnimal::setMeatProducing(bool meat) { meatProducing = meat; }

void FarmAnimal::setEggProducing(bool egg) { eggProducing = egg; }

void FarmAnimal::setMilkProducing(bool milk) { milkProducing = milk; }

bool FarmAnimal::getEggProducing() { return eggProducing;}

bool FarmAnimal::getMeatProducing() { return meatProducing;}

bool FarmAnimal::getMilkProducing() { return milkProducing; }

int FarmAnimal::getLifeSpan() { return lifeSpan; }

int FarmAnimal::getPosX() const { return posX;}
// = new Camel();
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

FarmAnimal::~FarmAnimal(){}

void FarmAnimal::Movement(){
	bool valid;
	int pilihan, xtemp, ytemp;
	//randomize();
	valid =false;
	while(!valid){
		pilihan = rand() % 4; 
				
		if(pilihan == 0){
			posY = posY+1;
		} else if (pilihan ==1){
			posX = posX -1;
		} else if (pilihan ==2){
			posY = posY -1;
		} else if (pilihan ==3){
			posX = posX+1;
		}
	}	

}

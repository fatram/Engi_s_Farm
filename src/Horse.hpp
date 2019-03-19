#ifndef HORSE_HPP
#define HORSE_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"
#include "HorseMeat.hpp"

class Horse : public FarmAnimal,public Renderable {
    public :
        Horse();// Konstruktor
		Horse(int, int);      
        void Bersuara(); //Menghasilkan suara horse
		char render();
		FarmProduct* interact(); //Interact pada horse merupakan kill yang mereturn HorseMeat 
		
};

#endif

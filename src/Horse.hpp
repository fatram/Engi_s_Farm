#ifndef HORSE_HPP
#define HORSE_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Horse : public FarmAnimal,Renderable {

    private :
		
    public :
        Horse();// Konstruktor
		Horse(int, int);      
        void Bersuara(); //Menghasilkan suara horse
		char render();
		FarmProduct kill();
        void talk();
        void eat();
		
};

#endif

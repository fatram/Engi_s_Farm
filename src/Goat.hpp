#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"
#include "GoatMeat.hpp"
#include "Renderable.hpp"

class Goat : public FarmAnimal, public Renderable {
    public :     
    	Goat();
        Goat(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara chicken
        char render();
		FarmProduct* interact(); //Interact dengan goat merupakan command kill menghasilkan GoatMeat 

};

#endif

#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"
#include "GoatMeat.hpp"

class Goat : public FarmAnimal {
    public :     
    	Goat();
        Goat(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara chicken
        char render();
		FarmProduct* interact(); //Interact dengan goat merupakan command kill menghasilkan GoatMeat 

};

#endif

#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"

class Goat : public FarmAnimal, Renderable {

    private :

    public :     
    	Goat();
        Goat(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara chicken
        char render();
		FarmProduct kill();
        FarmProduct kill();
        void talk();
        void eat();
};

#endif

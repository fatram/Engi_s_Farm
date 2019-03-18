#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "FarmAnimal.hpp"

class Chicken : public FarmAnimal, Renderable {

    private :

    public :     
    	Chicken();
        Chicken(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara chicken
		char render();
        FarmProduct kill();
        void talk();
        void eat();
};

#endif

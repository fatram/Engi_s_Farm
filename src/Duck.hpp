#ifndef DUCK_HPP
#define DUCK_HPP

#include "FarmAnimal.hpp"

class Chicken : public FarmAnimal, Renderable {

    private :

    public :     
    	Duck();
        Duck(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara Duck
		char render();
		FarmProduct kill();
        void talk();
        void eat();
};

#endif

#ifndef CAMEL_HPP
#define CAMEL_HPP

#include "FarmAnimal.hpp"

class Camel : public FarmAnimal, Renderable {

    private :

    public :     
    	Camel();
        Camel(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara camel
        char render();
        FarmProduct kill();
        void talk();
        void eat();
};

#endif

#ifndef DUCK_HPP
#define DUCK_HPP

#include "FarmAnimal.hpp"
#include "DuckEgg.hpp"

class Duck : public FarmAnimal{
    public :     
    	Duck();
        Duck(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara Duck
		char render();
		FarmProduct* interact(); //Interact dengan duck menghasilkan DuckEgg
};

#endif

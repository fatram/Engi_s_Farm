#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "FarmAnimal.hpp"
#include "ChickenEgg.hpp"

class Chicken : public FarmAnimal {
    public :     
    	Chicken();
        Chicken(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara chicken
		char render(); 
        FarmProduct* interact(); //Berinteraksi dengan ayam menghasilkan ChickenEgg
};

#endif

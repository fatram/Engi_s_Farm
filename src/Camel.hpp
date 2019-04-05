#ifndef CAMEL_HPP
#define CAMEL_HPP

#include "FarmAnimal.hpp"
#include "CamelMilk.hpp"

class Camel : public FarmAnimal {
    public :     
    	Camel(); //default ctor
        Camel(int, int);// Konstruktor 
        void Bersuara(); //Menghasilkan suara camel
        char render(); //Menghasilkan representasi dari Camel
        FarmProduct* interact(); //Berinteraksi dengan camel menghasilkan CamelMilk
};

#endif

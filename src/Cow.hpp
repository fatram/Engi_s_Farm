#ifndef COW_HPP
#define COW_HPP

#include "FarmAnimal.hpp"
#include "CowMilk.hpp"

class Cow : public FarmAnimal {
    public :
        Cow();
		Cow(int, int); //Konstruktor
        void Bersuara(); //Menghasilkan suara cow
		char render();
		FarmProduct* interact(); //interaksi dengan cow menghasilkan CowMilk
};

#endif

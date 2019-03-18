#ifndef COW_HPP
#define COW_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Cow : public FarmAnimal, Renderable {

    private :

    public :
        Cow();
		Cow(int, int); //Konstruktor
        void Bersuara(); //Menghasilkan suara cow
		char render();
		FarmProduct kill();
        void talk();
        void eat();
};

#endif

#ifndef COW_HPP
#define COW_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Cow : public FarmAnimal, Renderable {

    private :

    public :
        Cow(); //Konstruktor
        void Sounds(); //Menghasilkan suara cow
        char render(); //Mengembalikan karakter 'S' sebagai representasi objek Cow

};

#endif

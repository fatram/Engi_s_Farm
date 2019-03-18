#ifndef CAMEL_HPP
#define CAMEL_HPP

#include "FarmAnimal.hpp"

class Camel : public FarmAnimal, Renderable {

    private :

    public :     
        Camel();// Konstruktor 
        void Sounds(); //Menghasilkan suara camel
        char render(); //Mengembalikan karakter 'U' sebagai representasi objek Camel

};

#endif

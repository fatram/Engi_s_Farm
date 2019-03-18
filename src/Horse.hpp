#ifndef HORSE_HPP
#define HORSE_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Horse : public FarmAnimal, Renderable {

    private :

    public :     
        Horse();// Konstruktor 
        void Sounds(); //Menghasilkan suara horse
        char render(); // Mengembalikan karakter 'K' sebagai representasi objek Horse

};

#endif

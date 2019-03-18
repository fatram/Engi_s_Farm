#ifndef GOAT_HPP
#define GOAT_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Goat : public FarmAnimal, Renderable {

    private :

    public :     
        Goat();// Konstruktor 
        void Sounds(); //Menghasilkan suara chicken
        char render(); // Mengembalikan karakter 'G' sebagai representasi objek Goat

};

#endif

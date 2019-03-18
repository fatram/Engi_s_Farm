#ifndef CHICKEN_HPP
#define CHICKEN_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Chicken : public FarmAnimal, Renderable {

    private :

    public :     
        Chicken();// Konstruktor 
        void Sounds(); //Menghasilkan suara chicken
        char render(); // mengembalikan karakter 'A' sebagai representasi objek Chicken

};

#endif

#ifndef DUCK_HPP
#define DUCK_HPP

#include "FarmAnimal.hpp"
#include "Renderable.hpp"

class Duck : public FarmAnimal, Renderable {

    private :

    public :     
        Duck();// Konstruktor 
        void Sounds(); //Menghasilkan suara Duck
        char render(); //Mengembalikan karakter 'B' sebagai representasi objek Duck

};

#endif

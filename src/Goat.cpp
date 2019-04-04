#include "Goat.hpp"
#include <iostream>

using namespace std;

Goat::Goat() :FarmAnimal(true, false, false, 14,0, 0) {
}

Goat::Goat(int x, int y):FarmAnimal(true, false, false, 14,x, y) {
}

void Goat::Bersuara() //Menghasilkan suara Goat
{
    cout<<"Mbeeee"<<endl; 
}

char Goat::render() //Menghasilkan representasi dari Goat
{
    return 'K';
}


FarmProduct* Goat::interact() //Berinteraksi dengan Goat menghasilkan GoatMeat
{
    return new GoatMeat();
} 
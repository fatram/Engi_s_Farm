#include "Cow.hpp"
#include <iostream>

using namespace std;

Cow::Cow() :FarmAnimal(false, false, true, 20,0, 0) {
}

Cow::Cow(int x, int y):FarmAnimal(false, false, true, 20,x, y) {
}

void Cow::Bersuara() //Menghasilkan suara Cow
{
    cout<<"Mooooo"<<endl; 
}

char Cow::render() //Menghasilkan representasi dari Cow
{
    return 'S';
}


FarmProduct* Cow::interact() //Berinteraksi dengan Cow menghasilkan CowMilk
{
    return new CowMilk();
} 
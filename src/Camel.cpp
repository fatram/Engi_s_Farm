#include "Camel.hpp"
#include <iostream>

using namespace std;

Camel::Camel() :FarmAnimal(false, false, true, 15,0, 0) {
}

Camel::Camel(int x, int y):FarmAnimal(false, false, true, 15,x, y) {
}

void Camel::Bersuara() //Menghasilkan suara camel
{
    cout<<"Owe owe"<<endl; 
}

char Camel::render() //Menghasilkan representasi dari Camel
{
    return 'U';
}

FarmProduct* Camel::interact() //Berinteraksi dengan camel menghasilkan CamelMilk
{
    return new CamelMilk();
}
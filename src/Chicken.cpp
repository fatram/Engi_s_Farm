#include "Chicken.hpp"
#include <iostream>

using namespace std;

Chicken::Chicken() :FarmAnimal(false, true, false, 10,0, 0) {
}

Chicken::Chicken(int x, int y):FarmAnimal(false, true, false, 10,x, y) {
}

void Chicken::Bersuara() //Menghasilkan suara Chicken
{
    cout<<"Petok Petok"<<endl; 
}

char render() //Menghasilkan representasi dari Chicken
{
    return 'A';
}

FarmProduct* interact() //Berinteraksi dengan Chicken menghasilkan ChickenEgg
{
    return &ChickenEgg();
}
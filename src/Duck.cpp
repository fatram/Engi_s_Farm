#include "Duck.hpp"
#include <iostream>

using namespace std;

Duck::Duck() :FarmAnimal(false, true, false, 12,0, 0) {
}

Duck::Duck(int x, int y):FarmAnimal(false, true, false, 12,x, y) {
}

void Duck::Bersuara() //Menghasilkan suara Duck
{
    cout<<"Kwek Kwek"<<endl; 
}

char Duck::render() //Menghasilkan representasi dari Duck
{
    return 'B';
}

FarmProduct* Duck::interact() //Berinteraksi dengan Duck menghasilkan DuckEgg
{
    return new DuckEgg();
} 
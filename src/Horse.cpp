#include "Horse.hpp"
#include <iostream>

using namespace std;

Horse::Horse() :FarmAnimal(true, false, false, 18,0, 0) {
}

Horse::Horse(int x, int y):FarmAnimal(true, false, false, 18,x, y) {
}

void Horse::Bersuara() //Menghasilkan suara Horse
{
    cout<<"Hiya hiya"<<endl; 
}

char Horse::render() //Menghasilkan representasi dari Horse
{
    return 'H';
}

FarmProduct* Horse::interact() //Berinteraksi dengan Horse menghasilkan HorseMeat
{
    return new HorseMeat();
} 
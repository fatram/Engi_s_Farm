#include "HorseMeat.hpp"

HorseMeat::HorseMeat(){
    harga = 30000;
}

HorseMeat::HorseMeat(int h) {
    harga = h;
}

string HorseMeat::toString(){
    return "Horse Meat";
}
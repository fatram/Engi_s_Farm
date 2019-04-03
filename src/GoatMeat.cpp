#include "GoatMeat.hpp"

GoatMeat::GoatMeat(){
    harga = 20000;
}

GoatMeat::GoatMeat(int h) {
    harga = h;
}

string GoatMeat::toString(){
    return "Goat Meat";
}
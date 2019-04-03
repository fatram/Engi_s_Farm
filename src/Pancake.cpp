#include "Pancake.hpp"

Pancake::Pancake(){
    harga = 70000;
}

Pancake::Pancake(int h) {
    harga = h;
}

string Pancake::toString(){
    return "Pancake";
}
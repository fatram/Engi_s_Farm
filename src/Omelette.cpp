#include "Omelette.hpp"

Omelette::Omelette(){
    harga = 40000;
}

Omelette::Omelette(int h) {
    harga = h;
}

string Omelette::toString(){
    return "Omelette";
}
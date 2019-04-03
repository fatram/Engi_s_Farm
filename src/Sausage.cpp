#include "Sausage.hpp"

Sausage::Sausage(){
    harga = 50000;
}

Sausage::Sausage(int h) {
    harga = h;
}

string toString(){
    return "Sausage";
}
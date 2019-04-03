#include "DuckEgg.hpp"

DuckEgg::DuckEgg(){
    harga = 8000;
}

DuckEgg::DuckEgg(int h) {
    harga = h;
}

string DuckEgg::toString(){
    return "Duck Egg";
}
#include "ChickenEgg.hpp"

ChickenEgg::ChickenEgg(){
    harga = 5000;
}

ChickenEgg::ChickenEgg(int h) {
    harga = h;
}

string ChickenEgg::toString(){
    return "Chicken Egg";
}
#include "CowMilk.hpp"

CowMilk::CowMilk(){
    harga = 10000;
}

CowMilk::CowMilk(int h) {
    harga = h;
}

string CowMilk::toString() {
    return "Cow Milk";
}
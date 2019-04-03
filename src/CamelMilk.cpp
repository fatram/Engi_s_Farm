#include "CamelMilk.hpp"

CamelMilk::CamelMilk(){
    harga = 20000;
}

CamelMilk::CamelMilk(int h) {
    harga = h;
}

string CamelMilk::toString(){
    return "Camel Milk";
}
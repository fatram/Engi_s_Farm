#ifndef HORSEMEAT_HPP
#define HORSEMEAT_HPP

#include "FarmProduct.hpp"

class HorseMeat : public FarmProduct {
    public:
        HorseMeat();
        //ctor CamelMilk dengan user-define
        HorseMeat(int);
};

#endif
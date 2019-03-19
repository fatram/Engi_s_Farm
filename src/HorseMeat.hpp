#ifndef HORSEMEAT_HPP
#define HORSEMEAT_HPP

#include "FarmProduct.hpp"

class HorseMeat : public FarmProduct {
    public:
        //ctor
        HorseMeat();
        //ctor HorseMeat dengan user-define
        HorseMeat(int);
};

#endif
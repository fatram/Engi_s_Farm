#ifndef GOATMEAT_HPP
#define GOATMEAT_HPP

#include "FarmProduct.hpp"

class GoatMeat : public FarmProduct {
    public:
        GoatMeat();
        //ctor CamelMilk dengan user-define
        GoatMeat(int);
};

#endif
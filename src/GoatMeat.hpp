#ifndef GOATMEAT_HPP
#define GOATMEAT_HPP

#include "FarmProduct.hpp"

class GoatMeat : public FarmProduct {
    public:
        //ctor
        GoatMeat();
        //ctor GoatMeat dengan user-define
        GoatMeat(int);
        string toString();
};

#endif
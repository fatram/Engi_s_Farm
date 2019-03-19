#ifndef SAUSAGE_HPP
#define SAUSAGE_HPP

#include "SideProduct.hpp"

class Sausage : public SideProduct {
    public:
        //ctor
        Sausage();
        //ctor Sausage dengan user-define
        Sausage(int);
};

#endif
#ifndef PANCAKE_HPP
#define PANCAKE_HPP

#include "SideProduct.hpp"

class Pancake : public SideProduct {
    public:
        //ctor
        Pancake();
        //ctor Pancake dengan user-define
        Pancake(int);
        string toString();
};

#endif
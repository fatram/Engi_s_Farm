#ifndef OMELETTE_HPP
#define OMELETTE_HPP

#include "SideProduct.hpp"

class Omelette : public SideProduct {
    public:
        //ctor
        Omelette();
        //ctor Omelette dengan user-define
        Omelette(int);
};

#endif
#ifndef COWMILK_HPP
#define COWMILK_HPP

#include "FarmProduct.hpp"

class CowMilk : public FarmProduct {
    public:
        //ctor
        CowMilk();
        //ctor CowMilk dengan user-define
        CowMilk(int);
};

#endif
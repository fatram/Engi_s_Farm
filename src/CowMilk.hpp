#ifndef COWMILK_HPP
#define COWMILK_HPP

#include "FarmProduct.hpp"

class CowMilk : public FarmProduct {
    public:
        CowMilk();
        //ctor CamelMilk dengan user-define
        CowMilk(int);
};

#endif
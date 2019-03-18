#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

#include "FarmProduct.hpp"

class DuckEgg : public FarmProduct {
    public:
        DuckEgg();
        //ctor CamelMilk dengan user-define
        DuckEgg(int);
};

#endif
#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

#include "FarmProduct.hpp"

class ChickenEgg : public FarmProduct {
    public:
        ChickenEgg();
        //ctor CamelMilk dengan user-define
        ChickenEgg(int);
};

#endif
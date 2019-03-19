#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

#include "FarmProduct.hpp"

class ChickenEgg : public FarmProduct {
    public:
        //ctor
        ChickenEgg();
        //ctor ChickenEgg dengan user-define
        ChickenEgg(int);
};

#endif
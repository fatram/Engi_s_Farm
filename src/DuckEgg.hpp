#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

#include "FarmProduct.hpp"

class DuckEgg : public FarmProduct {
    public:
        //ctor
        DuckEgg();
        //ctor DuckEgg dengan user-define
        DuckEgg(int);
};

#endif
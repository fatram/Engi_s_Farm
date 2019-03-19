#ifndef CAMELMILK_HPP
#define CAMELMILK_HPP

#include "FarmProduct.hpp"

class CamelMilk : public FarmProduct {
    public:
        //ctor
        CamelMilk();
        //ctor CamelMilk dengan user-define
        CamelMilk(int);
};

#endif
#ifndef SAUSAGE_HPP
#define SAUSAGE_HPP

#include "SideProduct.hpp"

class Sausage : public SideProduct {
    public:
        Sausage();
        //ctor CamelMilk dengan user-define
        Sausage(int);
};

#endif
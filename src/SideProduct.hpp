#ifndef SIDEPRODUCT_HPP
#define SIDEPRODUCT_HPP

#include "Product.hpp"


class SideProduct : public Product {
    public:
        //pure virtual dtor agar kelas menjadi abstrak
        virtual ~SideProduct() = 0;
};

#endif
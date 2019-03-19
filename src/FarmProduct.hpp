#ifndef FARMPRODUCT_HPP
#define FARMPRODUCT_HPP

#include "Product.hpp"

class FarmProduct : public Product {
    public:
        //pure virtual dtor agar kelas menjadi abstrak
        virtual ~FarmProduct() = 0; 
};

#endif
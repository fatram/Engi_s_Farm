#include "Product.hpp"

Product::Product(){
	harga = 0;
}

Product::Product(int h){
	harga = h;
}

void Product::setHarga(int h){
	harga = h;
}

int Product::getHarga() const{
	return harga;
}
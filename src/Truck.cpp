#include "Truck.hpp"

Truck::Truck(int cd){
  setCoolDownTruck(cd);
}

char Truck::render() {
  return 'T';
}

void Truck::interact(Player& P) {
  Product* product;
  while(!P.getBagSize() == 0){
    product = P.getProduct(0);//Bag().get(0);
    P.addMoney(product->getHarga());
    P.delBag(product);
  }
}

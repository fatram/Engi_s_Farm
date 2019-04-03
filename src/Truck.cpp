#include "Truck.hpp"

Truck::Truck(int cd){
  setCoolDownTruck(cd);
}

char Truck::render() {
  return 'T';
}

void Truck::interact(Player& P) {
  Product* product;
  while(!P.getBag().isEmpty()){
    product = P.getBag().get(0);
    P.addMoney(product->getHarga());
    P.getBag().remove(product);
  }
}

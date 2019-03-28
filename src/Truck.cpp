#include "Truck.hpp"

Truck::Truck(int cd){
  setCoolDownTruck(cd);
}

char Truck::render() {
  return 'T';
}

void Truck::interact(Player& P) {
  Product* product;
  while(!P.bag.isEmpty()){
    product = P.bag.get(0);
    P.addMoney(product->harga);
    P.bag.remove(product);
  }
}

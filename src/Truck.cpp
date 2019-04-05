#include "Truck.hpp"

Truck::Truck(){
  setCoolDownTruck(10);
}
Truck::Truck(int cd){
  setCoolDownTruck(cd);
}

char Truck::render() {
  return 'T';
}

void Truck::interact(Player& P) {
  Product* product;
  if (coolDownTruck == 10) {
    while(!P.getBagSize() == 0){
      product = P.getProduct(0);//Bag().get(0);
      P.addMoney(product->getHarga());
      P.delBag(product);
      coolDownTruck = 0;
    }
  }
  else {
    cout<<"Truck belum bisa digunakan"<<endl;   
  }
}

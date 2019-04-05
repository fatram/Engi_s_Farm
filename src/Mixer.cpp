#include "Mixer.hpp"
#include "Pancake.hpp"
#include "Omelette.hpp"
#include "Sausage.hpp"
#include <iostream>

using namespace std;

char Mixer::render() {
  return 'M';
}

//Menggunakan Mixer untuk menghasilkan SideProduct dari bag player
//Player dipersilakan memilih product dari bag minimal 2 buah
//Hasil mix menjadi side product dimasukkan ke dalam bag 
void Mixer::interact(Player& P){
	int choice;
	cout << "Resep yang tersedia : " << endl;
	cout << "1. Pancake" << endl;
	cout << "   Ingredients : Chicken's Egg + Cow's Milk" << endl;
	cout << "2. Omelette" << endl;
	cout << "   Ingredients : Duck's Egg + Camel's Milk" << endl;
	cout << "3. Sausage" << endl;
	cout << "   Ingredients : Goat's Meat + Horse's Meat" << endl;
	cout << "Pilih item yang Anda inginkan (1/2/3) : " << endl;
	do{
		cin >> choice;
		if(choice != 1 && choice != 2 && choice != 3){
			cout << "Tolong masukkan angka 1, 2, atau 3" << endl;
		}
	}while(choice != 1 && choice != 2 && choice != 3);
	if(P.getBagSize() > 0){
		cout << "Item di dalam bag : " << endl;
		for(int i = 0; i < P.getBagSize(); i++){
			cout << (i+1)<<". " << P.getProduct(i)->toString() << endl;
		}
		cout << "Pilih item yang akan digunakan (e.g 1 2 (Artinya item nomor 1 dan 2) : "<<endl;
		int c1;
		int c2;
		cin >> c1;
		cin >> c2;
		if(c1 > P.getBagSize() || c2 > P.getBagSize()){
			cout << "Item yang dipilih tidak tersedia" << endl;
		} else {
			Product * p1 = P.getProduct(c1-1);
			Product * p2 = P.getProduct(c2-1);
			if(choice == 1){
				if((p1->toString().compare("Chicken Egg") == 0
					&& p2->toString().compare("Cow Milk") == 0) ||
					(p2->toString().compare("Chicken Egg") == 0
					&& p1->toString().compare("Cow Milk") == 0)){
						Pancake pc;
						Product * ppc = &pc;
						P.delBag(p1);
						P.delBag(p2);
						P.addBag(ppc);
						cout << "Pancake berhasil dibuat" << endl;
				} else {
					cout << "Pancake gagal dibuat" << endl;
				}
			} else if(choice == 2){
				if((p1->toString().compare("Duck Egg") == 0
					&& p2->toString().compare("Camel Milk") == 0) ||
					(p2->toString().compare("Duck Egg") == 0
					&& p1->toString().compare("Camel Milk") == 0)){
						Omelette o;
						Product * ppc = &o;
						P.delBag(p1);
						P.delBag(p2);
						P.addBag(ppc);
						cout << "Omelette berhasil dibuat" << endl;
				} else {
					cout << "Omelette gagal dibuat" << endl;
				}
			} else {
				if((p1->toString().compare("Goat Meat") == 0
					&& p2->toString().compare("Horse Meat") == 0) ||
					(p2->toString().compare("Goat Meat") == 0
					&& p1->toString().compare("Horse Meat") == 0)){
						Sausage s;
						Product * ppc = &s;
						P.delBag(p1);
						P.delBag(p2);
						P.addBag(ppc);
						cout << "Sausage berhasil dibuat" << endl;
				} else {
					cout << "Sausage gagal dibuat" << endl;
				}
			}
		}
	} else {
		cout << "Tas anda kosong" << endl;
	}
}

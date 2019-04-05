#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Facility.hpp"

// kelas Truck, Facility untuk jual Product
class Truck : public Facility{
	public:
		//ctor Truck dengan parameter coolDown
		Truck();
		Truck(int);
		// mengembalikan karakter 'T' sebagai representasi Truck;
		char render();		
		// Menggunakan fasilitas truk. Apabila cooldown>0 maka tidak bisa menggunakan truck
		// Apabila cooldown == 0 maka bisa menggunakan truck
		// Truck menjual semua product dalam bag player 
		void interact(Player& P);


};

#endif

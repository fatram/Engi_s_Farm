#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

// kelas Truck, Facility untuk jual Product
class Truck : public Facility, Renderable {
	private:
		int CoolDown;

	public:
		// mengembalikan karakter 'T' sebagai representasi Truck;

		char render();
		//getter dan setter
		int getCoolDown();
		void setCoolDown(int);

		// Menggunakan fasilitas truk. Apabila cooldown>0 maka tidak bisa menggunakan truck
		// Apabila cooldown == 0 maka bisa menggunakan truck
		// Truck menjual semua product dalam bag player 
		void useFacility(Player& P);


};

#endif
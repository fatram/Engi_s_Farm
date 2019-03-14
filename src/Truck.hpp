#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

// kelas Truck, Facility untuk jual Product
class Truck : public Facility, Renderable {
	public:
		// mengembalikan karakter 'T' sebagai representasi Truck;
		char render();
};

#endif
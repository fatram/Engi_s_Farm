#ifndef TRUCK_HPP
#define TRUCK_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

class Truck : public Facility, Renderable {
	public:
		// mengembalikan karakter 'T' sebagai representasi Truck;
		char render();
};

#endif
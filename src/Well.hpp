#ifndef WELL_HPP
#define WELL_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

class Well : public Facility, Renderable {
	public:
		// mengembalikan karakter 'W' sebagai representasi Well
		char render();
};

#endif
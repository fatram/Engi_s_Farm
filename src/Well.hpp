#ifndef WELL_HPP
#define WELL_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

// kelas Well, Facility untuk ambil air
class Well : public Facility, Renderable {
	public:
		// mengembalikan karakter 'W' sebagai representasi Well
		char render();
};

#endif
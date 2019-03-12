#ifndef MIXER_HPP
#define MIXER_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

class Mixer : public Facility, Renderable {
	public:
		// mengembalikan karakter 'M' sebagai representasi Mixer
		char render();
};

#endif
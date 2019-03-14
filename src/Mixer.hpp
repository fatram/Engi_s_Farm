#ifndef MIXER_HPP
#define MIXER_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

// kelas Mixer, Facility untuk membuat SideProduct
class Mixer : public Facility, Renderable {
	public:
		// mengembalikan karakter 'M' sebagai representasi Mixer
		char render();
};

#endif
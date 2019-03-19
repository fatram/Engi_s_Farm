#ifndef COOP_HPP
#define COOP_HPP

#include "Land.hpp"
#include "Renderable.hpp"

// kelas Coop, Land untuk hewan penghasil telur
class Coop : public Land, public Renderable {
	public:
		// mengembalikan karakter 'o' sebagai representasi Coop
		char render();
};

#endif
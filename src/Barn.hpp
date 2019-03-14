#ifndef BARN_HPP
#define BARN_HPP

#include "Land.hpp"
#include "Renderable.hpp"

// kelas Barn, Land untuk hewan penghasil daging
class Barn : public Land, Renderable {
	public:
		// mengembalikan karakter 'x' sebagai representasi Barn
		char render();
};

#endif
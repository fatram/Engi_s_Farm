#ifndef BARN_HPP
#define BARN_HPP

#include "Land.hpp"
#include "Renderable.hpp"

class Barn : public Land, Renderable {
	public:
		// mengembalikan karakter 'x' sebagai representasi Barn
		char render();
};

#endif
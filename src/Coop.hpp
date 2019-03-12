#ifndef COOP_HPP
#define COOP_HPP

#include "Land.hpp"
#include "Renderable.hpp"

class Coop : public Land, Renderable {
	public:
		// mengembalikan karakter 'o' sebagai representasi Coop
		char render();
};

#endif
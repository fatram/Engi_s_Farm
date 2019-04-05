#ifndef BARN_HPP
#define BARN_HPP

#include "Land.hpp"

// kelas Barn, Land untuk hewan penghasil daging
class Barn : public Land{
	public:
		// mengembalikan karakter 'x' sebagai representasi Barn
		char render();
};

#endif
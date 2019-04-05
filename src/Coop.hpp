#ifndef COOP_HPP
#define COOP_HPP

#include "Land.hpp"

// kelas Coop, Land untuk hewan penghasil telur
class Coop : public Land {
	public:
		// mengembalikan karakter 'o' sebagai representasi Coop
		char render();
};

#endif
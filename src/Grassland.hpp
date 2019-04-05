#ifndef GRASSLAND_HPP
#define GRASSLAND_HPP

#include "Land.hpp"

// kelas GrassLand, Land untuk hewan penghasil susu
class Grassland : public Land {
	public:
		// Mengembalikan karakter '-' sebagai representasi Grassland
		//Grassland(bool hf, bool hg);
		char render();
		char getGrassChar();
};

#endif

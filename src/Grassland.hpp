#ifndef GRASSLAND_HPP
#define GRASSLAND_HPP

#include "Land.hpp"
#include "Renderable.hpp"

// kelas GrassLand, Land untuk hewan penghasil susu
class Grassland : public Land, public Renderable {
	public:
		// Mengembalikan karakter '-' sebagai representasi Grassland
		char render();
};

#endif
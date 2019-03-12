#ifndef GRASSLAND_HPP
#define GRASSLAND_HPP

#include "Land.hpp"
#include "Renderable.hpp"

class Grassland : public Land, Renderable {
	public:
		// Mengembalikan karakter '-' sebagai representasi Grassland
		char render();
};

#endif
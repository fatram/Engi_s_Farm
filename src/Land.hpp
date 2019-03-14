#ifndef LAND_HPP
#define LAND_HPP

#include "Cell.hpp"

// kelas abstrak Land
class Land : public Cell {
	private:
		bool hasGrass;	// true jika ada rumput di land tersebut, false jika sebaliknya
		
	public:
		void grow(); // set hasGrass jadi true
		bool getHasGrass(); // mengembalikan hasGrass
		void setHasGrass(bool); // set hasGrass sesuai input
		virtual ~Land() = 0;
};

#endif
#ifndef LAND_HPP
#define LAND_HPP

#include "Cell.hpp"

// kelas abstrak Land
class Land : public Cell {
	public:
		Land(); //set hasFacility False
		void interact(Player& P); //Do Nothing		
		virtual ~Land() = 0; //virtual dtor agar kelas menjadi abstrak
};

#endif

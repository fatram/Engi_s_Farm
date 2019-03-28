#ifndef FACILITY_HPP
#define FACILITY_HPP

#include "Cell.hpp"

// kelas abstrak Facility
class Facility : public Cell {
	public:
		Facility(int, int); // set hasFasility true;
		virtual ~Facility() ;

		//Fungsi interact yang akan diimplementasikan di Mixer Well dan Truck
		virtual void interact(Player& P) = 0;  
};

#endif

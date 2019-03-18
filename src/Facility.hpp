#ifndef FACILITY_HPP
#define FACILITY_HPP

#include "Cell.hpp"
#include "Player.hpp"

// kelas abstrak Facility
class Facility : public Cell {


	public:
		virtual ~Facility() ;	


		//Fungsi useFacility yang akan diimplementasikan di Mixer Well dan Truck
		virtual void useFacility(Player& P) = 0;  
};

#endif
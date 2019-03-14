#ifndef FACILITY_HPP
#define FACILITY_HPP

#include "Cell.hpp"

// kelas abstrak Facility
class Facility : public Cell {
	public:
		virtual ~Facility() = 0;
};

#endif
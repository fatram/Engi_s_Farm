#ifndef WELL_HPP
#define WELL_HPP

#include "Facility.hpp"

// kelas Well, Facility untuk ambil air
class Well : public Facility{
	public:
		// mengembalikan karakter 'W' sebagai representasi Well
		char render();

		//Menggunakan fasilitas Well untuk mengisi air pada player 
		void interact(Player& P);
};

#endif

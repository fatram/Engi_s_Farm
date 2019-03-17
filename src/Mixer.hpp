#ifndef MIXER_HPP
#define MIXER_HPP

#include "Facility.hpp"
#include "Renderable.hpp"

// kelas Mixer, Facility untuk membuat SideProduct
class Mixer : public Facility, Renderable {
	//friend SideProduct;
	public:
		// mengembalikan karakter 'M' sebagai representasi Mixer
		char render();

		//Menggunakan Mixer untuk menghasilkan SideProduct dari bag player
		//Player dipersilakan memilih product dari bag minimal 2 buah
		//Hasil mix menjadi side product dimasukkan ke dalam bag 
		void useFacility(Player& P);
};

#endif
#ifndef CELL_HPP
#define CELL_HPP

#include "Player.hpp"

// kelas abstrak Cell
class Cell {
	protected:
		int coolDownTruck; //Digunakan untuk mengecek fasilitas truk apakah bisa digunakan
		bool hasFacility;
		bool hasGrass;
	public:
		//ctor
		Cell();
		//user-define ctor
		Cell(int,bool,bool);

		//aksi
		virtual void interact(Player& P) = 0; //kelas pure virtual yg didefinisikan di kelas anaknya
		void grow(); //set hasGrass menjadi true. Prequisite: hasFacility = false  

		//getter dan setter
		int getCoolDownTruck();
		void setCoolDownTruck(int);
		bool getHasFacility();
		void setHasFacility(bool);
		bool getHasGrass(); // mengembalikan hasGrass
		void setHasGrass(bool); // set hasGrass sesuai input
		
};

#endif

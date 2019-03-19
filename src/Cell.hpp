#ifndef CELL_HPP
#define CELL_HPP

// kelas abstrak Cell
class Cell {
	protected:
		int CoolDownTruck; //Digunakan untuk mengecek fasilitas truk apakah bisa digunakan
		bool hasFacility;
	public:
		//ctor
		Cell();
		//user-define ctor
		Cell(int,bool);
		
		virtual void interact();
		//getter dan setter
		int getCoolDownTruck();
		void setCoolDownTruck(int);
		bool getHasFacility();
		void setHasFacility();
		virtual ~Cell();
		
};

#endif
